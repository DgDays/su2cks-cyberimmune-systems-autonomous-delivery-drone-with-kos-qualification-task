# Киберимунный автономный квадрокоптер квалификационная задача
Проводим установку необходимых пакетов:
```bash
# Получение информации о свежих версиях пакетов для дистрибутива
sudo apt-get update

# Установка необходимых пакетов
sudo apt-get install -y git make docker-compose docker.io libfuse2

# Удаление ненужных пакетов
sudo apt-get remove modemmanager -y

# Добавления пользователя user в нужные группы
sudo usermod -aG sudo,docker,dialout user

# Клонирование репозитория с симулятором
git clone https://github.com/DgDays/su2cks-cyberimmune-systems-autonomous-delivery-drone-with-kos-qualification-task.git
```
Для выполнения задачи меняем файл `kos/flight_controller/src/main.cpp`
Добавляем строчки перед `return EXIT_SUCCESS`:
```cpp
    int32_t latitude_p, longitude_p, altitude_p;
    double latitude, longitude, altitude;
    while (true){
	getCoords(latitude_p, longitude_p, altitude_p);
	latitude = latitude_p / pow(10,7);
	longitude = longitude_p / pow(10,7);
	altitude = altitude_p / 100;
	fprintf(stderr, "\nlatitude: %f\tlongitude: %f\taltitude: %f\n\n", latitude,longitude,altitude);
        sleep(1000);
	}
```
Затем выполняем сборку docker-контейнеров и их запуск командой:
```bash
make e2e-offline
```
Автоматически запуститься тестировочная миссия для дрона. Входе миссии будут выводиться координаты нашего летательного аппарата.
Чтобы посмотреть вывод координат можно прописать команду
```bash
docker logs kos
```
Пример вывода координат:
```
latitude: 0.000000      longitude: 0.000000     altitude: 0.000000

latitude: 53.101945     longitude: 107.377439   altitude: 846.000000
```

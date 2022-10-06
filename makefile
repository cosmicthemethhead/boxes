build:
	@ echo "-- GENERATING --"
	@ cmake -S . -B build -G "Ninja"
	@ echo "-- BUILDING --"
	@ cd build; ninja
	@ echo "-- RUNNING --"
	@ cd build; ./boxes

.PHONY: all build clean

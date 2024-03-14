#include <stdio.h>

import json

# Definizione della classe Location
class Location:
    def __init__(self, name, address, capacity, price_per_hour, amenities):
        self.name = name
        self.address = address
        self.capacity = capacity
        self.price_per_hour = price_per_hour
        self.amenities = amenities

# Definizione della classe App per la gestione delle location
class EventLocationApp:
    def __init__(self):
        self.locations = []

    def add_location(self, location):
        self.locations.append(location)

    def search_locations(self, criteria):
        # Effettua una ricerca tra le location disponibili
        results = []
        for location in self.locations:
            if criteria.lower() in location.name.lower():
                results.append(location)
        return results

    def rent_location(self, location_name, hours):
        # Effettua la prenotazione di una location
        for location in self.locations:
            if location.name.lower() == location_name.lower():
                total_price = location.price_per_hour * hours
                return total_price
        return None

# Funzione principale
def main():
    # Creazione di un'applicazione di gestione delle location
    app = EventLocationApp()

    # Aggiunta di alcune location di esempio
    app.add_location(Location("Villa Bella", "Via Roma 123", 100, 50, ["Giardino", "Piscina"]))
    app.add_location(Location("Palazzo Imperiale", "Corso Italia 456", 200, 100, ["Salone", "Terrazza"]))

    # Esecuzione di alcune operazioni di ricerca e prenotazione
    print("Risultati della ricerca per 'Villa':")
    search_results = app.search_locations("Villa")
    for location in search_results:
        print(f"- {location.name}, {location.address}, Capacità: {location.capacity}")

    location_name = "Villa Bella"
    hours = 3
    total_price = app.rent_location(location_name, hours)
    if total_price:
        print(f"Location '{location_name}' prenotata per {hours} ore al prezzo totale di ${total_price}.")
    else:
        print(f"Location '{location_name}' non trovata.")

# Esecuzione del programma
if __name__ == "__main__":
    main()

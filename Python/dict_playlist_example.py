spotify_playlist = dict(
	title 	= "Patagonia Bus",
	author 	= "John Doe",
	songs	= [
		{"Title": "Song 1", "Artist" : ["Blue"], 			"Duration" : 2.5},
		{"Title": "Song 2", "Artist" : ["Kitty", "DJ Cat"], "Duration" : 5.2},
		{"Title": "Song 3", "Artist" : ["Garfield"], 		"Duration" : 2.0}
	]
)

total_duration = 0

for song in spotify_playlist["songs"]:
	total_duration += float(song["Duration"])

print(f"Total duration is {total_duration}.")

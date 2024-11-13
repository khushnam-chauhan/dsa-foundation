#include<iostream>
#include<vector>
#include<string>

using namespace std;

// Song Class
class Song {
private:
    string title;
    string singer;
    int duration;

public:
    Song(string t, string s, int d) : title(t), singer(s), duration(d) {}

    void display() const {
        cout << "Song: " << title << ", Singer: " << singer << ", Duration: " << duration << " sec" << endl;
    }

    string getTitle() const {
        return title;
    }

    string getSinger() const {
        return singer;
    }
};

// Album Class
class Album {
private:
    string albumTitle;
    vector<Song> songs;

public:
    Album(string title) : albumTitle(title) {}

    void addSong(Song song) {
        songs.push_back(song);
    }

    string getAlbumTitle() const {
        return albumTitle;
    }

    void displaySongs() const {
        cout << "Album: " << albumTitle << endl;
        for (const Song& song : songs) {
            song.display();
        }
    }

    const vector<Song>& getSongs() const {
        return songs;
    }
};

// Artist Class
class Artist {
private:
    string name;
    vector<Album> albums;

public:
    Artist(string n) : name(n) {}

    void addAlbum(Album album) {
        albums.push_back(album);
    }

    void displayAlbums() const {
        cout << "Artist: " << name << endl;
        for (const Album& album : albums) {
            album.displaySongs();
        }
    }

    string getName() const {
        return name;
    }

    const vector<Album>& getAlbums() const {
        return albums;
    }
};

int main() {
    // Create songs
    Song song1("Song A", "Singer 1", 210);
    Song song2("Song B", "Singer 1", 200);
    Song song3("Song C", "Singer 2", 190);

    // Create albums and add songs to them
    Album album1("Album 1");
    album1.addSong(song1);
    album1.addSong(song2);

    Album album2("Album 2");
    album2.addSong(song3);

    // Create artists and add albums to them
    Artist artist1("Singer 1");
    artist1.addAlbum(album1);

    Artist artist2("Singer 2");
    artist2.addAlbum(album2);

    // Display artist albums and their songs
    artist1.displayAlbums();
    artist2.displayAlbums();

    return 0;
}

This is a rudimentary JPEG extractor program I wrote, purely as an academic exercise to test how securely stored some NFT objects were.
It accessed files in a cloud storage directory hosting the objects linked to by NFT tokens for a historically significant artist's digitized archive.
I discovered that the cloud storage was insecure and could be accessed by anyone able to figure out the link to the full-resolution file directory (even after the tokens were removed from the public marketplace for unknown reasons).
Because each file was named from e.g. 1.jpg → 12345.jpg due to injudicious archival handling/filenaming, the whole 10000+ images could be downloaded to a local disk in under an hour.
After successfully executing the program and downloading 200+ files in sequence, I deleted them from my harddrive permanently and shelved this program.
Due to issues with linking the cURL library on VSCODE, and working on a short timeframe, I decided to try using the system(wget) command.

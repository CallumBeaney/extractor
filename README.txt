This is a JPEG extractor program I wrote, purely as an academic exercise.
It accessed files in a cloud storage directory hosting the links behind NFT tokens for an artist's archive, which were minted by the company without permission from the artist or their estate; this was written to see how secure that system is.
Once I figured out the link to the digital object behind the NFT's digital token, I wrote this. It can download the entire directory to the local disk. This is because the directory can be accessed with the link, and because each file was named from e.g. 1.jpg → 12345.jpg.
Due to issues with linking the cURL library on VSCODE, and working on a short timeframe, I decided to try using the system(wget) command.

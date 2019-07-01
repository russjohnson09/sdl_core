docker pull russjohnson09/sdl_core:latest

docker run -d -p 12345:12345 -p 8080:8080 -p 8087:8087 -p 3001:3001 --name core_temp1 russjohnson09/sdl_core:latest

docker run -d -p 12345:44567  --name core_temp5 russjohnson09/sdl_core:dev

#--interactive --tty
docker run -it --name core_temp6 russjohnson09/sdl_core:dev



docker-compose build




docker-compose up

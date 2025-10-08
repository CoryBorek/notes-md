# First Version Features

This will be the first "hacky" iteration of the New Overseasons Minecraft Server.

The only new game mode that will be implemented is the Battle Mode. There will be no rewards / currency earned. There is only the "push" gamemode of the Battle.

There are only the three starter battle sets, which are given to you by default, as there will be no quests or dungeons to start.

The battles will be a 3v3 system. Each player will be either a DPS, Tank, or Healer. All of the items that each rank will have will be from vanilla minecraft.

The only major custom features that will be enabled is the cart that is pushed, and the winning conditions.

The map will be centered at 0,0, and the cart will move in the x direction. The more players on each team that are in the radius of the cart, will move the cart in that direction (essentially using a force equation, where the mass is added by 1 to each team to determine the direction). One team moves in +x and the other in -x.

Win condition is which team moves the furthest after 3 mins, or moves 50 blocks. There will only be one spawn point per team.

If the cart is at 0, 0, then whoever moves it next after the timer ends will win.

# Tasks
 - [ ] Create Gamemode as a Game object
 - [ ] Register game to the server upon start.
 - [ ] Add players into game via a command
 - [ ] Start game after 2 players join (all players are one class by default)
   - [ ] Give players infinity/unbreakable bow and one arrow
   - [ ] Shared spawn at first
   - [ ] Add teams (splitting members evenly, probably round robin)
   - [ ] Team Spawns (most likely with a config file / command)
 - [ ] Move object in each direction when a player is within 5 blocks of the object
   - [ ] Only 50 block win condition
 - [ ] Reset Game feature 
 - [ ] Add Timer
   - [ ] Fix race condition at 0, 0.
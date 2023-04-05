# ROKIT
The Beowulf ROKIT System is a project to provide mission makers with an option for an OpFor AI artillery system that doesn't wreak havoc on players, but still provides a challenge and genuine terror of incoming indirect fires.

-	Dramatic, scary, and dangerous AI artillery support option designed to enhance mission experience
-	No additional mods required
-	Just place the ROKIT launcher (currently just a Mk6 Mortar model), and register the artillery in LAMBS DANGER
-	Now available with HE or Cluster munitions!
- ROKIT's have a chance of detonating early before reaching their target mid-air, or fail to detonate on impact creating UXO!
- MLRS varient for multi-rocket mayhem! (ten tubes are better then one!)
-	Optional config for 3CB MLRS technical to take your ROKIT's on the road!


![](https://media3.giphy.com/media/v1.Y2lkPTc5MGI3NjExNDkzNTY2ZDVhMTFhNmIwNDIzMDM3YjMwNzE4NGU2OTQyOGRlNTk5ZiZjdD1n/AADctIXKpydt6TrjwU/giphy.gif)
### MLRS ROKIT in action (Using seperate JSRS and Blastcore effects mods)


# What is ROKIT?
Built from the ground up to be used with AI mods such as LAMBs DANGER. The ROKIT system fires custom rockets with a deadly - but not devastating - payload. With a dramatic smoke trail, a chance for early detonations and scatterings of unexploded ordinance. You’ll find this provides an interesting challenge for the players without risking the entire mission to a well-placed mortar bomb and lack of spacing!

# What does this mod add?
 The Beowulf ROKIT mod adds the Beowulf ROKIT artillery system. You can find the launcher in the "Turrets" catagory of NATO, CSAT, and AAF
 The included optional addons included in the Optional folder of this mod, provides ACE Crew Served Weapon compatability, and a 3CB Factions Hilux mobile version of the ROKIT MLRS.

# How to ROKIT?
 We’d recommend using ROKIT with LAMBs DANGER, or another AI mod that introduces an automatic artillery call function with adjustments. This way the ROKIT’s will get called by the AI automatically, with resonable time and accuracy.
 Simply place the ROKIT with your chosen AI crewmember (You can always replace the crewman with your favourite faction!) and enable your chosen artillery/AI system. Then watch the ROKIT’s fly!

# Why ROKIT?
 As mission makers in our community, we didn’t like to use artillery. We found it could be quite hit or miss (ha) and usually overhwelming to platoon sized missions. So we wanted to tone down artillery damage so its playable, and doesn’t completely ruin a session when a well placed shell/bomb/rocket smashes half the platoon. This did the trick! But we wanted to take it a stage further, and so came up with an artillery system that allowed for somewhat counter-battery in our missions. 
 By having the huge plumes of smoke billowing out the back of the rockets as they launch into the air, and scream back down to earth above the players heads. It allowed the players to react to the threat and not be so disappointing when your session was cut short because that first shot of incoming landed perfectly.

#Whats next for ROKIT? - Please get rid of the Mk6!
 We've created our own models of the launcher and ROKITs themselves, and we'd like to get them imported into Arma in the future to replace the current placeholders. 
 If anyone out there with knowledge of importing 3d models into Arma and configuring turrets is bored - please hit us up!

# THIS ISN’T REALISTIC, MY IMMERSION REEEEE
 Cool story bro… you do you. We’re not here to show you THE BEST WAY. We’re offering the wider community a different way to enjoy the tactical realism space, with a possible solution that still provides a challenge and level of difficulty. But doesn’t overwhelm… and hey it looks cool! 

# License - "Can I repack your mod?"
ROKIT is licensed under the MIT Licence.
Yes, you can download this mod and use it in your own mod folders distributed via your chosen method for private use. Public reposting of the mod is not allowed, or stealing our work to claim as your own will bring shame and dishonour.


# ROKIT Media
[ROKIT MLRS strike](https://cdn.medal.tv/ugcc/content-social/XDtOJev8Dx1xUyrSh_0R1A.mp4?auth=exp=1678156200~data=MTc0MzUwODMzLFlsWVRBeXRsNFdENHkscW9NZUVkeFVJ~hmac=12742caedf88b18dfa39c800f44f3c9d7fbb49e9c8445828592a783461009636)

[ROKIT MLRS Cluster strike In-game](https://cdn.medal.tv/ugcc/content-social/2zWu0rLjLvFnrPGSaHrWZw.mp4?auth=exp=1678156200~data=MTc0MzUwODMzLFlkcGRWeWhLTExRZzQscW9NZUVkeFVJ~hmac=dbd94feefff90be184b102c243657b715919f3add1034d901197704f77174255)

[ROKIT MLRS Strike In-game](https://cdn.medal.tv/ugcc/content-social/f9XsTahFgnPkG52XtKgxIA.mp4?auth=exp=1678156200~data=ODk0OTM4OTgsVVllZXBUUU1fMXdMLSxxb01lRWR4VUk~hmac=81bd0ad6632c7103f68c4020649307fb426c4c5723136074d47470d77a777729)

[Imgur album](https://imgur.com/a/oFLcw62)


# Who are Beowulf?

The Beowulf Arms is a community of players who have come together to share their interests in gaming and other hobbies. With the roots of the group formed around the Arma franchise, we've since adjusted to become a wider encompassing community. 
Our vision is that of a classic British community pub, but with a modern and global-reaching community twist. A central place for the community members to come together as friends in a safe environment to socialise and enjoy themselves.
Whether your interests are solely in Arma,  or in many areas such as DCS and other flight sims, tabletop wargaming, D&D, or “the game of the week”.  We aim for The Beowulf Arms to be a warm and welcoming place to pull up a bar stool, and get involved!

[The Beowulf Arms Website](https://beowulf-arms.com/)


# beo_rokit Classnames

## cfgVehicles
```
// ROKIT Launcher - HE Warheads
beo_arty_rokit
beo_arty_rokit_opf
beo_arty_rokit_ind

// ROKIT Launcher - Cluster Warheads
beo_arty_rokit_cluster
beo_arty_rokit_cluster_opf
beo_arty_rokit_cluster_ind

// MLRS Launcher - HE Warheads
beo_arty_rokit_mlrs
beo_arty_rokit_mlrs_opf
beo_arty_rokit_mlrs_ind

//Backpacks
beo_rokit_bag
beo_rokit_cluster_bag
beo_rokit_mlrs_bag
beo_rokit_bipod_bag

```

## cfgWeapons (For vehicles only)
```
beo_arty_rokit
beo_arty_rokit_mlrs
```

## cfgMagazines
```
beo_arty_mag_122_he
beo_arty_mag10_122_he
beo_arty_mag_122_cluster
beo_arty_mag10_122_cluster
```

## cfgAmmo
```
beo_arty_ammo_122_r_he
beo_arty_ammo_122_r_cluster

```

## ACE CSW
```
beo_arty_rokit_carry
beo_arty_rokit_mlrs_carry
(Both use ace_csw_mortarBaseplate)

beo_arty_mag_122_he_csw_mag
beo_arty_mag_122_cluster_csw_mag
beo_arty_mag10_122_csw_mag
beo_arty_mag10_122_cluster_csw_mag

## 3CB Factions - Hilux (ROKIT MLRS)
beo_arty_hilux_arty
beo_arty_hilux_arty_opf
beo_arty_hilux_arty_ind

beo_arty_hilux_arty_cluster
beo_arty_hilux_arty_cluster_opf
beo_arty_hilux_arty_cluster_ind
```


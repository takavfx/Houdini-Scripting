// Add points to volume along with density attribute.
@density;

if (@density > chf("denscale")){
    addpoint(geoself(), @P);
}

@density = 0;

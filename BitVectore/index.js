class BitVectore{
    constructor() {
        this.array = [];
    }

    set(index, value = 1) {
        if (value) {
            this.array[index] |= (1 << index);
        } else {
            return this.array[index] &= ~(1 << index);
        }
        return this.array;
    }

    get(index) {
        return (this.array[index] & (1 << index)) > 0 ? 1 : 0;
    }
}

const vec = new BitVectore();
vec.set(0, 1);
vec.set(1, 0);
vec.set(2, 1);
vec.set(4, 0);

vec.get(0); // 1
vec.get(1); // 0
vec.get(2); // 1
vec.get(4); // 0
// Vector array [ 1, 2, 4, undefind, 16 ]

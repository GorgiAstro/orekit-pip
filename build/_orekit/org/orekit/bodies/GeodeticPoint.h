#ifndef org_orekit_bodies_GeodeticPoint_H
#define org_orekit_bodies_GeodeticPoint_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class GeodeticPoint : public ::java::lang::Object {
       public:
        enum {
          mid_init$_87096e3fd8086100,
          mid_equals_221e8e85cb385209,
          mid_getAltitude_557b8123390d8d0c,
          mid_getEast_f88961cca75a2c0a,
          mid_getLatitude_557b8123390d8d0c,
          mid_getLongitude_557b8123390d8d0c,
          mid_getNadir_f88961cca75a2c0a,
          mid_getNorth_f88961cca75a2c0a,
          mid_getSouth_f88961cca75a2c0a,
          mid_getWest_f88961cca75a2c0a,
          mid_getZenith_f88961cca75a2c0a,
          mid_hashCode_412668abc8d889e9,
          mid_toString_3cffd47377eca18a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GeodeticPoint(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GeodeticPoint(const GeodeticPoint& obj) : ::java::lang::Object(obj) {}

        static GeodeticPoint *NORTH_POLE;
        static GeodeticPoint *SOUTH_POLE;

        GeodeticPoint(jdouble, jdouble, jdouble);

        jboolean equals(const ::java::lang::Object &) const;
        jdouble getAltitude() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getEast() const;
        jdouble getLatitude() const;
        jdouble getLongitude() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNadir() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNorth() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getSouth() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getWest() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getZenith() const;
        jint hashCode() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(GeodeticPoint);
      extern PyTypeObject *PY_TYPE(GeodeticPoint);

      class t_GeodeticPoint {
      public:
        PyObject_HEAD
        GeodeticPoint object;
        static PyObject *wrap_Object(const GeodeticPoint&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

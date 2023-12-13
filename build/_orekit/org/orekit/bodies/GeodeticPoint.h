#ifndef org_orekit_bodies_GeodeticPoint_H
#define org_orekit_bodies_GeodeticPoint_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class GeodeticPoint : public ::java::lang::Object {
       public:
        enum {
          mid_init$_b5167f35b2521627,
          mid_equals_460c5e2d9d51c6cc,
          mid_getAltitude_b74f83833fdad017,
          mid_getEast_8b724f8b4fdad1a2,
          mid_getLatitude_b74f83833fdad017,
          mid_getLongitude_b74f83833fdad017,
          mid_getNadir_8b724f8b4fdad1a2,
          mid_getNorth_8b724f8b4fdad1a2,
          mid_getSouth_8b724f8b4fdad1a2,
          mid_getWest_8b724f8b4fdad1a2,
          mid_getZenith_8b724f8b4fdad1a2,
          mid_hashCode_55546ef6a647f39b,
          mid_toString_1c1fa1e935d6cdcf,
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

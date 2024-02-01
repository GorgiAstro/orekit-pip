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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class GeodeticPoint : public ::java::lang::Object {
       public:
        enum {
          mid_init$_bd28dc6055dc5bbd,
          mid_equals_72faff9b05f5ed5e,
          mid_getAltitude_9981f74b2d109da6,
          mid_getEast_032312bdeb3f2f93,
          mid_getLatitude_9981f74b2d109da6,
          mid_getLongitude_9981f74b2d109da6,
          mid_getNadir_032312bdeb3f2f93,
          mid_getNorth_032312bdeb3f2f93,
          mid_getSouth_032312bdeb3f2f93,
          mid_getWest_032312bdeb3f2f93,
          mid_getZenith_032312bdeb3f2f93,
          mid_hashCode_d6ab429752e7c267,
          mid_toString_d2c8eb4129821f0e,
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

#ifndef org_orekit_rugged_utils_NormalizedGeodeticPoint_H
#define org_orekit_rugged_utils_NormalizedGeodeticPoint_H

#include "org/orekit/bodies/GeodeticPoint.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        class NormalizedGeodeticPoint : public ::org::orekit::bodies::GeodeticPoint {
         public:
          enum {
            mid_init$_cd5724127cc72e96,
            mid_equals_72faff9b05f5ed5e,
            mid_getLongitude_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NormalizedGeodeticPoint(jobject obj) : ::org::orekit::bodies::GeodeticPoint(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NormalizedGeodeticPoint(const NormalizedGeodeticPoint& obj) : ::org::orekit::bodies::GeodeticPoint(obj) {}

          NormalizedGeodeticPoint(jdouble, jdouble, jdouble, jdouble);

          jboolean equals(const ::java::lang::Object &) const;
          jdouble getLongitude() const;
          jint hashCode() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        extern PyType_Def PY_TYPE_DEF(NormalizedGeodeticPoint);
        extern PyTypeObject *PY_TYPE(NormalizedGeodeticPoint);

        class t_NormalizedGeodeticPoint {
        public:
          PyObject_HEAD
          NormalizedGeodeticPoint object;
          static PyObject *wrap_Object(const NormalizedGeodeticPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

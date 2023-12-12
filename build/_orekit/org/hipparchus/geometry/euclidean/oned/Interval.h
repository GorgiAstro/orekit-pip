#ifndef org_hipparchus_geometry_euclidean_oned_Interval_H
#define org_hipparchus_geometry_euclidean_oned_Interval_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Region$Location;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          class Interval : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ab23f4ae0fb33968,
              mid_checkPoint_97a5a8b1b703b32d,
              mid_getBarycenter_557b8123390d8d0c,
              mid_getInf_557b8123390d8d0c,
              mid_getSize_557b8123390d8d0c,
              mid_getSup_557b8123390d8d0c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Interval(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Interval(const Interval& obj) : ::java::lang::Object(obj) {}

            Interval(jdouble, jdouble);

            ::org::hipparchus::geometry::partitioning::Region$Location checkPoint(jdouble, jdouble) const;
            jdouble getBarycenter() const;
            jdouble getInf() const;
            jdouble getSize() const;
            jdouble getSup() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(Interval);
          extern PyTypeObject *PY_TYPE(Interval);

          class t_Interval {
          public:
            PyObject_HEAD
            Interval object;
            static PyObject *wrap_Object(const Interval&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif

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
              mid_init$_13edac039e8cc967,
              mid_checkPoint_f2abc4661427e1b1,
              mid_getBarycenter_9981f74b2d109da6,
              mid_getInf_9981f74b2d109da6,
              mid_getSize_9981f74b2d109da6,
              mid_getSup_9981f74b2d109da6,
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

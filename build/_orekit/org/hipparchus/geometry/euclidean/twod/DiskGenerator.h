#ifndef org_hipparchus_geometry_euclidean_twod_DiskGenerator_H
#define org_hipparchus_geometry_euclidean_twod_DiskGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Euclidean2D;
        }
      }
      namespace enclosing {
        class EnclosingBall;
        class SupportBallGenerator;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          class DiskGenerator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_ballOnSupport_1093dd6e31c1164f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DiskGenerator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DiskGenerator(const DiskGenerator& obj) : ::java::lang::Object(obj) {}

            DiskGenerator();

            ::org::hipparchus::geometry::enclosing::EnclosingBall ballOnSupport(const ::java::util::List &) const;
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
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(DiskGenerator);
          extern PyTypeObject *PY_TYPE(DiskGenerator);

          class t_DiskGenerator {
          public:
            PyObject_HEAD
            DiskGenerator object;
            static PyObject *wrap_Object(const DiskGenerator&);
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

#ifndef org_hipparchus_geometry_euclidean_threed_SphereGenerator_H
#define org_hipparchus_geometry_euclidean_threed_SphereGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Euclidean3D;
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
        namespace threed {

          class SphereGenerator : public ::java::lang::Object {
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

            explicit SphereGenerator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SphereGenerator(const SphereGenerator& obj) : ::java::lang::Object(obj) {}

            SphereGenerator();

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
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(SphereGenerator);
          extern PyTypeObject *PY_TYPE(SphereGenerator);

          class t_SphereGenerator {
          public:
            PyObject_HEAD
            SphereGenerator object;
            static PyObject *wrap_Object(const SphereGenerator&);
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

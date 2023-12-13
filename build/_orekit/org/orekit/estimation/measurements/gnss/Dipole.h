#ifndef org_orekit_estimation_measurements_gnss_Dipole_H
#define org_orekit_estimation_measurements_gnss_Dipole_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class Dipole;
        }
      }
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
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class Dipole : public ::java::lang::Object {
           public:
            enum {
              mid_getPrimary_8b724f8b4fdad1a2,
              mid_getSecondary_8b724f8b4fdad1a2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Dipole(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Dipole(const Dipole& obj) : ::java::lang::Object(obj) {}

            static Dipole *CANONICAL_I_J;

            ::org::hipparchus::geometry::euclidean::threed::Vector3D getPrimary() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getSecondary() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(Dipole);
          extern PyTypeObject *PY_TYPE(Dipole);

          class t_Dipole {
          public:
            PyObject_HEAD
            Dipole object;
            static PyObject *wrap_Object(const Dipole&);
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

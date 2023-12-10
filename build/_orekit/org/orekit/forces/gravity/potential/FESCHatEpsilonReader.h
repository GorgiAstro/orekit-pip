#ifndef org_orekit_forces_gravity_potential_FESCHatEpsilonReader_H
#define org_orekit_forces_gravity_potential_FESCHatEpsilonReader_H

#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Integer;
    class Double;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class OceanLoadDeformationCoefficients;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class FESCHatEpsilonReader : public ::org::orekit::forces::gravity::potential::OceanTidesReader {
           public:
            enum {
              mid_init$_3bacaeedc9858b49,
              mid_loadData_1815f85c118161ad,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FESCHatEpsilonReader(jobject obj) : ::org::orekit::forces::gravity::potential::OceanTidesReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FESCHatEpsilonReader(const FESCHatEpsilonReader& obj) : ::org::orekit::forces::gravity::potential::OceanTidesReader(obj) {}

            FESCHatEpsilonReader(const ::java::lang::String &, jdouble, jdouble, const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients &, const ::java::util::Map &);

            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          extern PyType_Def PY_TYPE_DEF(FESCHatEpsilonReader);
          extern PyTypeObject *PY_TYPE(FESCHatEpsilonReader);

          class t_FESCHatEpsilonReader {
          public:
            PyObject_HEAD
            FESCHatEpsilonReader object;
            static PyObject *wrap_Object(const FESCHatEpsilonReader&);
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

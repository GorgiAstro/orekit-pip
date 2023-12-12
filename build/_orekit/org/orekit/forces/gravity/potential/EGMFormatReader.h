#ifndef org_orekit_forces_gravity_potential_EGMFormatReader_H
#define org_orekit_forces_gravity_potential_EGMFormatReader_H

#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace text {
    class ParseException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class RawSphericalHarmonicsProvider;
        }
      }
    }
    namespace errors {
      class OrekitException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class EGMFormatReader : public ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader {
           public:
            enum {
              mid_init$_e5ca4b97ee6bd2b6,
              mid_init$_c08444eca1af05e2,
              mid_getProvider_f0b357b475e18957,
              mid_loadData_15770e8d8949a557,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EGMFormatReader(jobject obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EGMFormatReader(const EGMFormatReader& obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {}

            EGMFormatReader(const ::java::lang::String &, jboolean);
            EGMFormatReader(const ::java::lang::String &, jboolean, jboolean);

            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider getProvider(jboolean, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(EGMFormatReader);
          extern PyTypeObject *PY_TYPE(EGMFormatReader);

          class t_EGMFormatReader {
          public:
            PyObject_HEAD
            EGMFormatReader object;
            static PyObject *wrap_Object(const EGMFormatReader&);
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

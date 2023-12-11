#ifndef org_orekit_forces_gravity_potential_PythonPotentialCoefficientsReader_H
#define org_orekit_forces_gravity_potential_PythonPotentialCoefficientsReader_H

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
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace errors {
      class OrekitException;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class RawSphericalHarmonicsProvider;
        }
      }
    }
    namespace time {
      class TimeScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class PythonPotentialCoefficientsReader : public ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader {
           public:
            enum {
              mid_init$_e5ca4b97ee6bd2b6,
              mid_init$_738db7d6574836ac,
              mid_finalize_0640e6acf969ed28,
              mid_getProvider_f0b357b475e18957,
              mid_loadData_15770e8d8949a557,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonPotentialCoefficientsReader(jobject obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonPotentialCoefficientsReader(const PythonPotentialCoefficientsReader& obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {}

            PythonPotentialCoefficientsReader(const ::java::lang::String &, jboolean);
            PythonPotentialCoefficientsReader(const ::java::lang::String &, jboolean, const ::org::orekit::time::TimeScale &);

            void finalize() const;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider getProvider(jboolean, jint, jint) const;
            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonPotentialCoefficientsReader);
          extern PyTypeObject *PY_TYPE(PythonPotentialCoefficientsReader);

          class t_PythonPotentialCoefficientsReader {
          public:
            PyObject_HEAD
            PythonPotentialCoefficientsReader object;
            static PyObject *wrap_Object(const PythonPotentialCoefficientsReader&);
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

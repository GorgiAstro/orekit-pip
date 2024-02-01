#ifndef org_orekit_forces_gravity_potential_GRGSFormatReader_H
#define org_orekit_forces_gravity_potential_GRGSFormatReader_H

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

          class GRGSFormatReader : public ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader {
           public:
            enum {
              mid_init$_c5d48f261709aa3e,
              mid_init$_13b6194a2a01ad07,
              mid_getProvider_0c94c2344ee8a0fa,
              mid_loadData_bec0f846e5ec73da,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GRGSFormatReader(jobject obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GRGSFormatReader(const GRGSFormatReader& obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {}

            GRGSFormatReader(const ::java::lang::String &, jboolean);
            GRGSFormatReader(const ::java::lang::String &, jboolean, const ::org::orekit::time::TimeScale &);

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
          extern PyType_Def PY_TYPE_DEF(GRGSFormatReader);
          extern PyTypeObject *PY_TYPE(GRGSFormatReader);

          class t_GRGSFormatReader {
          public:
            PyObject_HEAD
            GRGSFormatReader object;
            static PyObject *wrap_Object(const GRGSFormatReader&);
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

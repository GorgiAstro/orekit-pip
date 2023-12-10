#ifndef org_orekit_forces_gravity_potential_PotentialCoefficientsReader_H
#define org_orekit_forces_gravity_potential_PotentialCoefficientsReader_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class ParseException;
  }
  namespace io {
    class IOException;
    class InputStream;
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
    namespace data {
      class DataLoader;
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

          class PotentialCoefficientsReader : public ::java::lang::Object {
           public:
            enum {
              mid_getMaxAvailableDegree_570ce0828f81a2c1,
              mid_getMaxAvailableOrder_570ce0828f81a2c1,
              mid_getMaxParseDegree_570ce0828f81a2c1,
              mid_getMaxParseOrder_570ce0828f81a2c1,
              mid_getProvider_fc0a96c558346426,
              mid_getSupportedNames_11b109bd155ca898,
              mid_loadData_1815f85c118161ad,
              mid_missingCoefficientsAllowed_b108b35ef48e27bd,
              mid_setMaxParseDegree_99803b0791f320ff,
              mid_setMaxParseOrder_99803b0791f320ff,
              mid_stillAcceptsData_b108b35ef48e27bd,
              mid_getMu_dff5885c2c873297,
              mid_getAe_dff5885c2c873297,
              mid_getTideSystem_c68abf1ca1fc273e,
              mid_rescale_9a2aa9108cecb925,
              mid_rescale_61f58c83df8a60fe,
              mid_setMu_17db3a65980d3441,
              mid_buildFlatArray_46d958aaa8c2963a,
              mid_toDate_3eda4f7d7f1dde2e,
              mid_toDate_4ace5066ad98bc71,
              mid_buildRow_8c43e11f707ab8a7,
              mid_setReadComplete_bd04c9335fb9e4cf,
              mid_setAe_17db3a65980d3441,
              mid_setTideSystem_9dc8f5cdc0b53f13,
              mid_parseCoefficient_1954fd36afccfc5c,
              mid_setRawCoefficients_27afb517a8911014,
              mid_getBaseProvider_1ac4a92a4fde34c8,
              mid_parseDouble_b36dde1444e08956,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PotentialCoefficientsReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PotentialCoefficientsReader(const PotentialCoefficientsReader& obj) : ::java::lang::Object(obj) {}

            jint getMaxAvailableDegree() const;
            jint getMaxAvailableOrder() const;
            jint getMaxParseDegree() const;
            jint getMaxParseOrder() const;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider getProvider(jboolean, jint, jint) const;
            ::java::lang::String getSupportedNames() const;
            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
            jboolean missingCoefficientsAllowed() const;
            void setMaxParseDegree(jint) const;
            void setMaxParseOrder(jint) const;
            jboolean stillAcceptsData() const;
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
          extern PyType_Def PY_TYPE_DEF(PotentialCoefficientsReader);
          extern PyTypeObject *PY_TYPE(PotentialCoefficientsReader);

          class t_PotentialCoefficientsReader {
          public:
            PyObject_HEAD
            PotentialCoefficientsReader object;
            static PyObject *wrap_Object(const PotentialCoefficientsReader&);
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

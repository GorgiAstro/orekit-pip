#ifndef org_orekit_forces_gravity_potential_OceanTidesReader_H
#define org_orekit_forces_gravity_potential_OceanTidesReader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataLoader;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class OceanTidesWave;
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

          class OceanTidesReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_105e1eadb709d9ac,
              mid_canAdd_905dfe1f877a03f0,
              mid_getMaxAvailableDegree_d6ab429752e7c267,
              mid_getMaxAvailableOrder_d6ab429752e7c267,
              mid_getMaxParseDegree_d6ab429752e7c267,
              mid_getMaxParseOrder_d6ab429752e7c267,
              mid_getSupportedNames_d2c8eb4129821f0e,
              mid_getWaves_d751c1a57012b438,
              mid_setMaxParseDegree_8fd427ab23829bf5,
              mid_setMaxParseOrder_8fd427ab23829bf5,
              mid_stillAcceptsData_eee3de00fe971136,
              mid_startParse_105e1eadb709d9ac,
              mid_addWaveCoefficients_9eca3480475a73b0,
              mid_endParse_ff7cb6c242604316,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OceanTidesReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OceanTidesReader(const OceanTidesReader& obj) : ::java::lang::Object(obj) {}

            OceanTidesReader(const ::java::lang::String &);

            jboolean canAdd(jint, jint) const;
            jint getMaxAvailableDegree() const;
            jint getMaxAvailableOrder() const;
            jint getMaxParseDegree() const;
            jint getMaxParseOrder() const;
            ::java::lang::String getSupportedNames() const;
            ::java::util::List getWaves() const;
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
          extern PyType_Def PY_TYPE_DEF(OceanTidesReader);
          extern PyTypeObject *PY_TYPE(OceanTidesReader);

          class t_OceanTidesReader {
          public:
            PyObject_HEAD
            OceanTidesReader object;
            static PyObject *wrap_Object(const OceanTidesReader&);
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

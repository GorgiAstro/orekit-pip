#ifndef org_orekit_files_ccsds_ndm_tdm_IdentityConverter_H
#define org_orekit_files_ccsds_ndm_tdm_IdentityConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class RangeUnitsConverter;
            class TdmMetadata;
          }
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            class IdentityConverter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_metersToRu_382e9a92dc257319,
                mid_ruToMeters_382e9a92dc257319,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit IdentityConverter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              IdentityConverter(const IdentityConverter& obj) : ::java::lang::Object(obj) {}

              IdentityConverter();

              jdouble metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
              jdouble ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(IdentityConverter);
            extern PyTypeObject *PY_TYPE(IdentityConverter);

            class t_IdentityConverter {
            public:
              PyObject_HEAD
              IdentityConverter object;
              static PyObject *wrap_Object(const IdentityConverter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif

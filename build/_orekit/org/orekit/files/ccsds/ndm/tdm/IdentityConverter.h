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
            class TdmMetadata;
            class RangeUnitsConverter;
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
                mid_init$_ff7cb6c242604316,
                mid_metersToRu_b2dab880055d21ac,
                mid_ruToMeters_b2dab880055d21ac,
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

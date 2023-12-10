#ifndef org_orekit_files_ccsds_ndm_tdm_RangeUnitsConverter_H
#define org_orekit_files_ccsds_ndm_tdm_RangeUnitsConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class TdmMetadata;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
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

            class RangeUnitsConverter : public ::java::lang::Object {
             public:
              enum {
                mid_metersToRu_84fe3cf394b0532d,
                mid_ruToMeters_84fe3cf394b0532d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RangeUnitsConverter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RangeUnitsConverter(const RangeUnitsConverter& obj) : ::java::lang::Object(obj) {}

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
            extern PyType_Def PY_TYPE_DEF(RangeUnitsConverter);
            extern PyTypeObject *PY_TYPE(RangeUnitsConverter);

            class t_RangeUnitsConverter {
            public:
              PyObject_HEAD
              RangeUnitsConverter object;
              static PyObject *wrap_Object(const RangeUnitsConverter&);
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

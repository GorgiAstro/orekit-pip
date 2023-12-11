#ifndef org_orekit_files_ccsds_ndm_adm_AdmParser_H
#define org_orekit_files_ccsds_ndm_adm_AdmParser_H

#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class XmlTokenBuilder;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            class AdmParser : public ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser {
             public:
              enum {
                mid_getMissionReferenceDate_7a97f7e149e79afb,
                mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdmParser(jobject obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdmParser(const AdmParser& obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser(obj) {}

              ::org::orekit::time::AbsoluteDate getMissionReferenceDate() const;
              ::java::util::Map getSpecialXmlElementsBuilders() const;
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
          namespace adm {
            extern PyType_Def PY_TYPE_DEF(AdmParser);
            extern PyTypeObject *PY_TYPE(AdmParser);

            class t_AdmParser {
            public:
              PyObject_HEAD
              AdmParser object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_AdmParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AdmParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AdmParser&, PyTypeObject *, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
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

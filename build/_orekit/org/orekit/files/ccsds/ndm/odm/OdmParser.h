#ifndef org_orekit_files_ccsds_ndm_odm_OdmParser_H
#define org_orekit_files_ccsds_ndm_odm_OdmParser_H

#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"

namespace org {
  namespace orekit {
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
          namespace odm {

            class OdmParser : public ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser {
             public:
              enum {
                mid_getMissionReferenceDate_80e11148db499dda,
                mid_getSelectedMu_9981f74b2d109da6,
                mid_setMuCreated_1ad26e8c8c0cd65b,
                mid_getMuSet_9981f74b2d109da6,
                mid_setMuParsed_1ad26e8c8c0cd65b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OdmParser(jobject obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              OdmParser(const OdmParser& obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser(obj) {}

              ::org::orekit::time::AbsoluteDate getMissionReferenceDate() const;
              jdouble getSelectedMu() const;
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
          namespace odm {
            extern PyType_Def PY_TYPE_DEF(OdmParser);
            extern PyTypeObject *PY_TYPE(OdmParser);

            class t_OdmParser {
            public:
              PyObject_HEAD
              OdmParser object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_OdmParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const OdmParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const OdmParser&, PyTypeObject *, PyTypeObject *);
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

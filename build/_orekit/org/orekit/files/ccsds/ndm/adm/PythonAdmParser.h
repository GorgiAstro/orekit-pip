#ifndef org_orekit_files_ccsds_ndm_adm_PythonAdmParser_H
#define org_orekit_files_ccsds_ndm_adm_PythonAdmParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AdmHeader;
          }
          class NdmConstituent;
          class ParsedUnitsBehavior;
        }
        namespace utils {
          class FileFormat;
        }
      }
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            class PythonAdmParser : public ::org::orekit::files::ccsds::ndm::adm::AdmParser {
             public:
              enum {
                mid_build_2ec5724104d9082e,
                mid_finalize_a1fa5dae97ea5ed2,
                mid_finalizeData_9ab94ac1dc23b105,
                mid_finalizeHeader_9ab94ac1dc23b105,
                mid_finalizeMetadata_9ab94ac1dc23b105,
                mid_getHeader_beec2990b8b4fe1e,
                mid_inData_9ab94ac1dc23b105,
                mid_inHeader_9ab94ac1dc23b105,
                mid_inMetadata_9ab94ac1dc23b105,
                mid_prepareData_9ab94ac1dc23b105,
                mid_prepareHeader_9ab94ac1dc23b105,
                mid_prepareMetadata_9ab94ac1dc23b105,
                mid_pythonDecRef_a1fa5dae97ea5ed2,
                mid_pythonExtension_6c0ce7e438e5ded4,
                mid_pythonExtension_3d7dd2314a0dd456,
                mid_reset_28163d47221b3cf7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonAdmParser(jobject obj) : ::org::orekit::files::ccsds::ndm::adm::AdmParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonAdmParser(const PythonAdmParser& obj) : ::org::orekit::files::ccsds::ndm::adm::AdmParser(obj) {}

              ::org::orekit::files::ccsds::ndm::NdmConstituent build() const;
              void finalize() const;
              jboolean finalizeData() const;
              jboolean finalizeHeader() const;
              jboolean finalizeMetadata() const;
              ::org::orekit::files::ccsds::ndm::adm::AdmHeader getHeader() const;
              jboolean inData() const;
              jboolean inHeader() const;
              jboolean inMetadata() const;
              jboolean prepareData() const;
              jboolean prepareHeader() const;
              jboolean prepareMetadata() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
              void reset(const ::org::orekit::files::ccsds::utils::FileFormat &) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonAdmParser);
            extern PyTypeObject *PY_TYPE(PythonAdmParser);

            class t_PythonAdmParser {
            public:
              PyObject_HEAD
              PythonAdmParser object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_PythonAdmParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonAdmParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonAdmParser&, PyTypeObject *, PyTypeObject *);
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

#ifndef org_orekit_files_ccsds_ndm_adm_PythonAdmParser_H
#define org_orekit_files_ccsds_ndm_adm_PythonAdmParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace utils {
          class FileFormat;
        }
        namespace ndm {
          class NdmConstituent;
          class ParsedUnitsBehavior;
          namespace adm {
            class AdmHeader;
          }
        }
      }
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
                mid_build_0508018a256edbd9,
                mid_finalize_ff7cb6c242604316,
                mid_finalizeData_eee3de00fe971136,
                mid_finalizeHeader_eee3de00fe971136,
                mid_finalizeMetadata_eee3de00fe971136,
                mid_getHeader_6b8c194dac7b9184,
                mid_inData_eee3de00fe971136,
                mid_inHeader_eee3de00fe971136,
                mid_inMetadata_eee3de00fe971136,
                mid_prepareData_eee3de00fe971136,
                mid_prepareHeader_eee3de00fe971136,
                mid_prepareMetadata_eee3de00fe971136,
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
                mid_reset_a23f5f7531d9b583,
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

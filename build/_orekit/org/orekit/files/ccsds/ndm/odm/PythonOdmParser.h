#ifndef org_orekit_files_ccsds_ndm_odm_PythonOdmParser_H
#define org_orekit_files_ccsds_ndm_odm_PythonOdmParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

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
          namespace odm {
            class OdmHeader;
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
          namespace odm {

            class PythonOdmParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
             public:
              enum {
                mid_build_0508018a256edbd9,
                mid_finalize_ff7cb6c242604316,
                mid_finalizeData_eee3de00fe971136,
                mid_finalizeHeader_eee3de00fe971136,
                mid_finalizeMetadata_eee3de00fe971136,
                mid_getFileFormat_49975b0867f6c97c,
                mid_getHeader_662984e7008bcc88,
                mid_getMuSet_9981f74b2d109da6,
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
                mid_setMuCreated_1ad26e8c8c0cd65b,
                mid_setMuParsed_1ad26e8c8c0cd65b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonOdmParser(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonOdmParser(const PythonOdmParser& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {}

              ::org::orekit::files::ccsds::ndm::NdmConstituent build() const;
              void finalize() const;
              jboolean finalizeData() const;
              jboolean finalizeHeader() const;
              jboolean finalizeMetadata() const;
              ::org::orekit::files::ccsds::utils::FileFormat getFileFormat() const;
              ::org::orekit::files::ccsds::ndm::odm::OdmHeader getHeader() const;
              jdouble getMuSet() const;
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
              void setMuCreated(jdouble) const;
              void setMuParsed(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonOdmParser);
            extern PyTypeObject *PY_TYPE(PythonOdmParser);

            class t_PythonOdmParser {
            public:
              PyObject_HEAD
              PythonOdmParser object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_PythonOdmParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonOdmParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonOdmParser&, PyTypeObject *, PyTypeObject *);
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

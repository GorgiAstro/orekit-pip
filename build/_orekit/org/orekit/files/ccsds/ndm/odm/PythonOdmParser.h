#ifndef org_orekit_files_ccsds_ndm_odm_PythonOdmParser_H
#define org_orekit_files_ccsds_ndm_odm_PythonOdmParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class ParsedUnitsBehavior;
          class NdmConstituent;
          namespace odm {
            class OdmHeader;
          }
        }
        namespace utils {
          class FileFormat;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
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
                mid_build_303f51e33561a967,
                mid_finalize_0640e6acf969ed28,
                mid_finalizeData_89b302893bdbe1f1,
                mid_finalizeHeader_89b302893bdbe1f1,
                mid_finalizeMetadata_89b302893bdbe1f1,
                mid_getFileFormat_c3a4c5f37e67a25e,
                mid_getHeader_d7722dc369ae0874,
                mid_getMuSet_557b8123390d8d0c,
                mid_inData_89b302893bdbe1f1,
                mid_inHeader_89b302893bdbe1f1,
                mid_inMetadata_89b302893bdbe1f1,
                mid_prepareData_89b302893bdbe1f1,
                mid_prepareHeader_89b302893bdbe1f1,
                mid_prepareMetadata_89b302893bdbe1f1,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                mid_reset_a580586827f4ec13,
                mid_setMuCreated_10f281d777284cea,
                mid_setMuParsed_10f281d777284cea,
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

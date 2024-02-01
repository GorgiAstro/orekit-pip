#ifndef org_orekit_files_ccsds_ndm_PythonNdmConstituent_H
#define org_orekit_files_ccsds_ndm_PythonNdmConstituent_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace files {
      namespace ccsds {
        namespace section {
          class Header;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          class PythonNdmConstituent : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
           public:
            enum {
              mid_init$_78197781b814ac28,
              mid_finalize_ff7cb6c242604316,
              mid_getConventions_635853a14837ea6f,
              mid_getDataContext_66ee964ea58dd871,
              mid_getHeader_a5bdfcd14307795f,
              mid_getSegments_d751c1a57012b438,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              mid_validate_ff7cb6c242604316,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonNdmConstituent(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonNdmConstituent(const PythonNdmConstituent& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

            PythonNdmConstituent(const ::org::orekit::files::ccsds::section::Header &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &);

            void finalize() const;
            ::org::orekit::utils::IERSConventions getConventions() const;
            ::org::orekit::data::DataContext getDataContext() const;
            ::org::orekit::files::ccsds::section::Header getHeader() const;
            ::java::util::List getSegments() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            void validate() const;
          };
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
          extern PyType_Def PY_TYPE_DEF(PythonNdmConstituent);
          extern PyTypeObject *PY_TYPE(PythonNdmConstituent);

          class t_PythonNdmConstituent {
          public:
            PyObject_HEAD
            PythonNdmConstituent object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PythonNdmConstituent *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonNdmConstituent&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonNdmConstituent&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif

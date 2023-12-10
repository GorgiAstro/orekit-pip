#ifndef org_orekit_files_ccsds_ndm_PythonNdmConstituent_H
#define org_orekit_files_ccsds_ndm_PythonNdmConstituent_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Header;
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
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
              mid_init$_c9d5a187842fe993,
              mid_finalize_7ae3461a92a43152,
              mid_getConventions_f657aa17e72227da,
              mid_getDataContext_fc8fc85e38e59042,
              mid_getHeader_2764986a35b07524,
              mid_getSegments_a6156df500549a58,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
              mid_validate_7ae3461a92a43152,
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

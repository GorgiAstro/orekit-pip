#ifndef org_orekit_files_ccsds_ndm_PythonNdmConstituent_H
#define org_orekit_files_ccsds_ndm_PythonNdmConstituent_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Header;
        }
      }
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
              mid_init$_3744512ad200554d,
              mid_finalize_0640e6acf969ed28,
              mid_getConventions_690653480c12ac72,
              mid_getDataContext_b259b25d6495e5b3,
              mid_getHeader_6fe6597816e9e593,
              mid_getSegments_0d9551367f7ecdef,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              mid_validate_0640e6acf969ed28,
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

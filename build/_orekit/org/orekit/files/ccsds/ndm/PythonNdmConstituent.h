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
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          class PythonNdmConstituent : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
           public:
            enum {
              mid_init$_a303aa47932e1eeb,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_getConventions_53aaf70620a914af,
              mid_getDataContext_687c2d3d1010744e,
              mid_getHeader_e6dd83960ea2d5d6,
              mid_getSegments_e62d3bb06d56d7e3,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
              mid_validate_a1fa5dae97ea5ed2,
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

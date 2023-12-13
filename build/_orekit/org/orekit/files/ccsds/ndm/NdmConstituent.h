#ifndef org_orekit_files_ccsds_ndm_NdmConstituent_H
#define org_orekit_files_ccsds_ndm_NdmConstituent_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
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

          class NdmConstituent : public ::java::lang::Object {
           public:
            enum {
              mid_getConventions_53aaf70620a914af,
              mid_getDataContext_687c2d3d1010744e,
              mid_getHeader_e6dd83960ea2d5d6,
              mid_getSegments_e62d3bb06d56d7e3,
              mid_setHeader_c992d9bc15da9ba3,
              mid_setSegments_0e7c3032c7c93ed3,
              mid_validate_a1fa5dae97ea5ed2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NdmConstituent(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NdmConstituent(const NdmConstituent& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::utils::IERSConventions getConventions() const;
            ::org::orekit::data::DataContext getDataContext() const;
            ::org::orekit::files::ccsds::section::Header getHeader() const;
            ::java::util::List getSegments() const;
            void setHeader(const ::org::orekit::files::ccsds::section::Header &) const;
            void setSegments(const ::java::util::List &) const;
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
          extern PyType_Def PY_TYPE_DEF(NdmConstituent);
          extern PyTypeObject *PY_TYPE(NdmConstituent);

          class t_NdmConstituent {
          public:
            PyObject_HEAD
            NdmConstituent object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_NdmConstituent *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NdmConstituent&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NdmConstituent&, PyTypeObject *, PyTypeObject *);
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

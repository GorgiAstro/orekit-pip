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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          class NdmConstituent : public ::java::lang::Object {
           public:
            enum {
              mid_getConventions_60f9ded87ab7ca4c,
              mid_getDataContext_0b7cf48ee6a922ee,
              mid_getHeader_0e1b4a5061fb71d6,
              mid_getSegments_2afa36052df4765d,
              mid_setHeader_023fa04bd3c493a9,
              mid_setSegments_de3e021e7266b71e,
              mid_validate_0fa09c18fee449d5,
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

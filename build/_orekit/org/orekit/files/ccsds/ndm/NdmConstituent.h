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

          class NdmConstituent : public ::java::lang::Object {
           public:
            enum {
              mid_getConventions_f657aa17e72227da,
              mid_getDataContext_fc8fc85e38e59042,
              mid_getHeader_2764986a35b07524,
              mid_getSegments_a6156df500549a58,
              mid_setHeader_10e3029ffe650b4e,
              mid_setSegments_65de9727799c5641,
              mid_validate_7ae3461a92a43152,
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

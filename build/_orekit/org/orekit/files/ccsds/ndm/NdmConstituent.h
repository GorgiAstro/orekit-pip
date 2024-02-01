#ifndef org_orekit_files_ccsds_ndm_NdmConstituent_H
#define org_orekit_files_ccsds_ndm_NdmConstituent_H

#include "java/lang/Object.h"

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
    class Class;
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
              mid_getConventions_635853a14837ea6f,
              mid_getDataContext_66ee964ea58dd871,
              mid_getHeader_a5bdfcd14307795f,
              mid_getSegments_d751c1a57012b438,
              mid_setHeader_54cf4586f87f6b7f,
              mid_setSegments_aa335fea495d60e0,
              mid_validate_ff7cb6c242604316,
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

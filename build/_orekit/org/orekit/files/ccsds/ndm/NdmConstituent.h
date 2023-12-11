#ifndef org_orekit_files_ccsds_ndm_NdmConstituent_H
#define org_orekit_files_ccsds_ndm_NdmConstituent_H

#include "java/lang/Object.h"

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
              mid_getConventions_690653480c12ac72,
              mid_getDataContext_b259b25d6495e5b3,
              mid_getHeader_6fe6597816e9e593,
              mid_getSegments_0d9551367f7ecdef,
              mid_setHeader_7884456a8420d358,
              mid_setSegments_4ccaedadb068bdeb,
              mid_validate_0640e6acf969ed28,
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

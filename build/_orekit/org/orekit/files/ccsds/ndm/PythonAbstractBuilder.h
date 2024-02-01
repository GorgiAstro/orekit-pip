#ifndef org_orekit_files_ccsds_ndm_PythonAbstractBuilder_H
#define org_orekit_files_ccsds_ndm_PythonAbstractBuilder_H

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class RangeUnitsConverter;
          }
        }
      }
    }
  }
}
namespace java {
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

          class PythonAbstractBuilder : public ::org::orekit::files::ccsds::ndm::AbstractBuilder {
           public:
            enum {
              mid_init$_46bd2dc5f5ed7d55,
              mid_create_8db1476e15353061,
              mid_finalize_ff7cb6c242604316,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractBuilder(jobject obj) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractBuilder(const PythonAbstractBuilder& obj) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(obj) {}

            PythonAbstractBuilder(const ::org::orekit::utils::IERSConventions &, jdouble, jdouble, const ::org::orekit::data::DataContext &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &);

            ::org::orekit::files::ccsds::ndm::AbstractBuilder create(const ::org::orekit::utils::IERSConventions &, jdouble, jdouble, const ::org::orekit::data::DataContext &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &) const;
            void finalize() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonAbstractBuilder);
          extern PyTypeObject *PY_TYPE(PythonAbstractBuilder);

          class t_PythonAbstractBuilder {
          public:
            PyObject_HEAD
            PythonAbstractBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PythonAbstractBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonAbstractBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonAbstractBuilder&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif

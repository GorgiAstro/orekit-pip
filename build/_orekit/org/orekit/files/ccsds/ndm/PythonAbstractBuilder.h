#ifndef org_orekit_files_ccsds_ndm_PythonAbstractBuilder_H
#define org_orekit_files_ccsds_ndm_PythonAbstractBuilder_H

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class RangeUnitsConverter;
          }
        }
      }
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace data {
      class DataContext;
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
              mid_init$_d534fa6767f45c74,
              mid_create_cbd54da82dabf79c,
              mid_finalize_0640e6acf969ed28,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
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

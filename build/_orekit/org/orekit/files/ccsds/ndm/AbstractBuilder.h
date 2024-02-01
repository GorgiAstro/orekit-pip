#ifndef org_orekit_files_ccsds_ndm_AbstractBuilder_H
#define org_orekit_files_ccsds_ndm_AbstractBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class AbstractBuilder;
          namespace tdm {
            class RangeUnitsConverter;
          }
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
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

          class AbstractBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_getConventions_635853a14837ea6f,
              mid_getDataContext_66ee964ea58dd871,
              mid_getEquatorialRadius_9981f74b2d109da6,
              mid_getFlattening_9981f74b2d109da6,
              mid_getMissionReferenceDate_80e11148db499dda,
              mid_getRangeUnitsConverter_9038361d1e667151,
              mid_withConventions_c01141c865e648ee,
              mid_withDataContext_9febe7f536541907,
              mid_withEquatorialRadius_6656676ab2dcf86b,
              mid_withFlattening_6656676ab2dcf86b,
              mid_withMissionReferenceDate_ad81fb5fa8682be2,
              mid_withRangeUnitsConverter_993de5b681e1d19d,
              mid_create_8db1476e15353061,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractBuilder(const AbstractBuilder& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::utils::IERSConventions getConventions() const;
            ::org::orekit::data::DataContext getDataContext() const;
            jdouble getEquatorialRadius() const;
            jdouble getFlattening() const;
            ::org::orekit::time::AbsoluteDate getMissionReferenceDate() const;
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter getRangeUnitsConverter() const;
            AbstractBuilder withConventions(const ::org::orekit::utils::IERSConventions &) const;
            AbstractBuilder withDataContext(const ::org::orekit::data::DataContext &) const;
            AbstractBuilder withEquatorialRadius(jdouble) const;
            AbstractBuilder withFlattening(jdouble) const;
            AbstractBuilder withMissionReferenceDate(const ::org::orekit::time::AbsoluteDate &) const;
            AbstractBuilder withRangeUnitsConverter(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &) const;
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
          extern PyType_Def PY_TYPE_DEF(AbstractBuilder);
          extern PyTypeObject *PY_TYPE(AbstractBuilder);

          class t_AbstractBuilder {
          public:
            PyObject_HEAD
            AbstractBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractBuilder&, PyTypeObject *);
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

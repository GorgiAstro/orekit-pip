#ifndef org_orekit_files_ccsds_ndm_AbstractBuilder_H
#define org_orekit_files_ccsds_ndm_AbstractBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class RangeUnitsConverter;
          }
          class AbstractBuilder;
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
              mid_getConventions_690653480c12ac72,
              mid_getDataContext_b259b25d6495e5b3,
              mid_getEquatorialRadius_557b8123390d8d0c,
              mid_getFlattening_557b8123390d8d0c,
              mid_getMissionReferenceDate_7a97f7e149e79afb,
              mid_getRangeUnitsConverter_5806a7bc4fd700bf,
              mid_withConventions_a430d35ec0120e11,
              mid_withDataContext_f1ec720b340e65e6,
              mid_withEquatorialRadius_07391098c80e95e2,
              mid_withFlattening_07391098c80e95e2,
              mid_withMissionReferenceDate_13fd3e8f49e19c03,
              mid_withRangeUnitsConverter_4667add1a360d56c,
              mid_create_cbd54da82dabf79c,
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

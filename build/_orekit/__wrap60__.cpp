#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *WriterBuilder::class$ = NULL;
          jmethodID *WriterBuilder::mids$ = NULL;
          bool WriterBuilder::live$ = false;

          jclass WriterBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/WriterBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_fe20320dccf187ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_buildAcmWriter_fc5d40ba6668d1b5] = env->getMethodID(cls, "buildAcmWriter", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmWriter;");
              mids$[mid_buildAemWriter_4cbddbbfbad55305] = env->getMethodID(cls, "buildAemWriter", "()Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;");
              mids$[mid_buildApmWriter_184b535474e11b6a] = env->getMethodID(cls, "buildApmWriter", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmWriter;");
              mids$[mid_buildCdmWriter_d133dbcd26647dc1] = env->getMethodID(cls, "buildCdmWriter", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmWriter;");
              mids$[mid_buildNdmWriter_12d79f2835b2f4d6] = env->getMethodID(cls, "buildNdmWriter", "()Lorg/orekit/files/ccsds/ndm/NdmWriter;");
              mids$[mid_buildOcmWriter_4c25f8fac6b2b165] = env->getMethodID(cls, "buildOcmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;");
              mids$[mid_buildOemWriter_a1a48572c2d708e8] = env->getMethodID(cls, "buildOemWriter", "()Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;");
              mids$[mid_buildOmmWriter_9813d7360f236031] = env->getMethodID(cls, "buildOmmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmWriter;");
              mids$[mid_buildOpmWriter_c889d008210b41ea] = env->getMethodID(cls, "buildOpmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmWriter;");
              mids$[mid_buildTdmWriter_26fcb0c241b23af1] = env->getMethodID(cls, "buildTdmWriter", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmWriter;");
              mids$[mid_create_87cfed1540ee5850] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/WriterBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          WriterBuilder::WriterBuilder() : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          WriterBuilder::WriterBuilder(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_fe20320dccf187ae, a0.this$)) {}

          ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter WriterBuilder::buildAcmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter(env->callObjectMethod(this$, mids$[mid_buildAcmWriter_fc5d40ba6668d1b5]));
          }

          ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter WriterBuilder::buildAemWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter(env->callObjectMethod(this$, mids$[mid_buildAemWriter_4cbddbbfbad55305]));
          }

          ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter WriterBuilder::buildApmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter(env->callObjectMethod(this$, mids$[mid_buildApmWriter_184b535474e11b6a]));
          }

          ::org::orekit::files::ccsds::ndm::cdm::CdmWriter WriterBuilder::buildCdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::cdm::CdmWriter(env->callObjectMethod(this$, mids$[mid_buildCdmWriter_d133dbcd26647dc1]));
          }

          ::org::orekit::files::ccsds::ndm::NdmWriter WriterBuilder::buildNdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::NdmWriter(env->callObjectMethod(this$, mids$[mid_buildNdmWriter_12d79f2835b2f4d6]));
          }

          ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter WriterBuilder::buildOcmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter(env->callObjectMethod(this$, mids$[mid_buildOcmWriter_4c25f8fac6b2b165]));
          }

          ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter WriterBuilder::buildOemWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter(env->callObjectMethod(this$, mids$[mid_buildOemWriter_a1a48572c2d708e8]));
          }

          ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter WriterBuilder::buildOmmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter(env->callObjectMethod(this$, mids$[mid_buildOmmWriter_9813d7360f236031]));
          }

          ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter WriterBuilder::buildOpmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter(env->callObjectMethod(this$, mids$[mid_buildOpmWriter_c889d008210b41ea]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::TdmWriter WriterBuilder::buildTdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::TdmWriter(env->callObjectMethod(this$, mids$[mid_buildTdmWriter_26fcb0c241b23af1]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          static PyObject *t_WriterBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WriterBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WriterBuilder_of_(t_WriterBuilder *self, PyObject *args);
          static int t_WriterBuilder_init_(t_WriterBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_WriterBuilder_buildAcmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildAemWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildApmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildCdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildNdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOcmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOemWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOmmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOpmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildTdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_get__parameters_(t_WriterBuilder *self, void *data);
          static PyGetSetDef t_WriterBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_WriterBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_WriterBuilder__methods_[] = {
            DECLARE_METHOD(t_WriterBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WriterBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WriterBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_WriterBuilder, buildAcmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildAemWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildApmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildCdmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildNdmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOcmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOemWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOmmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOpmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildTdmWriter, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WriterBuilder)[] = {
            { Py_tp_methods, t_WriterBuilder__methods_ },
            { Py_tp_init, (void *) t_WriterBuilder_init_ },
            { Py_tp_getset, t_WriterBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WriterBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(WriterBuilder, t_WriterBuilder, WriterBuilder);
          PyObject *t_WriterBuilder::wrap_Object(const WriterBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WriterBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WriterBuilder *self = (t_WriterBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_WriterBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WriterBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WriterBuilder *self = (t_WriterBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_WriterBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(WriterBuilder), &PY_TYPE_DEF(WriterBuilder), module, "WriterBuilder", 0);
          }

          void t_WriterBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "class_", make_descriptor(WriterBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "wrapfn_", make_descriptor(t_WriterBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WriterBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WriterBuilder::initializeClass, 1)))
              return NULL;
            return t_WriterBuilder::wrap_Object(WriterBuilder(((t_WriterBuilder *) arg)->object.this$));
          }
          static PyObject *t_WriterBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WriterBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WriterBuilder_of_(t_WriterBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_WriterBuilder_init_(t_WriterBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                WriterBuilder object((jobject) NULL);

                INT_CALL(object = WriterBuilder());
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(WriterBuilder);
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                WriterBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = WriterBuilder(a0));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(WriterBuilder);
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_WriterBuilder_buildAcmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAcmWriter());
            return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildAemWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAemWriter());
            return ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildApmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildApmWriter());
            return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildCdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::cdm::CdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildCdmWriter());
            return ::org::orekit::files::ccsds::ndm::cdm::t_CdmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildNdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::NdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildNdmWriter());
            return ::org::orekit::files::ccsds::ndm::t_NdmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOcmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOcmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOemWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOemWriter());
            return ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOmmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOmmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOpmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOpmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildTdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::TdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildTdmWriter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_TdmWriter::wrap_Object(result);
          }
          static PyObject *t_WriterBuilder_get__parameters_(t_WriterBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencySmoother.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/util/HashMap.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SingleFrequencySmoother::class$ = NULL;
          jmethodID *SingleFrequencySmoother::mids$ = NULL;
          bool SingleFrequencySmoother::live$ = false;

          jclass SingleFrequencySmoother::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SingleFrequencySmoother");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6bdd0539bdbc7abd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/MeasurementType;DID)V");
              mids$[mid_copyObservationData_5627f6437b3ab888] = env->getMethodID(cls, "copyObservationData", "(Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_createFilter_be9a192f0e637d75] = env->getMethodID(cls, "createFilter", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter;");
              mids$[mid_filterDataSet_c4e86f2eccc88b6a] = env->getMethodID(cls, "filterDataSet", "(Ljava/util/List;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getFilteredDataMap_f21c52aaf6a29827] = env->getMethodID(cls, "getFilteredDataMap", "()Ljava/util/HashMap;");
              mids$[mid_getMapFilters_f21c52aaf6a29827] = env->getMethodID(cls, "getMapFilters", "()Ljava/util/HashMap;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleFrequencySmoother::SingleFrequencySmoother(const ::org::orekit::gnss::MeasurementType & a0, jdouble a1, jint a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6bdd0539bdbc7abd, a0.this$, a1, a2, a3)) {}

          ::org::orekit::files::rinex::observation::ObservationData SingleFrequencySmoother::copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData & a0) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_copyObservationData_5627f6437b3ab888], a0.this$));
          }

          ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter SingleFrequencySmoother::createFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::gnss::SatelliteSystem & a2) const
          {
            return ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter(env->callObjectMethod(this$, mids$[mid_createFilter_be9a192f0e637d75], a0.this$, a1.this$, a2.this$));
          }

          void SingleFrequencySmoother::filterDataSet(const ::java::util::List & a0, const ::org::orekit::gnss::SatelliteSystem & a1, jint a2, const ::org::orekit::gnss::ObservationType & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_filterDataSet_c4e86f2eccc88b6a], a0.this$, a1.this$, a2, a3.this$);
          }

          ::java::util::HashMap SingleFrequencySmoother::getFilteredDataMap() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getFilteredDataMap_f21c52aaf6a29827]));
          }

          ::java::util::HashMap SingleFrequencySmoother::getMapFilters() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getMapFilters_f21c52aaf6a29827]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {
          static PyObject *t_SingleFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleFrequencySmoother_init_(t_SingleFrequencySmoother *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleFrequencySmoother_copyObservationData(t_SingleFrequencySmoother *self, PyObject *arg);
          static PyObject *t_SingleFrequencySmoother_createFilter(t_SingleFrequencySmoother *self, PyObject *args);
          static PyObject *t_SingleFrequencySmoother_filterDataSet(t_SingleFrequencySmoother *self, PyObject *args);
          static PyObject *t_SingleFrequencySmoother_getFilteredDataMap(t_SingleFrequencySmoother *self);
          static PyObject *t_SingleFrequencySmoother_getMapFilters(t_SingleFrequencySmoother *self);
          static PyObject *t_SingleFrequencySmoother_get__filteredDataMap(t_SingleFrequencySmoother *self, void *data);
          static PyObject *t_SingleFrequencySmoother_get__mapFilters(t_SingleFrequencySmoother *self, void *data);
          static PyGetSetDef t_SingleFrequencySmoother__fields_[] = {
            DECLARE_GET_FIELD(t_SingleFrequencySmoother, filteredDataMap),
            DECLARE_GET_FIELD(t_SingleFrequencySmoother, mapFilters),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SingleFrequencySmoother__methods_[] = {
            DECLARE_METHOD(t_SingleFrequencySmoother, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencySmoother, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencySmoother, copyObservationData, METH_O),
            DECLARE_METHOD(t_SingleFrequencySmoother, createFilter, METH_VARARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, filterDataSet, METH_VARARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, getFilteredDataMap, METH_NOARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, getMapFilters, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleFrequencySmoother)[] = {
            { Py_tp_methods, t_SingleFrequencySmoother__methods_ },
            { Py_tp_init, (void *) t_SingleFrequencySmoother_init_ },
            { Py_tp_getset, t_SingleFrequencySmoother__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleFrequencySmoother)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SingleFrequencySmoother, t_SingleFrequencySmoother, SingleFrequencySmoother);

          void t_SingleFrequencySmoother::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleFrequencySmoother), &PY_TYPE_DEF(SingleFrequencySmoother), module, "SingleFrequencySmoother", 0);
          }

          void t_SingleFrequencySmoother::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "class_", make_descriptor(SingleFrequencySmoother::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "wrapfn_", make_descriptor(t_SingleFrequencySmoother::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleFrequencySmoother::initializeClass, 1)))
              return NULL;
            return t_SingleFrequencySmoother::wrap_Object(SingleFrequencySmoother(((t_SingleFrequencySmoother *) arg)->object.this$));
          }
          static PyObject *t_SingleFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleFrequencySmoother::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleFrequencySmoother_init_(t_SingleFrequencySmoother *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::MeasurementType a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            jdouble a3;
            SingleFrequencySmoother object((jobject) NULL);

            if (!parseArgs(args, "KDID", ::org::orekit::gnss::MeasurementType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_MeasurementType::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = SingleFrequencySmoother(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleFrequencySmoother_copyObservationData(t_SingleFrequencySmoother *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copyObservationData(a0));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "copyObservationData", arg);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_createFilter(t_SingleFrequencySmoother *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.createFilter(a0, a1, a2));
              return ::org::orekit::estimation::measurements::filtering::t_SingleFrequencyHatchFilter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "createFilter", args);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_filterDataSet(t_SingleFrequencySmoother *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::gnss::ObservationType a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "KKIK", ::java::util::List::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.filterDataSet(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filterDataSet", args);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_getFilteredDataMap(t_SingleFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(result);
          }

          static PyObject *t_SingleFrequencySmoother_getMapFilters(t_SingleFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType), ::org::orekit::estimation::measurements::filtering::PY_TYPE(SingleFrequencyHatchFilter));
          }

          static PyObject *t_SingleFrequencySmoother_get__filteredDataMap(t_SingleFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(value);
          }

          static PyObject *t_SingleFrequencySmoother_get__mapFilters(t_SingleFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmParser::class$ = NULL;
              jmethodID *OpmParser::mids$ = NULL;
              bool OpmParser::live$ = false;

              jclass OpmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_83ca4b0a6886ddd3] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/opm/Opm;");
                  mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_de29107d9fd9c097] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Opm OpmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Opm(env->callObjectMethod(this$, mids$[mid_build_83ca4b0a6886ddd3]));
              }

              jboolean OpmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_9ab94ac1dc23b105]);
              }

              jboolean OpmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_9ab94ac1dc23b105]);
              }

              jboolean OpmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OpmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_de29107d9fd9c097]));
              }

              ::java::util::Map OpmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a]));
              }

              jboolean OpmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_9ab94ac1dc23b105]);
              }

              jboolean OpmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_9ab94ac1dc23b105]);
              }

              jboolean OpmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_9ab94ac1dc23b105]);
              }

              jboolean OpmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_9ab94ac1dc23b105]);
              }

              jboolean OpmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_9ab94ac1dc23b105]);
              }

              jboolean OpmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_9ab94ac1dc23b105]);
              }

              void OpmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {
              static PyObject *t_OpmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmParser_of_(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_build(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_getHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_getSpecialXmlElementsBuilders(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_reset(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_get__header(t_OpmParser *self, void *data);
              static PyObject *t_OpmParser_get__specialXmlElementsBuilders(t_OpmParser *self, void *data);
              static PyObject *t_OpmParser_get__parameters_(t_OpmParser *self, void *data);
              static PyGetSetDef t_OpmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OpmParser, header),
                DECLARE_GET_FIELD(t_OpmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OpmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmParser__methods_[] = {
                DECLARE_METHOD(t_OpmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmParser)[] = {
                { Py_tp_methods, t_OpmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OpmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OpmParser, t_OpmParser, OpmParser);
              PyObject *t_OpmParser::wrap_Object(const OpmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OpmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmParser *self = (t_OpmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OpmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OpmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmParser *self = (t_OpmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OpmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmParser), &PY_TYPE_DEF(OpmParser), module, "OpmParser", 0);
              }

              void t_OpmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "class_", make_descriptor(OpmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "wrapfn_", make_descriptor(t_OpmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OpmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmParser::initializeClass, 1)))
                  return NULL;
                return t_OpmParser::wrap_Object(OpmParser(((t_OpmParser *) arg)->object.this$));
              }
              static PyObject *t_OpmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpmParser_of_(t_OpmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OpmParser_build(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::Opm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Opm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OpmParser_finalizeData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OpmParser_finalizeHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OpmParser_finalizeMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OpmParser_getHeader(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OpmParser_getSpecialXmlElementsBuilders(t_OpmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OpmParser_inData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OpmParser_inHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OpmParser_inMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OpmParser_prepareData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OpmParser_prepareHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OpmParser_prepareMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OpmParser_reset(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OpmParser_get__parameters_(t_OpmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OpmParser_get__header(t_OpmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OpmParser_get__specialXmlElementsBuilders(t_OpmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitStepInterpolator::class$ = NULL;
        jmethodID *PythonFieldOrekitStepInterpolator::mids$ = NULL;
        bool PythonFieldOrekitStepInterpolator::live$ = false;

        jclass PythonFieldOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCurrentState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getInterpolatedState_70fecd201ca47d3b] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getPreviousState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_restrictStep_d6beee8426de96e6] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitStepInterpolator::PythonFieldOrekitStepInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonFieldOrekitStepInterpolator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldOrekitStepInterpolator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldOrekitStepInterpolator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonFieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepInterpolator_of_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args);
        static int t_PythonFieldOrekitStepInterpolator_init_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitStepInterpolator_finalize(t_PythonFieldOrekitStepInterpolator *self);
        static PyObject *t_PythonFieldOrekitStepInterpolator_pythonExtension(t_PythonFieldOrekitStepInterpolator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonFieldOrekitStepInterpolator_isForward3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldOrekitStepInterpolator_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_restrictStep5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__self(t_PythonFieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__parameters_(t_PythonFieldOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepInterpolator, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_PythonFieldOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitStepInterpolator_init_ },
          { Py_tp_getset, t_PythonFieldOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitStepInterpolator, t_PythonFieldOrekitStepInterpolator, PythonFieldOrekitStepInterpolator);
        PyObject *t_PythonFieldOrekitStepInterpolator::wrap_Object(const PythonFieldOrekitStepInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepInterpolator *self = (t_PythonFieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitStepInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepInterpolator *self = (t_PythonFieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitStepInterpolator), &PY_TYPE_DEF(PythonFieldOrekitStepInterpolator), module, "PythonFieldOrekitStepInterpolator", 1);
        }

        void t_PythonFieldOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "class_", make_descriptor(PythonFieldOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "wrapfn_", make_descriptor(t_PythonFieldOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitStepInterpolator::initializeClass);
          JNINativeMethod methods[] = {
            { "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getCurrentState0 },
            { "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getInterpolatedState1 },
            { "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getPreviousState2 },
            { "isForward", "()Z", (void *) t_PythonFieldOrekitStepInterpolator_isForward3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitStepInterpolator_pythonDecRef4 },
            { "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;", (void *) t_PythonFieldOrekitStepInterpolator_restrictStep5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitStepInterpolator::wrap_Object(PythonFieldOrekitStepInterpolator(((t_PythonFieldOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_of_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitStepInterpolator_init_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitStepInterpolator object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitStepInterpolator());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_finalize(t_PythonFieldOrekitStepInterpolator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_pythonExtension(t_PythonFieldOrekitStepInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCurrentState", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInterpolatedState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getInterpolatedState", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPreviousState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPreviousState", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jboolean JNICALL t_PythonFieldOrekitStepInterpolator_isForward3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForward", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForward", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonFieldOrekitStepInterpolator_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_restrictStep5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "restrictStep", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &value))
          {
            throwTypeError("restrictStep", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_get__self(t_PythonFieldOrekitStepInterpolator *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__parameters_(t_PythonFieldOrekitStepInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIHistoryFilesLoader::class$ = NULL;
      jmethodID *UTCTAIHistoryFilesLoader::mids$ = NULL;
      bool UTCTAIHistoryFilesLoader::live$ = false;

      jclass UTCTAIHistoryFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIHistoryFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_71b020e53c8af149] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_e62d3bb06d56d7e3] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIHistoryFilesLoader::UTCTAIHistoryFilesLoader() : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      UTCTAIHistoryFilesLoader::UTCTAIHistoryFilesLoader(const ::org::orekit::data::DataProvidersManager & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_71b020e53c8af149, a0.this$)) {}

      ::java::util::List UTCTAIHistoryFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_e62d3bb06d56d7e3]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIHistoryFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIHistoryFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIHistoryFilesLoader_init_(t_UTCTAIHistoryFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIHistoryFilesLoader_loadOffsets(t_UTCTAIHistoryFilesLoader *self);

      static PyMethodDef t_UTCTAIHistoryFilesLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIHistoryFilesLoader)[] = {
        { Py_tp_methods, t_UTCTAIHistoryFilesLoader__methods_ },
        { Py_tp_init, (void *) t_UTCTAIHistoryFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIHistoryFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(UTCTAIHistoryFilesLoader, t_UTCTAIHistoryFilesLoader, UTCTAIHistoryFilesLoader);

      void t_UTCTAIHistoryFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIHistoryFilesLoader), &PY_TYPE_DEF(UTCTAIHistoryFilesLoader), module, "UTCTAIHistoryFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser)));
      }

      void t_UTCTAIHistoryFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "class_", make_descriptor(UTCTAIHistoryFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "wrapfn_", make_descriptor(t_UTCTAIHistoryFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIHistoryFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIHistoryFilesLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIHistoryFilesLoader::wrap_Object(UTCTAIHistoryFilesLoader(((t_UTCTAIHistoryFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIHistoryFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIHistoryFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIHistoryFilesLoader_init_(t_UTCTAIHistoryFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            UTCTAIHistoryFilesLoader object((jobject) NULL);

            INT_CALL(object = UTCTAIHistoryFilesLoader());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
            UTCTAIHistoryFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
            {
              INT_CALL(object = UTCTAIHistoryFilesLoader(a0));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_UTCTAIHistoryFilesLoader_loadOffsets(t_UTCTAIHistoryFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeStamped.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeStamped::class$ = NULL;
      jmethodID *PythonTimeStamped::mids$ = NULL;
      bool PythonTimeStamped::live$ = false;

      jclass PythonTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStamped::PythonTimeStamped() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonTimeStamped::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonTimeStamped::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonTimeStamped::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeStamped_init_(t_PythonTimeStamped *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStamped_finalize(t_PythonTimeStamped *self);
      static PyObject *t_PythonTimeStamped_pythonExtension(t_PythonTimeStamped *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStamped_getDate0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStamped_get__self(t_PythonTimeStamped *self, void *data);
      static PyGetSetDef t_PythonTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStamped, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStamped__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStamped, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStamped, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStamped)[] = {
        { Py_tp_methods, t_PythonTimeStamped__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStamped_init_ },
        { Py_tp_getset, t_PythonTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStamped, t_PythonTimeStamped, PythonTimeStamped);

      void t_PythonTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStamped), &PY_TYPE_DEF(PythonTimeStamped), module, "PythonTimeStamped", 1);
      }

      void t_PythonTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "class_", make_descriptor(PythonTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "wrapfn_", make_descriptor(t_PythonTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStamped::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeStamped_getDate0 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStamped_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStamped::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStamped::wrap_Object(PythonTimeStamped(((t_PythonTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeStamped_init_(t_PythonTimeStamped *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStamped object((jobject) NULL);

        INT_CALL(object = PythonTimeStamped());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStamped_finalize(t_PythonTimeStamped *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStamped_pythonExtension(t_PythonTimeStamped *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonTimeStamped_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getDate", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStamped_get__self(t_PythonTimeStamped *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParametersKey::class$ = NULL;
            jmethodID *ODParametersKey::mids$ = NULL;
            bool ODParametersKey::live$ = false;
            ODParametersKey *ODParametersKey::ACTUAL_OD_SPAN = NULL;
            ODParametersKey *ODParametersKey::COMMENT = NULL;
            ODParametersKey *ODParametersKey::OBS_AVAILABLE = NULL;
            ODParametersKey *ODParametersKey::OBS_USED = NULL;
            ODParametersKey *ODParametersKey::OD_EPOCH = NULL;
            ODParametersKey *ODParametersKey::RECOMMENDED_OD_SPAN = NULL;
            ODParametersKey *ODParametersKey::RESIDUALS_ACCEPTED = NULL;
            ODParametersKey *ODParametersKey::TIME_LASTOB_END = NULL;
            ODParametersKey *ODParametersKey::TIME_LASTOB_START = NULL;
            ODParametersKey *ODParametersKey::TRACKS_AVAILABLE = NULL;
            ODParametersKey *ODParametersKey::TRACKS_USED = NULL;
            ODParametersKey *ODParametersKey::WEIGHTED_RMS = NULL;

            jclass ODParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_d6592eb6832f4bf3] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;)Z");
                mids$[mid_valueOf_6c5a18b7bb2da197] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;");
                mids$[mid_values_aa9598d636ef48d9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ACTUAL_OD_SPAN = new ODParametersKey(env->getStaticObjectField(cls, "ACTUAL_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                COMMENT = new ODParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OBS_AVAILABLE = new ODParametersKey(env->getStaticObjectField(cls, "OBS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OBS_USED = new ODParametersKey(env->getStaticObjectField(cls, "OBS_USED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OD_EPOCH = new ODParametersKey(env->getStaticObjectField(cls, "OD_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                RECOMMENDED_OD_SPAN = new ODParametersKey(env->getStaticObjectField(cls, "RECOMMENDED_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                RESIDUALS_ACCEPTED = new ODParametersKey(env->getStaticObjectField(cls, "RESIDUALS_ACCEPTED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TIME_LASTOB_END = new ODParametersKey(env->getStaticObjectField(cls, "TIME_LASTOB_END", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TIME_LASTOB_START = new ODParametersKey(env->getStaticObjectField(cls, "TIME_LASTOB_START", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TRACKS_AVAILABLE = new ODParametersKey(env->getStaticObjectField(cls, "TRACKS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TRACKS_USED = new ODParametersKey(env->getStaticObjectField(cls, "TRACKS_USED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                WEIGHTED_RMS = new ODParametersKey(env->getStaticObjectField(cls, "WEIGHTED_RMS", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ODParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_d6592eb6832f4bf3], a0.this$, a1.this$, a2.this$);
            }

            ODParametersKey ODParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ODParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6c5a18b7bb2da197], a0.this$));
            }

            JArray< ODParametersKey > ODParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ODParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_aa9598d636ef48d9]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_ODParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersKey_of_(t_ODParametersKey *self, PyObject *args);
            static PyObject *t_ODParametersKey_process(t_ODParametersKey *self, PyObject *args);
            static PyObject *t_ODParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ODParametersKey_values(PyTypeObject *type);
            static PyObject *t_ODParametersKey_get__parameters_(t_ODParametersKey *self, void *data);
            static PyGetSetDef t_ODParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_ODParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ODParametersKey__methods_[] = {
              DECLARE_METHOD(t_ODParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_ODParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_ODParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParametersKey)[] = {
              { Py_tp_methods, t_ODParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ODParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ODParametersKey, t_ODParametersKey, ODParametersKey);
            PyObject *t_ODParametersKey::wrap_Object(const ODParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ODParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ODParametersKey *self = (t_ODParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ODParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ODParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ODParametersKey *self = (t_ODParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ODParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParametersKey), &PY_TYPE_DEF(ODParametersKey), module, "ODParametersKey", 0);
            }

            void t_ODParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "class_", make_descriptor(ODParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "wrapfn_", make_descriptor(t_ODParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(ODParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "ACTUAL_OD_SPAN", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::ACTUAL_OD_SPAN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "COMMENT", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OBS_AVAILABLE", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OBS_AVAILABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OBS_USED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OBS_USED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OD_EPOCH", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OD_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "RECOMMENDED_OD_SPAN", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::RECOMMENDED_OD_SPAN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "RESIDUALS_ACCEPTED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::RESIDUALS_ACCEPTED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TIME_LASTOB_END", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TIME_LASTOB_END)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TIME_LASTOB_START", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TIME_LASTOB_START)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TRACKS_AVAILABLE", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TRACKS_AVAILABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TRACKS_USED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TRACKS_USED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "WEIGHTED_RMS", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::WEIGHTED_RMS)));
            }

            static PyObject *t_ODParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParametersKey::initializeClass, 1)))
                return NULL;
              return t_ODParametersKey::wrap_Object(ODParametersKey(((t_ODParametersKey *) arg)->object.this$));
            }
            static PyObject *t_ODParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ODParametersKey_of_(t_ODParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ODParametersKey_process(t_ODParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_ODParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ODParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ODParametersKey::valueOf(a0));
                return t_ODParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ODParametersKey_values(PyTypeObject *type)
            {
              JArray< ODParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ODParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_ODParametersKey::wrap_jobject);
            }
            static PyObject *t_ODParametersKey_get__parameters_(t_ODParametersKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationEvent::class$ = NULL;
      jmethodID *IterationEvent::mids$ = NULL;
      bool IterationEvent::live$ = false;

      jclass IterationEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1b148ccb530f535f] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;I)V");
          mids$[mid_getIterations_55546ef6a647f39b] = env->getMethodID(cls, "getIterations", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterationEvent::IterationEvent(const ::java::lang::Object & a0, jint a1) : ::java::util::EventObject(env->newObject(initializeClass, &mids$, mid_init$_1b148ccb530f535f, a0.this$, a1)) {}

      jint IterationEvent::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_55546ef6a647f39b]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_IterationEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterationEvent_init_(t_IterationEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterationEvent_getIterations(t_IterationEvent *self);
      static PyObject *t_IterationEvent_get__iterations(t_IterationEvent *self, void *data);
      static PyGetSetDef t_IterationEvent__fields_[] = {
        DECLARE_GET_FIELD(t_IterationEvent, iterations),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterationEvent__methods_[] = {
        DECLARE_METHOD(t_IterationEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationEvent, getIterations, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationEvent)[] = {
        { Py_tp_methods, t_IterationEvent__methods_ },
        { Py_tp_init, (void *) t_IterationEvent_init_ },
        { Py_tp_getset, t_IterationEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationEvent)[] = {
        &PY_TYPE_DEF(::java::util::EventObject),
        NULL
      };

      DEFINE_TYPE(IterationEvent, t_IterationEvent, IterationEvent);

      void t_IterationEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationEvent), &PY_TYPE_DEF(IterationEvent), module, "IterationEvent", 0);
      }

      void t_IterationEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "class_", make_descriptor(IterationEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "wrapfn_", make_descriptor(t_IterationEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationEvent::initializeClass, 1)))
          return NULL;
        return t_IterationEvent::wrap_Object(IterationEvent(((t_IterationEvent *) arg)->object.this$));
      }
      static PyObject *t_IterationEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterationEvent_init_(t_IterationEvent *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        jint a1;
        IterationEvent object((jobject) NULL);

        if (!parseArgs(args, "oI", &a0, &a1))
        {
          INT_CALL(object = IterationEvent(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterationEvent_getIterations(t_IterationEvent *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationEvent_get__iterations(t_IterationEvent *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultRealMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultRealMatrixPreservingVisitor::class$ = NULL;
      jmethodID *DefaultRealMatrixPreservingVisitor::mids$ = NULL;
      bool DefaultRealMatrixPreservingVisitor::live$ = false;

      jclass DefaultRealMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultRealMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_end_b74f83833fdad017] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_ea412797eafea800] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_94fe8d9ffeb50676] = env->getMethodID(cls, "visit", "(IID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultRealMatrixPreservingVisitor::DefaultRealMatrixPreservingVisitor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      jdouble DefaultRealMatrixPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_b74f83833fdad017]);
      }

      void DefaultRealMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ea412797eafea800], a0, a1, a2, a3, a4, a5);
      }

      void DefaultRealMatrixPreservingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_94fe8d9ffeb50676], a0, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_DefaultRealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultRealMatrixPreservingVisitor_init_(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_end(t_DefaultRealMatrixPreservingVisitor *self);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_start(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_visit(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_DefaultRealMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultRealMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_DefaultRealMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultRealMatrixPreservingVisitor_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultRealMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultRealMatrixPreservingVisitor, t_DefaultRealMatrixPreservingVisitor, DefaultRealMatrixPreservingVisitor);

      void t_DefaultRealMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultRealMatrixPreservingVisitor), &PY_TYPE_DEF(DefaultRealMatrixPreservingVisitor), module, "DefaultRealMatrixPreservingVisitor", 0);
      }

      void t_DefaultRealMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "class_", make_descriptor(DefaultRealMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_DefaultRealMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultRealMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultRealMatrixPreservingVisitor::wrap_Object(DefaultRealMatrixPreservingVisitor(((t_DefaultRealMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultRealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultRealMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultRealMatrixPreservingVisitor_init_(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds)
      {
        DefaultRealMatrixPreservingVisitor object((jobject) NULL);

        INT_CALL(object = DefaultRealMatrixPreservingVisitor());
        self->object = object;

        return 0;
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_end(t_DefaultRealMatrixPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_start(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_visit(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GeometryFreeCombination::class$ = NULL;
          jmethodID *GeometryFreeCombination::mids$ = NULL;
          bool GeometryFreeCombination::live$ = false;

          jclass GeometryFreeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GeometryFreeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_67abdaf53ea90950] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_7bbbdc452eac601c] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_GeometryFreeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometryFreeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_GeometryFreeCombination__methods_[] = {
            DECLARE_METHOD(t_GeometryFreeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometryFreeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometryFreeCombination)[] = {
            { Py_tp_methods, t_GeometryFreeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometryFreeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(GeometryFreeCombination, t_GeometryFreeCombination, GeometryFreeCombination);

          void t_GeometryFreeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometryFreeCombination), &PY_TYPE_DEF(GeometryFreeCombination), module, "GeometryFreeCombination", 0);
          }

          void t_GeometryFreeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "class_", make_descriptor(GeometryFreeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "wrapfn_", make_descriptor(t_GeometryFreeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometryFreeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometryFreeCombination::initializeClass, 1)))
              return NULL;
            return t_GeometryFreeCombination::wrap_Object(GeometryFreeCombination(((t_GeometryFreeCombination *) arg)->object.this$));
          }
          static PyObject *t_GeometryFreeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometryFreeCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/ISAACRandom.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *ISAACRandom::class$ = NULL;
      jmethodID *ISAACRandom::mids$ = NULL;
      bool ISAACRandom::live$ = false;

      jclass ISAACRandom::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/ISAACRandom");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_86a2769cb881d388] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_setSeed_86a2769cb881d388] = env->getMethodID(cls, "setSeed", "([I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ISAACRandom::ISAACRandom() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ISAACRandom::ISAACRandom(const JArray< jint > & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_86a2769cb881d388, a0.this$)) {}

      ISAACRandom::ISAACRandom(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      jint ISAACRandom::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }

      void ISAACRandom::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_86a2769cb881d388], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_ISAACRandom_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ISAACRandom_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ISAACRandom_init_(t_ISAACRandom *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ISAACRandom_nextInt(t_ISAACRandom *self, PyObject *args);
      static PyObject *t_ISAACRandom_setSeed(t_ISAACRandom *self, PyObject *args);
      static int t_ISAACRandom_set__seed(t_ISAACRandom *self, PyObject *arg, void *data);
      static PyGetSetDef t_ISAACRandom__fields_[] = {
        DECLARE_SET_FIELD(t_ISAACRandom, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ISAACRandom__methods_[] = {
        DECLARE_METHOD(t_ISAACRandom, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ISAACRandom, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ISAACRandom, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_ISAACRandom, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ISAACRandom)[] = {
        { Py_tp_methods, t_ISAACRandom__methods_ },
        { Py_tp_init, (void *) t_ISAACRandom_init_ },
        { Py_tp_getset, t_ISAACRandom__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ISAACRandom)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(ISAACRandom, t_ISAACRandom, ISAACRandom);

      void t_ISAACRandom::install(PyObject *module)
      {
        installType(&PY_TYPE(ISAACRandom), &PY_TYPE_DEF(ISAACRandom), module, "ISAACRandom", 0);
      }

      void t_ISAACRandom::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "class_", make_descriptor(ISAACRandom::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "wrapfn_", make_descriptor(t_ISAACRandom::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ISAACRandom_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ISAACRandom::initializeClass, 1)))
          return NULL;
        return t_ISAACRandom::wrap_Object(ISAACRandom(((t_ISAACRandom *) arg)->object.this$));
      }
      static PyObject *t_ISAACRandom_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ISAACRandom::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ISAACRandom_init_(t_ISAACRandom *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ISAACRandom object((jobject) NULL);

            INT_CALL(object = ISAACRandom());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            ISAACRandom object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = ISAACRandom(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            ISAACRandom object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = ISAACRandom(a0));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ISAACRandom_nextInt(t_ISAACRandom *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ISAACRandom), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_ISAACRandom_setSeed(t_ISAACRandom *self, PyObject *args)
      {
        JArray< jint > a0((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          OBJ_CALL(self->object.setSeed(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ISAACRandom), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_ISAACRandom_set__seed(t_ISAACRandom *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Sphere1D$NoSubSpaceException::class$ = NULL;
          jmethodID *Sphere1D$NoSubSpaceException::mids$ = NULL;
          bool Sphere1D$NoSubSpaceException::live$ = false;

          jclass Sphere1D$NoSubSpaceException::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Sphere1D$NoSubSpaceException::Sphere1D$NoSubSpaceException() : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          static PyObject *t_Sphere1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Sphere1D$NoSubSpaceException_init_(t_Sphere1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_Sphere1D$NoSubSpaceException__methods_[] = {
            DECLARE_METHOD(t_Sphere1D$NoSubSpaceException, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D$NoSubSpaceException, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere1D$NoSubSpaceException)[] = {
            { Py_tp_methods, t_Sphere1D$NoSubSpaceException__methods_ },
            { Py_tp_init, (void *) t_Sphere1D$NoSubSpaceException_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere1D$NoSubSpaceException)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
            NULL
          };

          DEFINE_TYPE(Sphere1D$NoSubSpaceException, t_Sphere1D$NoSubSpaceException, Sphere1D$NoSubSpaceException);

          void t_Sphere1D$NoSubSpaceException::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere1D$NoSubSpaceException), &PY_TYPE_DEF(Sphere1D$NoSubSpaceException), module, "Sphere1D$NoSubSpaceException", 0);
          }

          void t_Sphere1D$NoSubSpaceException::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "class_", make_descriptor(Sphere1D$NoSubSpaceException::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "wrapfn_", make_descriptor(t_Sphere1D$NoSubSpaceException::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Sphere1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere1D$NoSubSpaceException::initializeClass, 1)))
              return NULL;
            return t_Sphere1D$NoSubSpaceException::wrap_Object(Sphere1D$NoSubSpaceException(((t_Sphere1D$NoSubSpaceException *) arg)->object.this$));
          }
          static PyObject *t_Sphere1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere1D$NoSubSpaceException::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Sphere1D$NoSubSpaceException_init_(t_Sphere1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds)
          {
            Sphere1D$NoSubSpaceException object((jobject) NULL);

            INT_CALL(object = Sphere1D$NoSubSpaceException());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/HatanakaCompressFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *HatanakaCompressFilter::class$ = NULL;
        jmethodID *HatanakaCompressFilter::mids$ = NULL;
        bool HatanakaCompressFilter::live$ = false;

        jclass HatanakaCompressFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/HatanakaCompressFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_filter_bbc30294b1b0b691] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HatanakaCompressFilter::HatanakaCompressFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::orekit::data::DataSource HatanakaCompressFilter::filter(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_bbc30294b1b0b691], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        static PyObject *t_HatanakaCompressFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HatanakaCompressFilter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HatanakaCompressFilter_init_(t_HatanakaCompressFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HatanakaCompressFilter_filter(t_HatanakaCompressFilter *self, PyObject *arg);

        static PyMethodDef t_HatanakaCompressFilter__methods_[] = {
          DECLARE_METHOD(t_HatanakaCompressFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HatanakaCompressFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HatanakaCompressFilter, filter, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HatanakaCompressFilter)[] = {
          { Py_tp_methods, t_HatanakaCompressFilter__methods_ },
          { Py_tp_init, (void *) t_HatanakaCompressFilter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HatanakaCompressFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HatanakaCompressFilter, t_HatanakaCompressFilter, HatanakaCompressFilter);

        void t_HatanakaCompressFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(HatanakaCompressFilter), &PY_TYPE_DEF(HatanakaCompressFilter), module, "HatanakaCompressFilter", 0);
        }

        void t_HatanakaCompressFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "class_", make_descriptor(HatanakaCompressFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "wrapfn_", make_descriptor(t_HatanakaCompressFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HatanakaCompressFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HatanakaCompressFilter::initializeClass, 1)))
            return NULL;
          return t_HatanakaCompressFilter::wrap_Object(HatanakaCompressFilter(((t_HatanakaCompressFilter *) arg)->object.this$));
        }
        static PyObject *t_HatanakaCompressFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HatanakaCompressFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HatanakaCompressFilter_init_(t_HatanakaCompressFilter *self, PyObject *args, PyObject *kwds)
        {
          HatanakaCompressFilter object((jobject) NULL);

          INT_CALL(object = HatanakaCompressFilter());
          self->object = object;

          return 0;
        }

        static PyObject *t_HatanakaCompressFilter_filter(t_HatanakaCompressFilter *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::data::DataSource result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.filter(a0));
            return ::org::orekit::data::t_DataSource::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonAbstractEncodedMessage::class$ = NULL;
          jmethodID *PythonAbstractEncodedMessage::mids$ = NULL;
          bool PythonAbstractEncodedMessage::live$ = false;

          jclass PythonAbstractEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_fetchByte_55546ef6a647f39b] = env->getMethodID(cls, "fetchByte", "()I");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractEncodedMessage::PythonAbstractEncodedMessage() : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonAbstractEncodedMessage::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAbstractEncodedMessage::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractEncodedMessage::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonAbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractEncodedMessage_init_(t_PythonAbstractEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractEncodedMessage_finalize(t_PythonAbstractEncodedMessage *self);
          static PyObject *t_PythonAbstractEncodedMessage_pythonExtension(t_PythonAbstractEncodedMessage *self, PyObject *args);
          static jint JNICALL t_PythonAbstractEncodedMessage_fetchByte0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractEncodedMessage_get__self(t_PythonAbstractEncodedMessage *self, void *data);
          static PyGetSetDef t_PythonAbstractEncodedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractEncodedMessage, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEncodedMessage)[] = {
            { Py_tp_methods, t_PythonAbstractEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractEncodedMessage_init_ },
            { Py_tp_getset, t_PythonAbstractEncodedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(PythonAbstractEncodedMessage, t_PythonAbstractEncodedMessage, PythonAbstractEncodedMessage);

          void t_PythonAbstractEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractEncodedMessage), &PY_TYPE_DEF(PythonAbstractEncodedMessage), module, "PythonAbstractEncodedMessage", 1);
          }

          void t_PythonAbstractEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "class_", make_descriptor(PythonAbstractEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "wrapfn_", make_descriptor(t_PythonAbstractEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractEncodedMessage::initializeClass);
            JNINativeMethod methods[] = {
              { "fetchByte", "()I", (void *) t_PythonAbstractEncodedMessage_fetchByte0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractEncodedMessage_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractEncodedMessage::wrap_Object(PythonAbstractEncodedMessage(((t_PythonAbstractEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractEncodedMessage_init_(t_PythonAbstractEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractEncodedMessage object((jobject) NULL);

            INT_CALL(object = PythonAbstractEncodedMessage());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractEncodedMessage_finalize(t_PythonAbstractEncodedMessage *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractEncodedMessage_pythonExtension(t_PythonAbstractEncodedMessage *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jint JNICALL t_PythonAbstractEncodedMessage_fetchByte0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "fetchByte", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("fetchByte", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static void JNICALL t_PythonAbstractEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractEncodedMessage_get__self(t_PythonAbstractEncodedMessage *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldAbstractDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldAbstractDetector::class$ = NULL;
        jmethodID *PythonFieldAbstractDetector::mids$ = NULL;
        bool PythonFieldAbstractDetector::live$ = false;

        jclass PythonFieldAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f96af71e81af8c64] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)V");
            mids$[mid_create_106f52de5ffac709] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractDetector::PythonFieldAbstractDetector(const ::org::orekit::propagation::events::FieldAdaptableInterval & a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, const ::org::orekit::propagation::events::handlers::FieldEventHandler & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f96af71e81af8c64, a0.this$, a1.this$, a2, a3.this$)) {}

        void PythonFieldAbstractDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldAbstractDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldAbstractDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_PythonFieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractDetector_of_(t_PythonFieldAbstractDetector *self, PyObject *args);
        static int t_PythonFieldAbstractDetector_init_(t_PythonFieldAbstractDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractDetector_finalize(t_PythonFieldAbstractDetector *self);
        static PyObject *t_PythonFieldAbstractDetector_pythonExtension(t_PythonFieldAbstractDetector *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jobject a3);
        static jobject JNICALL t_PythonFieldAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAbstractDetector_get__self(t_PythonFieldAbstractDetector *self, void *data);
        static PyObject *t_PythonFieldAbstractDetector_get__parameters_(t_PythonFieldAbstractDetector *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractDetector, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractDetector)[] = {
          { Py_tp_methods, t_PythonFieldAbstractDetector__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractDetector_init_ },
          { Py_tp_getset, t_PythonFieldAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractDetector, t_PythonFieldAbstractDetector, PythonFieldAbstractDetector);
        PyObject *t_PythonFieldAbstractDetector::wrap_Object(const PythonFieldAbstractDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_PythonFieldAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractDetector *self = (t_PythonFieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_PythonFieldAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractDetector *self = (t_PythonFieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_PythonFieldAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractDetector), &PY_TYPE_DEF(PythonFieldAbstractDetector), module, "PythonFieldAbstractDetector", 1);
        }

        void t_PythonFieldAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "class_", make_descriptor(PythonFieldAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "wrapfn_", make_descriptor(t_PythonFieldAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonFieldAbstractDetector_create0 },
            { "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAbstractDetector_g1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractDetector_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractDetector::wrap_Object(PythonFieldAbstractDetector(((t_PythonFieldAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractDetector_of_(t_PythonFieldAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractDetector_init_(t_PythonFieldAbstractDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jint a2;
          ::org::orekit::propagation::events::handlers::FieldEventHandler a3((jobject) NULL);
          PyTypeObject **p3;
          PythonFieldAbstractDetector object((jobject) NULL);

          if (!parseArgs(args, "KKIK", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldAdaptableInterval::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::orekit::propagation::events::handlers::t_FieldEventHandler::parameters_))
          {
            INT_CALL(object = PythonFieldAbstractDetector(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAbstractDetector_finalize(t_PythonFieldAbstractDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractDetector_pythonExtension(t_PythonFieldAbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(::org::orekit::propagation::events::FieldAdaptableInterval(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o3 = ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(::org::orekit::propagation::events::handlers::FieldEventHandler(a3));
          PyObject *result = PyObject_CallMethod(obj, "create", "OOiO", o0, o1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
          {
            throwTypeError("create", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonFieldAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAbstractDetector_get__self(t_PythonFieldAbstractDetector *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldAbstractDetector_get__parameters_(t_PythonFieldAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmDataSubStructureKey::class$ = NULL;
              jmethodID *AcmDataSubStructureKey::mids$ = NULL;
              bool AcmDataSubStructureKey::live$ = false;
              AcmDataSubStructureKey *AcmDataSubStructureKey::AD = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::ATT = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::COV = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::MAN = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::PHYS = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::USER = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::ad = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::att = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::cov = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::man = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::phys = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::user = NULL;

              jclass AcmDataSubStructureKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_9b81d444de082020] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;)Z");
                  mids$[mid_valueOf_e4a074e8d208268f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;");
                  mids$[mid_values_82b62fb529b8e06e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "AD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  ATT = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "ATT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  COV = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  MAN = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  PHYS = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  USER = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  ad = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "ad", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  att = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "att", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  cov = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "cov", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  man = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "man", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  phys = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "phys", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  user = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "user", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AcmDataSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser & a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_9b81d444de082020], a0.this$, a1.this$);
              }

              AcmDataSubStructureKey AcmDataSubStructureKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmDataSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e4a074e8d208268f], a0.this$));
              }

              JArray< AcmDataSubStructureKey > AcmDataSubStructureKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmDataSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_82b62fb529b8e06e]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmDataSubStructureKey_of_(t_AcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_process(t_AcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_values(PyTypeObject *type);
              static PyObject *t_AcmDataSubStructureKey_get__parameters_(t_AcmDataSubStructureKey *self, void *data);
              static PyGetSetDef t_AcmDataSubStructureKey__fields_[] = {
                DECLARE_GET_FIELD(t_AcmDataSubStructureKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmDataSubStructureKey__methods_[] = {
                DECLARE_METHOD(t_AcmDataSubStructureKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmDataSubStructureKey)[] = {
                { Py_tp_methods, t_AcmDataSubStructureKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmDataSubStructureKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmDataSubStructureKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmDataSubStructureKey, t_AcmDataSubStructureKey, AcmDataSubStructureKey);
              PyObject *t_AcmDataSubStructureKey::wrap_Object(const AcmDataSubStructureKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmDataSubStructureKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmDataSubStructureKey *self = (t_AcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmDataSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmDataSubStructureKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmDataSubStructureKey *self = (t_AcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmDataSubStructureKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmDataSubStructureKey), &PY_TYPE_DEF(AcmDataSubStructureKey), module, "AcmDataSubStructureKey", 0);
              }

              void t_AcmDataSubStructureKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "class_", make_descriptor(AcmDataSubStructureKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "wrapfn_", make_descriptor(t_AcmDataSubStructureKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmDataSubStructureKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "AD", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::AD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "ATT", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::ATT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "COV", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "MAN", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "PHYS", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "USER", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::USER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "ad", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::ad)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "att", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::att)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "cov", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::cov)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "man", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::man)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "phys", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::phys)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "user", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::user)));
              }

              static PyObject *t_AcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmDataSubStructureKey::initializeClass, 1)))
                  return NULL;
                return t_AcmDataSubStructureKey::wrap_Object(AcmDataSubStructureKey(((t_AcmDataSubStructureKey *) arg)->object.this$));
              }
              static PyObject *t_AcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmDataSubStructureKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmDataSubStructureKey_of_(t_AcmDataSubStructureKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmDataSubStructureKey_process(t_AcmDataSubStructureKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::parameters_))
                {
                  OBJ_CALL(result = self->object.process(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmDataSubStructureKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmDataSubStructureKey::valueOf(a0));
                  return t_AcmDataSubStructureKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmDataSubStructureKey_values(PyTypeObject *type)
              {
                JArray< AcmDataSubStructureKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmDataSubStructureKey::values());
                return JArray<jobject>(result.this$).wrap(t_AcmDataSubStructureKey::wrap_jobject);
              }
              static PyObject *t_AcmDataSubStructureKey_get__parameters_(t_AcmDataSubStructureKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BicubicInterpolatingFunction::class$ = NULL;
        jmethodID *BicubicInterpolatingFunction::mids$ = NULL;
        bool BicubicInterpolatingFunction::live$ = false;

        jclass BicubicInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ecc1a3eb06a607d5] = env->getMethodID(cls, "<init>", "([D[D[[D[[D[[D[[D)V");
            mids$[mid_isValidPoint_cd8da52a7e84190c] = env->getMethodID(cls, "isValidPoint", "(DD)Z");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BicubicInterpolatingFunction::BicubicInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, const JArray< JArray< jdouble > > & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ecc1a3eb06a607d5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        jboolean BicubicInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_cd8da52a7e84190c], a0, a1);
        }

        jdouble BicubicInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_BicubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BicubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BicubicInterpolatingFunction_init_(t_BicubicInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BicubicInterpolatingFunction_isValidPoint(t_BicubicInterpolatingFunction *self, PyObject *args);
        static PyObject *t_BicubicInterpolatingFunction_value(t_BicubicInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_BicubicInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_BicubicInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BicubicInterpolatingFunction)[] = {
          { Py_tp_methods, t_BicubicInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_BicubicInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BicubicInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BicubicInterpolatingFunction, t_BicubicInterpolatingFunction, BicubicInterpolatingFunction);

        void t_BicubicInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(BicubicInterpolatingFunction), &PY_TYPE_DEF(BicubicInterpolatingFunction), module, "BicubicInterpolatingFunction", 0);
        }

        void t_BicubicInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "class_", make_descriptor(BicubicInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "wrapfn_", make_descriptor(t_BicubicInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BicubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BicubicInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_BicubicInterpolatingFunction::wrap_Object(BicubicInterpolatingFunction(((t_BicubicInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_BicubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BicubicInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BicubicInterpolatingFunction_init_(t_BicubicInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          JArray< JArray< jdouble > > a3((jobject) NULL);
          JArray< JArray< jdouble > > a4((jobject) NULL);
          JArray< JArray< jdouble > > a5((jobject) NULL);
          BicubicInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D[[D[[D[[D", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = BicubicInterpolatingFunction(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BicubicInterpolatingFunction_isValidPoint(t_BicubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_BicubicInterpolatingFunction_value(t_BicubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversList$DelegatingDriver::class$ = NULL;
      jmethodID *ParameterDriversList$DelegatingDriver::mids$ = NULL;
      bool ParameterDriversList$DelegatingDriver::live$ = false;

      jclass ParameterDriversList$DelegatingDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversList$DelegatingDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRawDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getRawDrivers", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List ParameterDriversList$DelegatingDriver::getRawDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRawDrivers_e62d3bb06d56d7e3]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ParameterDriversList$DelegatingDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList$DelegatingDriver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList$DelegatingDriver_getRawDrivers(t_ParameterDriversList$DelegatingDriver *self);
      static PyObject *t_ParameterDriversList$DelegatingDriver_get__rawDrivers(t_ParameterDriversList$DelegatingDriver *self, void *data);
      static PyGetSetDef t_ParameterDriversList$DelegatingDriver__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversList$DelegatingDriver, rawDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversList$DelegatingDriver__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, getRawDrivers, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversList$DelegatingDriver)[] = {
        { Py_tp_methods, t_ParameterDriversList$DelegatingDriver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterDriversList$DelegatingDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversList$DelegatingDriver)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriver),
        NULL
      };

      DEFINE_TYPE(ParameterDriversList$DelegatingDriver, t_ParameterDriversList$DelegatingDriver, ParameterDriversList$DelegatingDriver);

      void t_ParameterDriversList$DelegatingDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversList$DelegatingDriver), &PY_TYPE_DEF(ParameterDriversList$DelegatingDriver), module, "ParameterDriversList$DelegatingDriver", 0);
      }

      void t_ParameterDriversList$DelegatingDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "class_", make_descriptor(ParameterDriversList$DelegatingDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "wrapfn_", make_descriptor(t_ParameterDriversList$DelegatingDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversList$DelegatingDriver::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversList$DelegatingDriver::wrap_Object(ParameterDriversList$DelegatingDriver(((t_ParameterDriversList$DelegatingDriver *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversList$DelegatingDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversList$DelegatingDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_getRawDrivers(t_ParameterDriversList$DelegatingDriver *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_get__rawDrivers(t_ParameterDriversList$DelegatingDriver *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log1p.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log1p::class$ = NULL;
        jmethodID *Log1p::mids$ = NULL;
        bool Log1p::live$ = false;

        jclass Log1p::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log1p");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log1p::Log1p() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Log1p::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log1p::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Log1p_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log1p_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log1p_init_(t_Log1p *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log1p_value(t_Log1p *self, PyObject *args);

        static PyMethodDef t_Log1p__methods_[] = {
          DECLARE_METHOD(t_Log1p, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log1p, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log1p, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log1p)[] = {
          { Py_tp_methods, t_Log1p__methods_ },
          { Py_tp_init, (void *) t_Log1p_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log1p)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log1p, t_Log1p, Log1p);

        void t_Log1p::install(PyObject *module)
        {
          installType(&PY_TYPE(Log1p), &PY_TYPE_DEF(Log1p), module, "Log1p", 0);
        }

        void t_Log1p::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "class_", make_descriptor(Log1p::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "wrapfn_", make_descriptor(t_Log1p::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log1p_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log1p::initializeClass, 1)))
            return NULL;
          return t_Log1p::wrap_Object(Log1p(((t_Log1p *) arg)->object.this$));
        }
        static PyObject *t_Log1p_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log1p::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log1p_init_(t_Log1p *self, PyObject *args, PyObject *kwds)
        {
          Log1p object((jobject) NULL);

          INT_CALL(object = Log1p());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log1p_value(t_Log1p *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepInterpolator::class$ = NULL;
        jmethodID *FieldOrekitStepInterpolator::mids$ = NULL;
        bool FieldOrekitStepInterpolator::live$ = false;

        jclass FieldOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getInterpolatedState_70fecd201ca47d3b] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getPreviousState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_restrictStep_d6beee8426de96e6] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getCurrentState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getCurrentState_fba6d56f8dbc98d0]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getInterpolatedState(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_70fecd201ca47d3b], a0.this$));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrekitStepInterpolator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_294c5c99690f2356], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getPreviousState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getPreviousState_fba6d56f8dbc98d0]));
        }

        jboolean FieldOrekitStepInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_9ab94ac1dc23b105]);
        }

        FieldOrekitStepInterpolator FieldOrekitStepInterpolator::restrictStep(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1) const
        {
          return FieldOrekitStepInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_d6beee8426de96e6], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_FieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_of_(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_getCurrentState(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_getInterpolatedState(t_FieldOrekitStepInterpolator *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_getPVCoordinates(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_getPreviousState(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_isForward(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_restrictStep(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_get__currentState(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__forward(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__previousState(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__parameters_(t_FieldOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_FieldOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, currentState),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, forward),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, previousState),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_FieldOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinatesProvider),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepInterpolator, t_FieldOrekitStepInterpolator, FieldOrekitStepInterpolator);
        PyObject *t_FieldOrekitStepInterpolator::wrap_Object(const FieldOrekitStepInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepInterpolator *self = (t_FieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepInterpolator *self = (t_FieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepInterpolator), &PY_TYPE_DEF(FieldOrekitStepInterpolator), module, "FieldOrekitStepInterpolator", 0);
        }

        void t_FieldOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "class_", make_descriptor(FieldOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "wrapfn_", make_descriptor(t_FieldOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepInterpolator::wrap_Object(FieldOrekitStepInterpolator(((t_FieldOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepInterpolator_of_(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getCurrentState(t_FieldOrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getInterpolatedState(t_FieldOrekitStepInterpolator *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepInterpolator_getPVCoordinates(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldOrekitStepInterpolator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getPreviousState(t_FieldOrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepInterpolator_isForward(t_FieldOrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldOrekitStepInterpolator_restrictStep(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
          PyTypeObject **p1;
          FieldOrekitStepInterpolator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_FieldOrekitStepInterpolator::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitStepInterpolator_get__parameters_(t_FieldOrekitStepInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__currentState(t_FieldOrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__forward(t_FieldOrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__previousState(t_FieldOrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Gaussian$Parametric::class$ = NULL;
        jmethodID *Gaussian$Parametric::mids$ = NULL;
        bool Gaussian$Parametric::live$ = false;

        jclass Gaussian$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Gaussian$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_91fbb4072ae7ce9a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_e45651f63bcd931a] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gaussian$Parametric::Gaussian$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        JArray< jdouble > Gaussian$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_91fbb4072ae7ce9a], a0, a1.this$));
        }

        jdouble Gaussian$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_e45651f63bcd931a], a0, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Gaussian$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gaussian$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gaussian$Parametric_init_(t_Gaussian$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gaussian$Parametric_gradient(t_Gaussian$Parametric *self, PyObject *args);
        static PyObject *t_Gaussian$Parametric_value(t_Gaussian$Parametric *self, PyObject *args);

        static PyMethodDef t_Gaussian$Parametric__methods_[] = {
          DECLARE_METHOD(t_Gaussian$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Gaussian$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gaussian$Parametric)[] = {
          { Py_tp_methods, t_Gaussian$Parametric__methods_ },
          { Py_tp_init, (void *) t_Gaussian$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gaussian$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gaussian$Parametric, t_Gaussian$Parametric, Gaussian$Parametric);

        void t_Gaussian$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Gaussian$Parametric), &PY_TYPE_DEF(Gaussian$Parametric), module, "Gaussian$Parametric", 0);
        }

        void t_Gaussian$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "class_", make_descriptor(Gaussian$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "wrapfn_", make_descriptor(t_Gaussian$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gaussian$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gaussian$Parametric::initializeClass, 1)))
            return NULL;
          return t_Gaussian$Parametric::wrap_Object(Gaussian$Parametric(((t_Gaussian$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Gaussian$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gaussian$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gaussian$Parametric_init_(t_Gaussian$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Gaussian$Parametric object((jobject) NULL);

          INT_CALL(object = Gaussian$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Gaussian$Parametric_gradient(t_Gaussian$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Gaussian$Parametric_value(t_Gaussian$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldHermiteRuleFactory::class$ = NULL;
          jmethodID *FieldHermiteRuleFactory::mids$ = NULL;
          bool FieldHermiteRuleFactory::live$ = false;

          jclass FieldHermiteRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_acde278e36767299] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldHermiteRuleFactory::FieldHermiteRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldHermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldHermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldHermiteRuleFactory_of_(t_FieldHermiteRuleFactory *self, PyObject *args);
          static int t_FieldHermiteRuleFactory_init_(t_FieldHermiteRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldHermiteRuleFactory_get__parameters_(t_FieldHermiteRuleFactory *self, void *data);
          static PyGetSetDef t_FieldHermiteRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldHermiteRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldHermiteRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldHermiteRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldHermiteRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldHermiteRuleFactory, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldHermiteRuleFactory)[] = {
            { Py_tp_methods, t_FieldHermiteRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldHermiteRuleFactory_init_ },
            { Py_tp_getset, t_FieldHermiteRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldHermiteRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldHermiteRuleFactory, t_FieldHermiteRuleFactory, FieldHermiteRuleFactory);
          PyObject *t_FieldHermiteRuleFactory::wrap_Object(const FieldHermiteRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldHermiteRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldHermiteRuleFactory *self = (t_FieldHermiteRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldHermiteRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldHermiteRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldHermiteRuleFactory *self = (t_FieldHermiteRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldHermiteRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldHermiteRuleFactory), &PY_TYPE_DEF(FieldHermiteRuleFactory), module, "FieldHermiteRuleFactory", 0);
          }

          void t_FieldHermiteRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "class_", make_descriptor(FieldHermiteRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "wrapfn_", make_descriptor(t_FieldHermiteRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldHermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldHermiteRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldHermiteRuleFactory::wrap_Object(FieldHermiteRuleFactory(((t_FieldHermiteRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldHermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldHermiteRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldHermiteRuleFactory_of_(t_FieldHermiteRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldHermiteRuleFactory_init_(t_FieldHermiteRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldHermiteRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldHermiteRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_FieldHermiteRuleFactory_get__parameters_(t_FieldHermiteRuleFactory *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouAlmanac::class$ = NULL;
            jmethodID *BeidouAlmanac::mids$ = NULL;
            bool BeidouAlmanac::live$ = false;

            jclass BeidouAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_55546ef6a647f39b] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_setHealth_44ed599e93e8a30c] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setI0_369b4c97255d5afa] = env->getMethodID(cls, "setI0", "(DD)V");
                mids$[mid_setSqrtA_8ba9fe7a847cecad] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouAlmanac::BeidouAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jint BeidouAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_55546ef6a647f39b]);
            }

            void BeidouAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_44ed599e93e8a30c], a0);
            }

            void BeidouAlmanac::setI0(jdouble a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setI0_369b4c97255d5afa], a0, a1);
            }

            void BeidouAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_8ba9fe7a847cecad], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_BeidouAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouAlmanac_init_(t_BeidouAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouAlmanac_getHealth(t_BeidouAlmanac *self);
            static PyObject *t_BeidouAlmanac_setHealth(t_BeidouAlmanac *self, PyObject *arg);
            static PyObject *t_BeidouAlmanac_setI0(t_BeidouAlmanac *self, PyObject *args);
            static PyObject *t_BeidouAlmanac_setSqrtA(t_BeidouAlmanac *self, PyObject *arg);
            static PyObject *t_BeidouAlmanac_get__health(t_BeidouAlmanac *self, void *data);
            static int t_BeidouAlmanac_set__health(t_BeidouAlmanac *self, PyObject *arg, void *data);
            static int t_BeidouAlmanac_set__sqrtA(t_BeidouAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouAlmanac, health),
              DECLARE_SET_FIELD(t_BeidouAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouAlmanac__methods_[] = {
              DECLARE_METHOD(t_BeidouAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_BeidouAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_BeidouAlmanac, setI0, METH_VARARGS),
              DECLARE_METHOD(t_BeidouAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouAlmanac)[] = {
              { Py_tp_methods, t_BeidouAlmanac__methods_ },
              { Py_tp_init, (void *) t_BeidouAlmanac_init_ },
              { Py_tp_getset, t_BeidouAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(BeidouAlmanac, t_BeidouAlmanac, BeidouAlmanac);

            void t_BeidouAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouAlmanac), &PY_TYPE_DEF(BeidouAlmanac), module, "BeidouAlmanac", 0);
            }

            void t_BeidouAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "class_", make_descriptor(BeidouAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "wrapfn_", make_descriptor(t_BeidouAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_BeidouAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouAlmanac::initializeClass, 1)))
                return NULL;
              return t_BeidouAlmanac::wrap_Object(BeidouAlmanac(((t_BeidouAlmanac *) arg)->object.this$));
            }
            static PyObject *t_BeidouAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouAlmanac_init_(t_BeidouAlmanac *self, PyObject *args, PyObject *kwds)
            {
              BeidouAlmanac object((jobject) NULL);

              INT_CALL(object = BeidouAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_BeidouAlmanac_getHealth(t_BeidouAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouAlmanac_setHealth(t_BeidouAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_BeidouAlmanac_setI0(t_BeidouAlmanac *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.setI0(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(BeidouAlmanac), (PyObject *) self, "setI0", args, 2);
            }

            static PyObject *t_BeidouAlmanac_setSqrtA(t_BeidouAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_BeidouAlmanac_get__health(t_BeidouAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouAlmanac_set__health(t_BeidouAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static int t_BeidouAlmanac_set__sqrtA(t_BeidouAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *IterativeLegendreFieldGaussIntegrator::class$ = NULL;
        jmethodID *IterativeLegendreFieldGaussIntegrator::mids$ = NULL;
        bool IterativeLegendreFieldGaussIntegrator::live$ = false;

        jclass IterativeLegendreFieldGaussIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_eb0a957f0424f345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD)V");
            mids$[mid_init$_aa3d598d86c9a2b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;III)V");
            mids$[mid_init$_c0b68a8af6ee9ffc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDII)V");
            mids$[mid_doIntegrate_81520b552cb3fa26] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_eb0a957f0424f345, a0.this$, a1, a2, a3)) {}

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_aa3d598d86c9a2b6, a0.this$, a1, a2, a3)) {}

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jint a4, jint a5) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c0b68a8af6ee9ffc, a0.this$, a1, a2, a3, a4, a5)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_of_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args);
        static int t_IterativeLegendreFieldGaussIntegrator_init_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_get__parameters_(t_IterativeLegendreFieldGaussIntegrator *self, void *data);
        static PyGetSetDef t_IterativeLegendreFieldGaussIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_IterativeLegendreFieldGaussIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IterativeLegendreFieldGaussIntegrator__methods_[] = {
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IterativeLegendreFieldGaussIntegrator)[] = {
          { Py_tp_methods, t_IterativeLegendreFieldGaussIntegrator__methods_ },
          { Py_tp_init, (void *) t_IterativeLegendreFieldGaussIntegrator_init_ },
          { Py_tp_getset, t_IterativeLegendreFieldGaussIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IterativeLegendreFieldGaussIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(IterativeLegendreFieldGaussIntegrator, t_IterativeLegendreFieldGaussIntegrator, IterativeLegendreFieldGaussIntegrator);
        PyObject *t_IterativeLegendreFieldGaussIntegrator::wrap_Object(const IterativeLegendreFieldGaussIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IterativeLegendreFieldGaussIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IterativeLegendreFieldGaussIntegrator *self = (t_IterativeLegendreFieldGaussIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_IterativeLegendreFieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IterativeLegendreFieldGaussIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IterativeLegendreFieldGaussIntegrator *self = (t_IterativeLegendreFieldGaussIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_IterativeLegendreFieldGaussIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(IterativeLegendreFieldGaussIntegrator), &PY_TYPE_DEF(IterativeLegendreFieldGaussIntegrator), module, "IterativeLegendreFieldGaussIntegrator", 0);
        }

        void t_IterativeLegendreFieldGaussIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "class_", make_descriptor(IterativeLegendreFieldGaussIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "wrapfn_", make_descriptor(t_IterativeLegendreFieldGaussIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IterativeLegendreFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IterativeLegendreFieldGaussIntegrator::initializeClass, 1)))
            return NULL;
          return t_IterativeLegendreFieldGaussIntegrator::wrap_Object(IterativeLegendreFieldGaussIntegrator(((t_IterativeLegendreFieldGaussIntegrator *) arg)->object.this$));
        }
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IterativeLegendreFieldGaussIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IterativeLegendreFieldGaussIntegrator_of_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_IterativeLegendreFieldGaussIntegrator_init_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              jint a3;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              jint a5;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_get__parameters_(t_IterativeLegendreFieldGaussIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataContext::class$ = NULL;
      jmethodID *DataContext::mids$ = NULL;
      bool DataContext::live$ = false;

      jclass DataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCelestialBodies_379576bb08948576] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getDefault_f2d5dcb77667b80d] = env->getStaticMethodID(cls, "getDefault", "()Lorg/orekit/data/LazyLoadedDataContext;");
          mids$[mid_getFrames_19f184be91611afc] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_78e2356802c487c4] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_045bd2a3a054f1f1] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_d1a571f8b033e2d3] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_setDefault_cb1436d190ab0111] = env->getStaticMethodID(cls, "setDefault", "(Lorg/orekit/data/LazyLoadedDataContext;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBodies DataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::CelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_379576bb08948576]));
      }

      ::org::orekit::data::LazyLoadedDataContext DataContext::getDefault()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::data::LazyLoadedDataContext(env->callStaticObjectMethod(cls, mids$[mid_getDefault_f2d5dcb77667b80d]));
      }

      ::org::orekit::frames::Frames DataContext::getFrames() const
      {
        return ::org::orekit::frames::Frames(env->callObjectMethod(this$, mids$[mid_getFrames_19f184be91611afc]));
      }

      ::org::orekit::models::earth::GeoMagneticFields DataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::GeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_78e2356802c487c4]));
      }

      ::org::orekit::forces::gravity::potential::GravityFields DataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::GravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_045bd2a3a054f1f1]));
      }

      ::org::orekit::time::TimeScales DataContext::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_d1a571f8b033e2d3]));
      }

      void DataContext::setDefault(const ::org::orekit::data::LazyLoadedDataContext & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setDefault_cb1436d190ab0111], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_getCelestialBodies(t_DataContext *self);
      static PyObject *t_DataContext_getDefault(PyTypeObject *type);
      static PyObject *t_DataContext_getFrames(t_DataContext *self);
      static PyObject *t_DataContext_getGeoMagneticFields(t_DataContext *self);
      static PyObject *t_DataContext_getGravityFields(t_DataContext *self);
      static PyObject *t_DataContext_getTimeScales(t_DataContext *self);
      static PyObject *t_DataContext_setDefault(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_get__celestialBodies(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__default(t_DataContext *self, void *data);
      static int t_DataContext_set__default(t_DataContext *self, PyObject *arg, void *data);
      static PyObject *t_DataContext_get__frames(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__geoMagneticFields(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__gravityFields(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__timeScales(t_DataContext *self, void *data);
      static PyGetSetDef t_DataContext__fields_[] = {
        DECLARE_GET_FIELD(t_DataContext, celestialBodies),
        DECLARE_GETSET_FIELD(t_DataContext, default),
        DECLARE_GET_FIELD(t_DataContext, frames),
        DECLARE_GET_FIELD(t_DataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_DataContext, gravityFields),
        DECLARE_GET_FIELD(t_DataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataContext__methods_[] = {
        DECLARE_METHOD(t_DataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getDefault, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_DataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getTimeScales, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, setDefault, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataContext)[] = {
        { Py_tp_methods, t_DataContext__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataContext, t_DataContext, DataContext);

      void t_DataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(DataContext), &PY_TYPE_DEF(DataContext), module, "DataContext", 0);
      }

      void t_DataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "class_", make_descriptor(DataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "wrapfn_", make_descriptor(t_DataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataContext::initializeClass, 1)))
          return NULL;
        return t_DataContext::wrap_Object(DataContext(((t_DataContext *) arg)->object.this$));
      }
      static PyObject *t_DataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataContext_getCelestialBodies(t_DataContext *self)
      {
        ::org::orekit::bodies::CelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(result);
      }

      static PyObject *t_DataContext_getDefault(PyTypeObject *type)
      {
        ::org::orekit::data::LazyLoadedDataContext result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::data::DataContext::getDefault());
        return ::org::orekit::data::t_LazyLoadedDataContext::wrap_Object(result);
      }

      static PyObject *t_DataContext_getFrames(t_DataContext *self)
      {
        ::org::orekit::frames::Frames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(result);
      }

      static PyObject *t_DataContext_getGeoMagneticFields(t_DataContext *self)
      {
        ::org::orekit::models::earth::GeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_DataContext_getGravityFields(t_DataContext *self)
      {
        ::org::orekit::forces::gravity::potential::GravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(result);
      }

      static PyObject *t_DataContext_getTimeScales(t_DataContext *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_DataContext_setDefault(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::data::LazyLoadedDataContext a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::LazyLoadedDataContext::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::data::DataContext::setDefault(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setDefault", arg);
        return NULL;
      }

      static PyObject *t_DataContext_get__celestialBodies(t_DataContext *self, void *data)
      {
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__default(t_DataContext *self, void *data)
      {
        ::org::orekit::data::LazyLoadedDataContext value((jobject) NULL);
        OBJ_CALL(value = self->object.getDefault());
        return ::org::orekit::data::t_LazyLoadedDataContext::wrap_Object(value);
      }
      static int t_DataContext_set__default(t_DataContext *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::data::LazyLoadedDataContext value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::data::LazyLoadedDataContext::initializeClass, &value))
          {
            INT_CALL(self->object.setDefault(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "default", arg);
        return -1;
      }

      static PyObject *t_DataContext_get__frames(t_DataContext *self, void *data)
      {
        ::org::orekit::frames::Frames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__geoMagneticFields(t_DataContext *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__gravityFields(t_DataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__timeScales(t_DataContext *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AngularRaDecBuilder.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AngularRaDecBuilder::class$ = NULL;
          jmethodID *AngularRaDecBuilder::mids$ = NULL;
          bool AngularRaDecBuilder::live$ = false;

          jclass AngularRaDecBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AngularRaDecBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e4811cf20d735ff6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/frames/Frame;[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_8b1d2899f4ba6b35] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/AngularRaDec;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularRaDecBuilder::AngularRaDecBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::frames::Frame & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_e4811cf20d735ff6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          ::org::orekit::estimation::measurements::AngularRaDec AngularRaDecBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::AngularRaDec(env->callObjectMethod(this$, mids$[mid_build_8b1d2899f4ba6b35], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_AngularRaDecBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRaDecBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRaDecBuilder_of_(t_AngularRaDecBuilder *self, PyObject *args);
          static int t_AngularRaDecBuilder_init_(t_AngularRaDecBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularRaDecBuilder_build(t_AngularRaDecBuilder *self, PyObject *args);
          static PyObject *t_AngularRaDecBuilder_get__parameters_(t_AngularRaDecBuilder *self, void *data);
          static PyGetSetDef t_AngularRaDecBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AngularRaDecBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularRaDecBuilder__methods_[] = {
            DECLARE_METHOD(t_AngularRaDecBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRaDecBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRaDecBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AngularRaDecBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularRaDecBuilder)[] = {
            { Py_tp_methods, t_AngularRaDecBuilder__methods_ },
            { Py_tp_init, (void *) t_AngularRaDecBuilder_init_ },
            { Py_tp_getset, t_AngularRaDecBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularRaDecBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(AngularRaDecBuilder, t_AngularRaDecBuilder, AngularRaDecBuilder);
          PyObject *t_AngularRaDecBuilder::wrap_Object(const AngularRaDecBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularRaDecBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularRaDecBuilder *self = (t_AngularRaDecBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AngularRaDecBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularRaDecBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularRaDecBuilder *self = (t_AngularRaDecBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AngularRaDecBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularRaDecBuilder), &PY_TYPE_DEF(AngularRaDecBuilder), module, "AngularRaDecBuilder", 0);
          }

          void t_AngularRaDecBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "class_", make_descriptor(AngularRaDecBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "wrapfn_", make_descriptor(t_AngularRaDecBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularRaDecBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularRaDecBuilder::initializeClass, 1)))
              return NULL;
            return t_AngularRaDecBuilder::wrap_Object(AngularRaDecBuilder(((t_AngularRaDecBuilder *) arg)->object.this$));
          }
          static PyObject *t_AngularRaDecBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularRaDecBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AngularRaDecBuilder_of_(t_AngularRaDecBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_AngularRaDecBuilder_init_(t_AngularRaDecBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            JArray< jdouble > a4((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            AngularRaDecBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkk[D[Dk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = AngularRaDecBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularRaDec);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularRaDecBuilder_build(t_AngularRaDecBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::AngularRaDec result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_AngularRaDec::wrap_Object(result);
            }

            return callSuper(PY_TYPE(AngularRaDecBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_AngularRaDecBuilder_get__parameters_(t_AngularRaDecBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *TideSystemProvider::class$ = NULL;
          jmethodID *TideSystemProvider::mids$ = NULL;
          bool TideSystemProvider::live$ = false;

          jclass TideSystemProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/TideSystemProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTideSystem_b2b14af197a8eaf6] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::TideSystem TideSystemProvider::getTideSystem() const
          {
            return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_b2b14af197a8eaf6]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_TideSystemProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystemProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystemProvider_getTideSystem(t_TideSystemProvider *self);
          static PyObject *t_TideSystemProvider_get__tideSystem(t_TideSystemProvider *self, void *data);
          static PyGetSetDef t_TideSystemProvider__fields_[] = {
            DECLARE_GET_FIELD(t_TideSystemProvider, tideSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TideSystemProvider__methods_[] = {
            DECLARE_METHOD(t_TideSystemProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystemProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystemProvider, getTideSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TideSystemProvider)[] = {
            { Py_tp_methods, t_TideSystemProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TideSystemProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TideSystemProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TideSystemProvider, t_TideSystemProvider, TideSystemProvider);

          void t_TideSystemProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(TideSystemProvider), &PY_TYPE_DEF(TideSystemProvider), module, "TideSystemProvider", 0);
          }

          void t_TideSystemProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "class_", make_descriptor(TideSystemProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "wrapfn_", make_descriptor(t_TideSystemProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TideSystemProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TideSystemProvider::initializeClass, 1)))
              return NULL;
            return t_TideSystemProvider::wrap_Object(TideSystemProvider(((t_TideSystemProvider *) arg)->object.this$));
          }
          static PyObject *t_TideSystemProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TideSystemProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TideSystemProvider_getTideSystem(t_TideSystemProvider *self)
          {
            ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
          }

          static PyObject *t_TideSystemProvider_get__tideSystem(t_TideSystemProvider *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonMultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonMultipleShooting::class$ = NULL;
      jmethodID *PythonMultipleShooting::mids$ = NULL;
      bool PythonMultipleShooting::live$ = false;

      jclass PythonMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compute_e62d3bb06d56d7e3] = env->getMethodID(cls, "compute", "()Ljava/util/List;");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonMultipleShooting::PythonMultipleShooting() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonMultipleShooting::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonMultipleShooting::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonMultipleShooting::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonMultipleShooting_init_(t_PythonMultipleShooting *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonMultipleShooting_finalize(t_PythonMultipleShooting *self);
      static PyObject *t_PythonMultipleShooting_pythonExtension(t_PythonMultipleShooting *self, PyObject *args);
      static jobject JNICALL t_PythonMultipleShooting_compute0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonMultipleShooting_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonMultipleShooting_get__self(t_PythonMultipleShooting *self, void *data);
      static PyGetSetDef t_PythonMultipleShooting__fields_[] = {
        DECLARE_GET_FIELD(t_PythonMultipleShooting, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_PythonMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMultipleShooting, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonMultipleShooting, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonMultipleShooting)[] = {
        { Py_tp_methods, t_PythonMultipleShooting__methods_ },
        { Py_tp_init, (void *) t_PythonMultipleShooting_init_ },
        { Py_tp_getset, t_PythonMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonMultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonMultipleShooting, t_PythonMultipleShooting, PythonMultipleShooting);

      void t_PythonMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonMultipleShooting), &PY_TYPE_DEF(PythonMultipleShooting), module, "PythonMultipleShooting", 1);
      }

      void t_PythonMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "class_", make_descriptor(PythonMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "wrapfn_", make_descriptor(t_PythonMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonMultipleShooting::initializeClass);
        JNINativeMethod methods[] = {
          { "compute", "()Ljava/util/List;", (void *) t_PythonMultipleShooting_compute0 },
          { "pythonDecRef", "()V", (void *) t_PythonMultipleShooting_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_PythonMultipleShooting::wrap_Object(PythonMultipleShooting(((t_PythonMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_PythonMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonMultipleShooting_init_(t_PythonMultipleShooting *self, PyObject *args, PyObject *kwds)
      {
        PythonMultipleShooting object((jobject) NULL);

        INT_CALL(object = PythonMultipleShooting());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonMultipleShooting_finalize(t_PythonMultipleShooting *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonMultipleShooting_pythonExtension(t_PythonMultipleShooting *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonMultipleShooting_compute0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "compute", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("compute", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonMultipleShooting_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonMultipleShooting_get__self(t_PythonMultipleShooting *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Character.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/Character.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Character::class$ = NULL;
    jmethodID *Character::mids$ = NULL;
    bool Character::live$ = false;
    jint Character::BYTES = (jint) 0;
    jbyte Character::COMBINING_SPACING_MARK = (jbyte) 0;
    jbyte Character::CONNECTOR_PUNCTUATION = (jbyte) 0;
    jbyte Character::CONTROL = (jbyte) 0;
    jbyte Character::CURRENCY_SYMBOL = (jbyte) 0;
    jbyte Character::DASH_PUNCTUATION = (jbyte) 0;
    jbyte Character::DECIMAL_DIGIT_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_ARABIC_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_BOUNDARY_NEUTRAL = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_NONSPACING_MARK = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_OTHER_NEUTRALS = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_SEGMENT_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_UNDEFINED = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_WHITESPACE = (jbyte) 0;
    jbyte Character::ENCLOSING_MARK = (jbyte) 0;
    jbyte Character::END_PUNCTUATION = (jbyte) 0;
    jbyte Character::FINAL_QUOTE_PUNCTUATION = (jbyte) 0;
    jbyte Character::FORMAT = (jbyte) 0;
    jbyte Character::INITIAL_QUOTE_PUNCTUATION = (jbyte) 0;
    jbyte Character::LETTER_NUMBER = (jbyte) 0;
    jbyte Character::LINE_SEPARATOR = (jbyte) 0;
    jbyte Character::LOWERCASE_LETTER = (jbyte) 0;
    jbyte Character::MATH_SYMBOL = (jbyte) 0;
    jint Character::MAX_CODE_POINT = (jint) 0;
    jchar Character::MAX_HIGH_SURROGATE = (jchar) 0;
    jchar Character::MAX_LOW_SURROGATE = (jchar) 0;
    jint Character::MAX_RADIX = (jint) 0;
    jchar Character::MAX_SURROGATE = (jchar) 0;
    jchar Character::MAX_VALUE = (jchar) 0;
    jint Character::MIN_CODE_POINT = (jint) 0;
    jchar Character::MIN_HIGH_SURROGATE = (jchar) 0;
    jchar Character::MIN_LOW_SURROGATE = (jchar) 0;
    jint Character::MIN_RADIX = (jint) 0;
    jint Character::MIN_SUPPLEMENTARY_CODE_POINT = (jint) 0;
    jchar Character::MIN_SURROGATE = (jchar) 0;
    jchar Character::MIN_VALUE = (jchar) 0;
    jbyte Character::MODIFIER_LETTER = (jbyte) 0;
    jbyte Character::MODIFIER_SYMBOL = (jbyte) 0;
    jbyte Character::NON_SPACING_MARK = (jbyte) 0;
    jbyte Character::OTHER_LETTER = (jbyte) 0;
    jbyte Character::OTHER_NUMBER = (jbyte) 0;
    jbyte Character::OTHER_PUNCTUATION = (jbyte) 0;
    jbyte Character::OTHER_SYMBOL = (jbyte) 0;
    jbyte Character::PARAGRAPH_SEPARATOR = (jbyte) 0;
    jbyte Character::PRIVATE_USE = (jbyte) 0;
    jint Character::SIZE = (jint) 0;
    jbyte Character::SPACE_SEPARATOR = (jbyte) 0;
    jbyte Character::START_PUNCTUATION = (jbyte) 0;
    jbyte Character::SURROGATE = (jbyte) 0;
    jbyte Character::TITLECASE_LETTER = (jbyte) 0;
    ::java::lang::Class *Character::TYPE = NULL;
    jbyte Character::UNASSIGNED = (jbyte) 0;
    jbyte Character::UPPERCASE_LETTER = (jbyte) 0;

    jclass Character::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Character");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_df95ad02f5b4acd9] = env->getMethodID(cls, "<init>", "(C)V");
        mids$[mid_charCount_0e7cf35192c3effe] = env->getStaticMethodID(cls, "charCount", "(I)I");
        mids$[mid_charValue_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "charValue", "()C");
        mids$[mid_codePointAt_f8cc94d586f10f66] = env->getStaticMethodID(cls, "codePointAt", "([CI)I");
        mids$[mid_codePointAt_7ff102c04b0b108b] = env->getStaticMethodID(cls, "codePointAt", "(Ljava/lang/CharSequence;I)I");
        mids$[mid_codePointAt_a45a4db28976f262] = env->getStaticMethodID(cls, "codePointAt", "([CII)I");
        mids$[mid_codePointBefore_f8cc94d586f10f66] = env->getStaticMethodID(cls, "codePointBefore", "([CI)I");
        mids$[mid_codePointBefore_7ff102c04b0b108b] = env->getStaticMethodID(cls, "codePointBefore", "(Ljava/lang/CharSequence;I)I");
        mids$[mid_codePointBefore_a45a4db28976f262] = env->getStaticMethodID(cls, "codePointBefore", "([CII)I");
        mids$[mid_codePointCount_a45a4db28976f262] = env->getStaticMethodID(cls, "codePointCount", "([CII)I");
        mids$[mid_codePointCount_9c47b38c82d8ce62] = env->getStaticMethodID(cls, "codePointCount", "(Ljava/lang/CharSequence;II)I");
        mids$[mid_codePointOf_f0ba70671b70c6e5] = env->getStaticMethodID(cls, "codePointOf", "(Ljava/lang/String;)I");
        mids$[mid_compare_a5d81640ebe07772] = env->getStaticMethodID(cls, "compare", "(CC)I");
        mids$[mid_compareTo_1d2c04bb59db5049] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Character;)I");
        mids$[mid_digit_c59181e65b66f96a] = env->getStaticMethodID(cls, "digit", "(CI)I");
        mids$[mid_digit_92ecd94558bf0c68] = env->getStaticMethodID(cls, "digit", "(II)I");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_forDigit_021469f10b1fd237] = env->getStaticMethodID(cls, "forDigit", "(II)C");
        mids$[mid_getDirectionality_84b41b5f574c1407] = env->getStaticMethodID(cls, "getDirectionality", "(C)B");
        mids$[mid_getDirectionality_d0c6ae56518c754e] = env->getStaticMethodID(cls, "getDirectionality", "(I)B");
        mids$[mid_getName_2a9bffd3d5397f7c] = env->getStaticMethodID(cls, "getName", "(I)Ljava/lang/String;");
        mids$[mid_getNumericValue_722d90999b808801] = env->getStaticMethodID(cls, "getNumericValue", "(C)I");
        mids$[mid_getNumericValue_0e7cf35192c3effe] = env->getStaticMethodID(cls, "getNumericValue", "(I)I");
        mids$[mid_getType_722d90999b808801] = env->getStaticMethodID(cls, "getType", "(C)I");
        mids$[mid_getType_0e7cf35192c3effe] = env->getStaticMethodID(cls, "getType", "(I)I");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_722d90999b808801] = env->getStaticMethodID(cls, "hashCode", "(C)I");
        mids$[mid_highSurrogate_f41af25e73e22f74] = env->getStaticMethodID(cls, "highSurrogate", "(I)C");
        mids$[mid_isAlphabetic_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isAlphabetic", "(I)Z");
        mids$[mid_isBmpCodePoint_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isBmpCodePoint", "(I)Z");
        mids$[mid_isDefined_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isDefined", "(C)Z");
        mids$[mid_isDefined_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isDefined", "(I)Z");
        mids$[mid_isDigit_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isDigit", "(C)Z");
        mids$[mid_isDigit_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isDigit", "(I)Z");
        mids$[mid_isHighSurrogate_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isHighSurrogate", "(C)Z");
        mids$[mid_isISOControl_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isISOControl", "(C)Z");
        mids$[mid_isISOControl_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isISOControl", "(I)Z");
        mids$[mid_isIdentifierIgnorable_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isIdentifierIgnorable", "(C)Z");
        mids$[mid_isIdentifierIgnorable_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isIdentifierIgnorable", "(I)Z");
        mids$[mid_isIdeographic_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isIdeographic", "(I)Z");
        mids$[mid_isJavaIdentifierPart_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isJavaIdentifierPart", "(C)Z");
        mids$[mid_isJavaIdentifierPart_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isJavaIdentifierPart", "(I)Z");
        mids$[mid_isJavaIdentifierStart_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isJavaIdentifierStart", "(C)Z");
        mids$[mid_isJavaIdentifierStart_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isJavaIdentifierStart", "(I)Z");
        mids$[mid_isJavaLetter_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isJavaLetter", "(C)Z");
        mids$[mid_isJavaLetterOrDigit_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isJavaLetterOrDigit", "(C)Z");
        mids$[mid_isLetter_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isLetter", "(C)Z");
        mids$[mid_isLetter_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isLetter", "(I)Z");
        mids$[mid_isLetterOrDigit_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isLetterOrDigit", "(C)Z");
        mids$[mid_isLetterOrDigit_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isLetterOrDigit", "(I)Z");
        mids$[mid_isLowSurrogate_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isLowSurrogate", "(C)Z");
        mids$[mid_isLowerCase_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isLowerCase", "(C)Z");
        mids$[mid_isLowerCase_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isLowerCase", "(I)Z");
        mids$[mid_isMirrored_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isMirrored", "(C)Z");
        mids$[mid_isMirrored_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isMirrored", "(I)Z");
        mids$[mid_isSpace_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isSpace", "(C)Z");
        mids$[mid_isSpaceChar_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isSpaceChar", "(C)Z");
        mids$[mid_isSpaceChar_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isSpaceChar", "(I)Z");
        mids$[mid_isSupplementaryCodePoint_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isSupplementaryCodePoint", "(I)Z");
        mids$[mid_isSurrogate_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isSurrogate", "(C)Z");
        mids$[mid_isSurrogatePair_156ece55eb808655] = env->getStaticMethodID(cls, "isSurrogatePair", "(CC)Z");
        mids$[mid_isTitleCase_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isTitleCase", "(C)Z");
        mids$[mid_isTitleCase_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isTitleCase", "(I)Z");
        mids$[mid_isUnicodeIdentifierPart_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isUnicodeIdentifierPart", "(C)Z");
        mids$[mid_isUnicodeIdentifierPart_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isUnicodeIdentifierPart", "(I)Z");
        mids$[mid_isUnicodeIdentifierStart_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isUnicodeIdentifierStart", "(C)Z");
        mids$[mid_isUnicodeIdentifierStart_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isUnicodeIdentifierStart", "(I)Z");
        mids$[mid_isUpperCase_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isUpperCase", "(C)Z");
        mids$[mid_isUpperCase_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isUpperCase", "(I)Z");
        mids$[mid_isValidCodePoint_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isValidCodePoint", "(I)Z");
        mids$[mid_isWhitespace_d5858ea00bc2131b] = env->getStaticMethodID(cls, "isWhitespace", "(C)Z");
        mids$[mid_isWhitespace_96f51a3f36d3a2a7] = env->getStaticMethodID(cls, "isWhitespace", "(I)Z");
        mids$[mid_lowSurrogate_f41af25e73e22f74] = env->getStaticMethodID(cls, "lowSurrogate", "(I)C");
        mids$[mid_offsetByCodePoints_9c47b38c82d8ce62] = env->getStaticMethodID(cls, "offsetByCodePoints", "(Ljava/lang/CharSequence;II)I");
        mids$[mid_offsetByCodePoints_fe701040a9f1237c] = env->getStaticMethodID(cls, "offsetByCodePoints", "([CIIII)I");
        mids$[mid_reverseBytes_ba667754cdd82ede] = env->getStaticMethodID(cls, "reverseBytes", "(C)C");
        mids$[mid_toChars_cc9b620c79c199b9] = env->getStaticMethodID(cls, "toChars", "(I)[C");
        mids$[mid_toChars_320a535454c577aa] = env->getStaticMethodID(cls, "toChars", "(I[CI)I");
        mids$[mid_toCodePoint_a5d81640ebe07772] = env->getStaticMethodID(cls, "toCodePoint", "(CC)I");
        mids$[mid_toLowerCase_ba667754cdd82ede] = env->getStaticMethodID(cls, "toLowerCase", "(C)C");
        mids$[mid_toLowerCase_0e7cf35192c3effe] = env->getStaticMethodID(cls, "toLowerCase", "(I)I");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_935421dbce990c9c] = env->getStaticMethodID(cls, "toString", "(C)Ljava/lang/String;");
        mids$[mid_toString_2a9bffd3d5397f7c] = env->getStaticMethodID(cls, "toString", "(I)Ljava/lang/String;");
        mids$[mid_toTitleCase_ba667754cdd82ede] = env->getStaticMethodID(cls, "toTitleCase", "(C)C");
        mids$[mid_toTitleCase_0e7cf35192c3effe] = env->getStaticMethodID(cls, "toTitleCase", "(I)I");
        mids$[mid_toUpperCase_ba667754cdd82ede] = env->getStaticMethodID(cls, "toUpperCase", "(C)C");
        mids$[mid_toUpperCase_0e7cf35192c3effe] = env->getStaticMethodID(cls, "toUpperCase", "(I)I");
        mids$[mid_valueOf_98373d881fa0e0bc] = env->getStaticMethodID(cls, "valueOf", "(C)Ljava/lang/Character;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        COMBINING_SPACING_MARK = env->getStaticByteField(cls, "COMBINING_SPACING_MARK");
        CONNECTOR_PUNCTUATION = env->getStaticByteField(cls, "CONNECTOR_PUNCTUATION");
        CONTROL = env->getStaticByteField(cls, "CONTROL");
        CURRENCY_SYMBOL = env->getStaticByteField(cls, "CURRENCY_SYMBOL");
        DASH_PUNCTUATION = env->getStaticByteField(cls, "DASH_PUNCTUATION");
        DECIMAL_DIGIT_NUMBER = env->getStaticByteField(cls, "DECIMAL_DIGIT_NUMBER");
        DIRECTIONALITY_ARABIC_NUMBER = env->getStaticByteField(cls, "DIRECTIONALITY_ARABIC_NUMBER");
        DIRECTIONALITY_BOUNDARY_NEUTRAL = env->getStaticByteField(cls, "DIRECTIONALITY_BOUNDARY_NEUTRAL");
        DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR");
        DIRECTIONALITY_EUROPEAN_NUMBER = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER");
        DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR");
        DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR");
        DIRECTIONALITY_FIRST_STRONG_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_FIRST_STRONG_ISOLATE");
        DIRECTIONALITY_LEFT_TO_RIGHT = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT");
        DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING");
        DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE");
        DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE");
        DIRECTIONALITY_NONSPACING_MARK = env->getStaticByteField(cls, "DIRECTIONALITY_NONSPACING_MARK");
        DIRECTIONALITY_OTHER_NEUTRALS = env->getStaticByteField(cls, "DIRECTIONALITY_OTHER_NEUTRALS");
        DIRECTIONALITY_PARAGRAPH_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_PARAGRAPH_SEPARATOR");
        DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = env->getStaticByteField(cls, "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT");
        DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE");
        DIRECTIONALITY_RIGHT_TO_LEFT = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT");
        DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC");
        DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING");
        DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE");
        DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE");
        DIRECTIONALITY_SEGMENT_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_SEGMENT_SEPARATOR");
        DIRECTIONALITY_UNDEFINED = env->getStaticByteField(cls, "DIRECTIONALITY_UNDEFINED");
        DIRECTIONALITY_WHITESPACE = env->getStaticByteField(cls, "DIRECTIONALITY_WHITESPACE");
        ENCLOSING_MARK = env->getStaticByteField(cls, "ENCLOSING_MARK");
        END_PUNCTUATION = env->getStaticByteField(cls, "END_PUNCTUATION");
        FINAL_QUOTE_PUNCTUATION = env->getStaticByteField(cls, "FINAL_QUOTE_PUNCTUATION");
        FORMAT = env->getStaticByteField(cls, "FORMAT");
        INITIAL_QUOTE_PUNCTUATION = env->getStaticByteField(cls, "INITIAL_QUOTE_PUNCTUATION");
        LETTER_NUMBER = env->getStaticByteField(cls, "LETTER_NUMBER");
        LINE_SEPARATOR = env->getStaticByteField(cls, "LINE_SEPARATOR");
        LOWERCASE_LETTER = env->getStaticByteField(cls, "LOWERCASE_LETTER");
        MATH_SYMBOL = env->getStaticByteField(cls, "MATH_SYMBOL");
        MAX_CODE_POINT = env->getStaticIntField(cls, "MAX_CODE_POINT");
        MAX_HIGH_SURROGATE = env->getStaticCharField(cls, "MAX_HIGH_SURROGATE");
        MAX_LOW_SURROGATE = env->getStaticCharField(cls, "MAX_LOW_SURROGATE");
        MAX_RADIX = env->getStaticIntField(cls, "MAX_RADIX");
        MAX_SURROGATE = env->getStaticCharField(cls, "MAX_SURROGATE");
        MAX_VALUE = env->getStaticCharField(cls, "MAX_VALUE");
        MIN_CODE_POINT = env->getStaticIntField(cls, "MIN_CODE_POINT");
        MIN_HIGH_SURROGATE = env->getStaticCharField(cls, "MIN_HIGH_SURROGATE");
        MIN_LOW_SURROGATE = env->getStaticCharField(cls, "MIN_LOW_SURROGATE");
        MIN_RADIX = env->getStaticIntField(cls, "MIN_RADIX");
        MIN_SUPPLEMENTARY_CODE_POINT = env->getStaticIntField(cls, "MIN_SUPPLEMENTARY_CODE_POINT");
        MIN_SURROGATE = env->getStaticCharField(cls, "MIN_SURROGATE");
        MIN_VALUE = env->getStaticCharField(cls, "MIN_VALUE");
        MODIFIER_LETTER = env->getStaticByteField(cls, "MODIFIER_LETTER");
        MODIFIER_SYMBOL = env->getStaticByteField(cls, "MODIFIER_SYMBOL");
        NON_SPACING_MARK = env->getStaticByteField(cls, "NON_SPACING_MARK");
        OTHER_LETTER = env->getStaticByteField(cls, "OTHER_LETTER");
        OTHER_NUMBER = env->getStaticByteField(cls, "OTHER_NUMBER");
        OTHER_PUNCTUATION = env->getStaticByteField(cls, "OTHER_PUNCTUATION");
        OTHER_SYMBOL = env->getStaticByteField(cls, "OTHER_SYMBOL");
        PARAGRAPH_SEPARATOR = env->getStaticByteField(cls, "PARAGRAPH_SEPARATOR");
        PRIVATE_USE = env->getStaticByteField(cls, "PRIVATE_USE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        SPACE_SEPARATOR = env->getStaticByteField(cls, "SPACE_SEPARATOR");
        START_PUNCTUATION = env->getStaticByteField(cls, "START_PUNCTUATION");
        SURROGATE = env->getStaticByteField(cls, "SURROGATE");
        TITLECASE_LETTER = env->getStaticByteField(cls, "TITLECASE_LETTER");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        UNASSIGNED = env->getStaticByteField(cls, "UNASSIGNED");
        UPPERCASE_LETTER = env->getStaticByteField(cls, "UPPERCASE_LETTER");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Character::Character(jchar a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df95ad02f5b4acd9, a0)) {}

    jint Character::charCount(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_charCount_0e7cf35192c3effe], a0);
    }

    jchar Character::charValue() const
    {
      return env->callCharMethod(this$, mids$[mid_charValue_5e2f8fc4d7c03fbd]);
    }

    jint Character::codePointAt(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_f8cc94d586f10f66], a0.this$, a1);
    }

    jint Character::codePointAt(const ::java::lang::CharSequence & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_7ff102c04b0b108b], a0.this$, a1);
    }

    jint Character::codePointAt(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_a45a4db28976f262], a0.this$, a1, a2);
    }

    jint Character::codePointBefore(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_f8cc94d586f10f66], a0.this$, a1);
    }

    jint Character::codePointBefore(const ::java::lang::CharSequence & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_7ff102c04b0b108b], a0.this$, a1);
    }

    jint Character::codePointBefore(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_a45a4db28976f262], a0.this$, a1, a2);
    }

    jint Character::codePointCount(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointCount_a45a4db28976f262], a0.this$, a1, a2);
    }

    jint Character::codePointCount(const ::java::lang::CharSequence & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointCount_9c47b38c82d8ce62], a0.this$, a1, a2);
    }

    jint Character::codePointOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointOf_f0ba70671b70c6e5], a0.this$);
    }

    jint Character::compare(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_a5d81640ebe07772], a0, a1);
    }

    jint Character::compareTo(const Character & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_1d2c04bb59db5049], a0.this$);
    }

    jint Character::digit(jchar a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_digit_c59181e65b66f96a], a0, a1);
    }

    jint Character::digit(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_digit_92ecd94558bf0c68], a0, a1);
    }

    jboolean Character::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jchar Character::forDigit(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_forDigit_021469f10b1fd237], a0, a1);
    }

    jbyte Character::getDirectionality(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_getDirectionality_84b41b5f574c1407], a0);
    }

    jbyte Character::getDirectionality(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_getDirectionality_d0c6ae56518c754e], a0);
    }

    ::java::lang::String Character::getName(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getName_2a9bffd3d5397f7c], a0));
    }

    jint Character::getNumericValue(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getNumericValue_722d90999b808801], a0);
    }

    jint Character::getNumericValue(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getNumericValue_0e7cf35192c3effe], a0);
    }

    jint Character::getType(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getType_722d90999b808801], a0);
    }

    jint Character::getType(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getType_0e7cf35192c3effe], a0);
    }

    jint Character::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint Character::hashCode(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_722d90999b808801], a0);
    }

    jchar Character::highSurrogate(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_highSurrogate_f41af25e73e22f74], a0);
    }

    jboolean Character::isAlphabetic(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isAlphabetic_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isBmpCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isBmpCodePoint_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isDefined(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDefined_d5858ea00bc2131b], a0);
    }

    jboolean Character::isDefined(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDefined_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDigit_d5858ea00bc2131b], a0);
    }

    jboolean Character::isDigit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDigit_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isHighSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isHighSurrogate_d5858ea00bc2131b], a0);
    }

    jboolean Character::isISOControl(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isISOControl_d5858ea00bc2131b], a0);
    }

    jboolean Character::isISOControl(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isISOControl_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isIdentifierIgnorable(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdentifierIgnorable_d5858ea00bc2131b], a0);
    }

    jboolean Character::isIdentifierIgnorable(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdentifierIgnorable_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isIdeographic(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdeographic_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isJavaIdentifierPart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierPart_d5858ea00bc2131b], a0);
    }

    jboolean Character::isJavaIdentifierPart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierPart_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isJavaIdentifierStart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierStart_d5858ea00bc2131b], a0);
    }

    jboolean Character::isJavaIdentifierStart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierStart_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isJavaLetter(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaLetter_d5858ea00bc2131b], a0);
    }

    jboolean Character::isJavaLetterOrDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaLetterOrDigit_d5858ea00bc2131b], a0);
    }

    jboolean Character::isLetter(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetter_d5858ea00bc2131b], a0);
    }

    jboolean Character::isLetter(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetter_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isLetterOrDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetterOrDigit_d5858ea00bc2131b], a0);
    }

    jboolean Character::isLetterOrDigit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetterOrDigit_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isLowSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowSurrogate_d5858ea00bc2131b], a0);
    }

    jboolean Character::isLowerCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowerCase_d5858ea00bc2131b], a0);
    }

    jboolean Character::isLowerCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowerCase_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isMirrored(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isMirrored_d5858ea00bc2131b], a0);
    }

    jboolean Character::isMirrored(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isMirrored_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isSpace(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpace_d5858ea00bc2131b], a0);
    }

    jboolean Character::isSpaceChar(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpaceChar_d5858ea00bc2131b], a0);
    }

    jboolean Character::isSpaceChar(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpaceChar_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isSupplementaryCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSupplementaryCodePoint_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSurrogate_d5858ea00bc2131b], a0);
    }

    jboolean Character::isSurrogatePair(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSurrogatePair_156ece55eb808655], a0, a1);
    }

    jboolean Character::isTitleCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isTitleCase_d5858ea00bc2131b], a0);
    }

    jboolean Character::isTitleCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isTitleCase_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isUnicodeIdentifierPart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierPart_d5858ea00bc2131b], a0);
    }

    jboolean Character::isUnicodeIdentifierPart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierPart_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isUnicodeIdentifierStart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierStart_d5858ea00bc2131b], a0);
    }

    jboolean Character::isUnicodeIdentifierStart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierStart_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isUpperCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUpperCase_d5858ea00bc2131b], a0);
    }

    jboolean Character::isUpperCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUpperCase_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isValidCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isValidCodePoint_96f51a3f36d3a2a7], a0);
    }

    jboolean Character::isWhitespace(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isWhitespace_d5858ea00bc2131b], a0);
    }

    jboolean Character::isWhitespace(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isWhitespace_96f51a3f36d3a2a7], a0);
    }

    jchar Character::lowSurrogate(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_lowSurrogate_f41af25e73e22f74], a0);
    }

    jint Character::offsetByCodePoints(const ::java::lang::CharSequence & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_offsetByCodePoints_9c47b38c82d8ce62], a0.this$, a1, a2);
    }

    jint Character::offsetByCodePoints(const JArray< jchar > & a0, jint a1, jint a2, jint a3, jint a4)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_offsetByCodePoints_fe701040a9f1237c], a0.this$, a1, a2, a3, a4);
    }

    jchar Character::reverseBytes(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_reverseBytes_ba667754cdd82ede], a0);
    }

    JArray< jchar > Character::toChars(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_toChars_cc9b620c79c199b9], a0));
    }

    jint Character::toChars(jint a0, const JArray< jchar > & a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toChars_320a535454c577aa], a0, a1.this$, a2);
    }

    jint Character::toCodePoint(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toCodePoint_a5d81640ebe07772], a0, a1);
    }

    jchar Character::toLowerCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toLowerCase_ba667754cdd82ede], a0);
    }

    jint Character::toLowerCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toLowerCase_0e7cf35192c3effe], a0);
    }

    ::java::lang::String Character::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Character::toString(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_935421dbce990c9c], a0));
    }

    ::java::lang::String Character::toString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_2a9bffd3d5397f7c], a0));
    }

    jchar Character::toTitleCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toTitleCase_ba667754cdd82ede], a0);
    }

    jint Character::toTitleCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toTitleCase_0e7cf35192c3effe], a0);
    }

    jchar Character::toUpperCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toUpperCase_ba667754cdd82ede], a0);
    }

    jint Character::toUpperCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUpperCase_0e7cf35192c3effe], a0);
    }

    Character Character::valueOf(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Character(env->callStaticObjectMethod(cls, mids$[mid_valueOf_98373d881fa0e0bc], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Character_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Character_init_(t_Character *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Character_charCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_charValue(t_Character *self);
    static PyObject *t_Character_codePointAt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointBefore(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointCount(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_compareTo(t_Character *self, PyObject *arg);
    static PyObject *t_Character_digit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_equals(t_Character *self, PyObject *args);
    static PyObject *t_Character_forDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getDirectionality(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getName(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_getNumericValue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getType(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_hashCode(t_Character *self, PyObject *args);
    static PyObject *t_Character_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_highSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isAlphabetic(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isBmpCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isDefined(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isHighSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isISOControl(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isIdentifierIgnorable(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isIdeographic(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isJavaIdentifierPart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isJavaIdentifierStart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isJavaLetter(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isJavaLetterOrDigit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isLetter(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isLetterOrDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isLowSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isLowerCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isMirrored(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isSpace(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSpaceChar(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isSupplementaryCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSurrogatePair(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isTitleCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUnicodeIdentifierPart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUnicodeIdentifierStart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUpperCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isValidCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isWhitespace(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_lowSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_offsetByCodePoints(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_toChars(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toCodePoint(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toLowerCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toString(t_Character *self, PyObject *args);
    static PyObject *t_Character_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toTitleCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toUpperCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_valueOf(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Character__methods_[] = {
      DECLARE_METHOD(t_Character, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, charCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, charValue, METH_NOARGS),
      DECLARE_METHOD(t_Character, codePointAt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointBefore, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointCount, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, compareTo, METH_O),
      DECLARE_METHOD(t_Character, digit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, equals, METH_VARARGS),
      DECLARE_METHOD(t_Character, forDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getDirectionality, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getName, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, getNumericValue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getType, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Character, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, highSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isAlphabetic, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isBmpCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isDefined, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isHighSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isISOControl, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isIdentifierIgnorable, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isIdeographic, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaIdentifierPart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaIdentifierStart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaLetter, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaLetterOrDigit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isLetter, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isLetterOrDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isLowSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isLowerCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isMirrored, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isSpace, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSpaceChar, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isSupplementaryCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSurrogatePair, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isTitleCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUnicodeIdentifierPart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUnicodeIdentifierStart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUpperCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isValidCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isWhitespace, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, lowSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, offsetByCodePoints, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, toChars, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toCodePoint, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toLowerCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toString, METH_VARARGS),
      DECLARE_METHOD(t_Character, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toTitleCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toUpperCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, valueOf, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Character)[] = {
      { Py_tp_methods, t_Character__methods_ },
      { Py_tp_init, (void *) t_Character_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Character)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Character, t_Character, Character);

    void t_Character::install(PyObject *module)
    {
      installType(&PY_TYPE(Character), &PY_TYPE_DEF(Character), module, "Character", 0);
    }

    void t_Character::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "class_", make_descriptor(Character::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "wrapfn_", make_descriptor(unboxCharacter));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "boxfn_", make_descriptor(boxCharacter));
      env->getClass(Character::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "BYTES", make_descriptor(Character::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "COMBINING_SPACING_MARK", make_descriptor(Character::COMBINING_SPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CONNECTOR_PUNCTUATION", make_descriptor(Character::CONNECTOR_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CONTROL", make_descriptor(Character::CONTROL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CURRENCY_SYMBOL", make_descriptor(Character::CURRENCY_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DASH_PUNCTUATION", make_descriptor(Character::DASH_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DECIMAL_DIGIT_NUMBER", make_descriptor(Character::DECIMAL_DIGIT_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_ARABIC_NUMBER", make_descriptor(Character::DIRECTIONALITY_ARABIC_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_BOUNDARY_NEUTRAL", make_descriptor(Character::DIRECTIONALITY_BOUNDARY_NEUTRAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_FIRST_STRONG_ISOLATE", make_descriptor(Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_NONSPACING_MARK", make_descriptor(Character::DIRECTIONALITY_NONSPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_OTHER_NEUTRALS", make_descriptor(Character::DIRECTIONALITY_OTHER_NEUTRALS));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_PARAGRAPH_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT", make_descriptor(Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE", make_descriptor(Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_SEGMENT_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_SEGMENT_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_UNDEFINED", make_descriptor(Character::DIRECTIONALITY_UNDEFINED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_WHITESPACE", make_descriptor(Character::DIRECTIONALITY_WHITESPACE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "ENCLOSING_MARK", make_descriptor(Character::ENCLOSING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "END_PUNCTUATION", make_descriptor(Character::END_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "FINAL_QUOTE_PUNCTUATION", make_descriptor(Character::FINAL_QUOTE_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "FORMAT", make_descriptor(Character::FORMAT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "INITIAL_QUOTE_PUNCTUATION", make_descriptor(Character::INITIAL_QUOTE_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LETTER_NUMBER", make_descriptor(Character::LETTER_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LINE_SEPARATOR", make_descriptor(Character::LINE_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LOWERCASE_LETTER", make_descriptor(Character::LOWERCASE_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MATH_SYMBOL", make_descriptor(Character::MATH_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_CODE_POINT", make_descriptor(Character::MAX_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_HIGH_SURROGATE", make_descriptor(Character::MAX_HIGH_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_LOW_SURROGATE", make_descriptor(Character::MAX_LOW_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_RADIX", make_descriptor(Character::MAX_RADIX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_SURROGATE", make_descriptor(Character::MAX_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_VALUE", make_descriptor(Character::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_CODE_POINT", make_descriptor(Character::MIN_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_HIGH_SURROGATE", make_descriptor(Character::MIN_HIGH_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_LOW_SURROGATE", make_descriptor(Character::MIN_LOW_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_RADIX", make_descriptor(Character::MIN_RADIX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_SUPPLEMENTARY_CODE_POINT", make_descriptor(Character::MIN_SUPPLEMENTARY_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_SURROGATE", make_descriptor(Character::MIN_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_VALUE", make_descriptor(Character::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MODIFIER_LETTER", make_descriptor(Character::MODIFIER_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MODIFIER_SYMBOL", make_descriptor(Character::MODIFIER_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "NON_SPACING_MARK", make_descriptor(Character::NON_SPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_LETTER", make_descriptor(Character::OTHER_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_NUMBER", make_descriptor(Character::OTHER_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_PUNCTUATION", make_descriptor(Character::OTHER_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_SYMBOL", make_descriptor(Character::OTHER_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "PARAGRAPH_SEPARATOR", make_descriptor(Character::PARAGRAPH_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "PRIVATE_USE", make_descriptor(Character::PRIVATE_USE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SIZE", make_descriptor(Character::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SPACE_SEPARATOR", make_descriptor(Character::SPACE_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "START_PUNCTUATION", make_descriptor(Character::START_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SURROGATE", make_descriptor(Character::SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "TITLECASE_LETTER", make_descriptor(Character::TITLECASE_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Character::TYPE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "UNASSIGNED", make_descriptor(Character::UNASSIGNED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "UPPERCASE_LETTER", make_descriptor(Character::UPPERCASE_LETTER));
    }

    static PyObject *t_Character_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Character::initializeClass, 1)))
        return NULL;
      return t_Character::wrap_Object(Character(((t_Character *) arg)->object.this$));
    }
    static PyObject *t_Character_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Character::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Character_init_(t_Character *self, PyObject *args, PyObject *kwds)
    {
      jchar a0;
      Character object((jobject) NULL);

      if (!parseArgs(args, "C", &a0))
      {
        INT_CALL(object = Character(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Character_charCount(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::charCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "charCount", arg);
      return NULL;
    }

    static PyObject *t_Character_charValue(t_Character *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.charValue());
      return c2p(result);
    }

    static PyObject *t_Character_codePointAt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "OI", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointAt", args);
      return NULL;
    }

    static PyObject *t_Character_codePointBefore(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "OI", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointBefore", args);
      return NULL;
    }

    static PyObject *t_Character_codePointCount(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointCount(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointCount(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_Character_codePointOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::codePointOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "codePointOf", arg);
      return NULL;
    }

    static PyObject *t_Character_compare(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jint result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Character_compareTo(t_Character *self, PyObject *arg)
    {
      Character a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Character), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Character_digit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jchar a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::digit(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::digit(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "digit", args);
      return NULL;
    }

    static PyObject *t_Character_equals(t_Character *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Character_forDigit(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jchar result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::forDigit(a0, a1));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "forDigit", args);
      return NULL;
    }

    static PyObject *t_Character_getDirectionality(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jbyte result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getDirectionality(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jbyte result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getDirectionality(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getDirectionality", args);
      return NULL;
    }

    static PyObject *t_Character_getName(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::getName(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "getName", arg);
      return NULL;
    }

    static PyObject *t_Character_getNumericValue(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jint result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getNumericValue(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getNumericValue(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getNumericValue", args);
      return NULL;
    }

    static PyObject *t_Character_getType(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jint result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getType(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getType(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getType", args);
      return NULL;
    }

    static PyObject *t_Character_hashCode(t_Character *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Character_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jint result;

      if (!parseArgs(args, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Character_highSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::highSurrogate(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "highSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isAlphabetic(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isAlphabetic(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isAlphabetic", arg);
      return NULL;
    }

    static PyObject *t_Character_isBmpCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isBmpCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isBmpCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isDefined(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDefined(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDefined(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isDefined", args);
      return NULL;
    }

    static PyObject *t_Character_isDigit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isDigit", args);
      return NULL;
    }

    static PyObject *t_Character_isHighSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isHighSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isHighSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isISOControl(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isISOControl(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isISOControl(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isISOControl", args);
      return NULL;
    }

    static PyObject *t_Character_isIdentifierIgnorable(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isIdentifierIgnorable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isIdentifierIgnorable(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isIdentifierIgnorable", args);
      return NULL;
    }

    static PyObject *t_Character_isIdeographic(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isIdeographic(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isIdeographic", arg);
      return NULL;
    }

    static PyObject *t_Character_isJavaIdentifierPart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isJavaIdentifierPart", args);
      return NULL;
    }

    static PyObject *t_Character_isJavaIdentifierStart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isJavaIdentifierStart", args);
      return NULL;
    }

    static PyObject *t_Character_isJavaLetter(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isJavaLetter(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isJavaLetter", arg);
      return NULL;
    }

    static PyObject *t_Character_isJavaLetterOrDigit(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isJavaLetterOrDigit(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isJavaLetterOrDigit", arg);
      return NULL;
    }

    static PyObject *t_Character_isLetter(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetter(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetter(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLetter", args);
      return NULL;
    }

    static PyObject *t_Character_isLetterOrDigit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetterOrDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetterOrDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLetterOrDigit", args);
      return NULL;
    }

    static PyObject *t_Character_isLowSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isLowSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isLowSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isLowerCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLowerCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLowerCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLowerCase", args);
      return NULL;
    }

    static PyObject *t_Character_isMirrored(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isMirrored(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isMirrored(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isMirrored", args);
      return NULL;
    }

    static PyObject *t_Character_isSpace(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSpace(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSpace", arg);
      return NULL;
    }

    static PyObject *t_Character_isSpaceChar(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isSpaceChar(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isSpaceChar(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isSpaceChar", args);
      return NULL;
    }

    static PyObject *t_Character_isSupplementaryCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSupplementaryCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSupplementaryCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isSurrogatePair(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jboolean result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::isSurrogatePair(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSurrogatePair", args);
      return NULL;
    }

    static PyObject *t_Character_isTitleCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isTitleCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isTitleCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isTitleCase", args);
      return NULL;
    }

    static PyObject *t_Character_isUnicodeIdentifierPart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUnicodeIdentifierPart", args);
      return NULL;
    }

    static PyObject *t_Character_isUnicodeIdentifierStart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUnicodeIdentifierStart", args);
      return NULL;
    }

    static PyObject *t_Character_isUpperCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUpperCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUpperCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUpperCase", args);
      return NULL;
    }

    static PyObject *t_Character_isValidCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isValidCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isValidCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isWhitespace(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isWhitespace(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isWhitespace(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isWhitespace", args);
      return NULL;
    }

    static PyObject *t_Character_lowSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::lowSurrogate(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "lowSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_offsetByCodePoints(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::offsetByCodePoints(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 5:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          jint result;

          if (!parseArgs(args, "[CIIII", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::lang::Character::offsetByCodePoints(a0, a1, a2, a3, a4));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_Character_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jchar result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::reverseBytes(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Character_toChars(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toChars(a0));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          jint a2;
          jint result;

          if (!parseArgs(args, "I[CI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::toChars(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toChars", args);
      return NULL;
    }

    static PyObject *t_Character_toCodePoint(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jint result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::toCodePoint(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toCodePoint", args);
      return NULL;
    }

    static PyObject *t_Character_toLowerCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toLowerCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toLowerCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toLowerCase", args);
      return NULL;
    }

    static PyObject *t_Character_toString(t_Character *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Character_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toString(a0));
            return j2p(result);
          }
        }
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toString(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Character_toTitleCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toTitleCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toTitleCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toTitleCase", args);
      return NULL;
    }

    static PyObject *t_Character_toUpperCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toUpperCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toUpperCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUpperCase", args);
      return NULL;
    }

    static PyObject *t_Character_valueOf(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      Character result((jobject) NULL);

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::valueOf(a0));
        return t_Character::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "valueOf", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseMinusCodeCycleSlipDetector::class$ = NULL;
          jmethodID *PhaseMinusCodeCycleSlipDetector::mids$ = NULL;
          bool PhaseMinusCodeCycleSlipDetector::live$ = false;

          jclass PhaseMinusCodeCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5408957787adf55f] = env->getMethodID(cls, "<init>", "(DDII)V");
              mids$[mid_manageData_e95b94a72b1c921a] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseMinusCodeCycleSlipDetector::PhaseMinusCodeCycleSlipDetector(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(env->newObject(initializeClass, &mids$, mid_init$_5408957787adf55f, a0, a1, a2, a3)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseMinusCodeCycleSlipDetector_init_(t_PhaseMinusCodeCycleSlipDetector *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_PhaseMinusCodeCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_PhaseMinusCodeCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseMinusCodeCycleSlipDetector, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseMinusCodeCycleSlipDetector)[] = {
            { Py_tp_methods, t_PhaseMinusCodeCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) t_PhaseMinusCodeCycleSlipDetector_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseMinusCodeCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(PhaseMinusCodeCycleSlipDetector, t_PhaseMinusCodeCycleSlipDetector, PhaseMinusCodeCycleSlipDetector);

          void t_PhaseMinusCodeCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseMinusCodeCycleSlipDetector), &PY_TYPE_DEF(PhaseMinusCodeCycleSlipDetector), module, "PhaseMinusCodeCycleSlipDetector", 0);
          }

          void t_PhaseMinusCodeCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "class_", make_descriptor(PhaseMinusCodeCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "wrapfn_", make_descriptor(t_PhaseMinusCodeCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseMinusCodeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseMinusCodeCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_PhaseMinusCodeCycleSlipDetector::wrap_Object(PhaseMinusCodeCycleSlipDetector(((t_PhaseMinusCodeCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseMinusCodeCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseMinusCodeCycleSlipDetector_init_(t_PhaseMinusCodeCycleSlipDetector *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jint a3;
            PhaseMinusCodeCycleSlipDetector object((jobject) NULL);

            if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PhaseMinusCodeCycleSlipDetector(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/PythonRangeUnitsConverter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *PythonRangeUnitsConverter::class$ = NULL;
            jmethodID *PythonRangeUnitsConverter::mids$ = NULL;
            bool PythonRangeUnitsConverter::live$ = false;

            jclass PythonRangeUnitsConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/PythonRangeUnitsConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_metersToRu_382e9a92dc257319] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_ruToMeters_382e9a92dc257319] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonRangeUnitsConverter::PythonRangeUnitsConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonRangeUnitsConverter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonRangeUnitsConverter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonRangeUnitsConverter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            static PyObject *t_PythonRangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonRangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonRangeUnitsConverter_init_(t_PythonRangeUnitsConverter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonRangeUnitsConverter_finalize(t_PythonRangeUnitsConverter *self);
            static PyObject *t_PythonRangeUnitsConverter_pythonExtension(t_PythonRangeUnitsConverter *self, PyObject *args);
            static jdouble JNICALL t_PythonRangeUnitsConverter_metersToRu0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static void JNICALL t_PythonRangeUnitsConverter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonRangeUnitsConverter_ruToMeters2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static PyObject *t_PythonRangeUnitsConverter_get__self(t_PythonRangeUnitsConverter *self, void *data);
            static PyGetSetDef t_PythonRangeUnitsConverter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonRangeUnitsConverter, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonRangeUnitsConverter__methods_[] = {
              DECLARE_METHOD(t_PythonRangeUnitsConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonRangeUnitsConverter)[] = {
              { Py_tp_methods, t_PythonRangeUnitsConverter__methods_ },
              { Py_tp_init, (void *) t_PythonRangeUnitsConverter_init_ },
              { Py_tp_getset, t_PythonRangeUnitsConverter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonRangeUnitsConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonRangeUnitsConverter, t_PythonRangeUnitsConverter, PythonRangeUnitsConverter);

            void t_PythonRangeUnitsConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonRangeUnitsConverter), &PY_TYPE_DEF(PythonRangeUnitsConverter), module, "PythonRangeUnitsConverter", 1);
            }

            void t_PythonRangeUnitsConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "class_", make_descriptor(PythonRangeUnitsConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "wrapfn_", make_descriptor(t_PythonRangeUnitsConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonRangeUnitsConverter::initializeClass);
              JNINativeMethod methods[] = {
                { "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D", (void *) t_PythonRangeUnitsConverter_metersToRu0 },
                { "pythonDecRef", "()V", (void *) t_PythonRangeUnitsConverter_pythonDecRef1 },
                { "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D", (void *) t_PythonRangeUnitsConverter_ruToMeters2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonRangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonRangeUnitsConverter::initializeClass, 1)))
                return NULL;
              return t_PythonRangeUnitsConverter::wrap_Object(PythonRangeUnitsConverter(((t_PythonRangeUnitsConverter *) arg)->object.this$));
            }
            static PyObject *t_PythonRangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonRangeUnitsConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonRangeUnitsConverter_init_(t_PythonRangeUnitsConverter *self, PyObject *args, PyObject *kwds)
            {
              PythonRangeUnitsConverter object((jobject) NULL);

              INT_CALL(object = PythonRangeUnitsConverter());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonRangeUnitsConverter_finalize(t_PythonRangeUnitsConverter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonRangeUnitsConverter_pythonExtension(t_PythonRangeUnitsConverter *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  jlong result;
                  OBJ_CALL(result = self->object.pythonExtension());
                  return PyLong_FromLongLong((PY_LONG_LONG) result);
                }
                break;
               case 1:
                {
                  jlong a0;

                  if (!parseArgs(args, "J", &a0))
                  {
                    OBJ_CALL(self->object.pythonExtension(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
              return NULL;
            }

            static jdouble JNICALL t_PythonRangeUnitsConverter_metersToRu0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::files::ccsds::ndm::tdm::t_TdmMetadata::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::TdmMetadata(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "metersToRu", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("metersToRu", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonRangeUnitsConverter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jdouble JNICALL t_PythonRangeUnitsConverter_ruToMeters2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::files::ccsds::ndm::tdm::t_TdmMetadata::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::TdmMetadata(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "ruToMeters", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("ruToMeters", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static PyObject *t_PythonRangeUnitsConverter_get__self(t_PythonRangeUnitsConverter *self, void *data)
            {
              jlong ptr;
              OBJ_CALL(ptr = self->object.pythonExtension());
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                Py_INCREF(obj);
                return obj;
              }
              else
                Py_RETURN_NONE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BoundaryProjection::class$ = NULL;
        jmethodID *BoundaryProjection::mids$ = NULL;
        bool BoundaryProjection::live$ = false;

        jclass BoundaryProjection::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BoundaryProjection");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3a73218d4da33cbb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/Point;Lorg/hipparchus/geometry/Point;D)V");
            mids$[mid_getOffset_b74f83833fdad017] = env->getMethodID(cls, "getOffset", "()D");
            mids$[mid_getOriginal_4b90e5ca2d7b0c50] = env->getMethodID(cls, "getOriginal", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getProjected_4b90e5ca2d7b0c50] = env->getMethodID(cls, "getProjected", "()Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BoundaryProjection::BoundaryProjection(const ::org::hipparchus::geometry::Point & a0, const ::org::hipparchus::geometry::Point & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a73218d4da33cbb, a0.this$, a1.this$, a2)) {}

        jdouble BoundaryProjection::getOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOffset_b74f83833fdad017]);
        }

        ::org::hipparchus::geometry::Point BoundaryProjection::getOriginal() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getOriginal_4b90e5ca2d7b0c50]));
        }

        ::org::hipparchus::geometry::Point BoundaryProjection::getProjected() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getProjected_4b90e5ca2d7b0c50]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        static PyObject *t_BoundaryProjection_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryProjection_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryProjection_of_(t_BoundaryProjection *self, PyObject *args);
        static int t_BoundaryProjection_init_(t_BoundaryProjection *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BoundaryProjection_getOffset(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_getOriginal(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_getProjected(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_get__offset(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__original(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__projected(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__parameters_(t_BoundaryProjection *self, void *data);
        static PyGetSetDef t_BoundaryProjection__fields_[] = {
          DECLARE_GET_FIELD(t_BoundaryProjection, offset),
          DECLARE_GET_FIELD(t_BoundaryProjection, original),
          DECLARE_GET_FIELD(t_BoundaryProjection, projected),
          DECLARE_GET_FIELD(t_BoundaryProjection, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BoundaryProjection__methods_[] = {
          DECLARE_METHOD(t_BoundaryProjection, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryProjection, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryProjection, of_, METH_VARARGS),
          DECLARE_METHOD(t_BoundaryProjection, getOffset, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryProjection, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryProjection, getProjected, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BoundaryProjection)[] = {
          { Py_tp_methods, t_BoundaryProjection__methods_ },
          { Py_tp_init, (void *) t_BoundaryProjection_init_ },
          { Py_tp_getset, t_BoundaryProjection__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BoundaryProjection)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BoundaryProjection, t_BoundaryProjection, BoundaryProjection);
        PyObject *t_BoundaryProjection::wrap_Object(const BoundaryProjection& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryProjection::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryProjection *self = (t_BoundaryProjection *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BoundaryProjection::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryProjection::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryProjection *self = (t_BoundaryProjection *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BoundaryProjection::install(PyObject *module)
        {
          installType(&PY_TYPE(BoundaryProjection), &PY_TYPE_DEF(BoundaryProjection), module, "BoundaryProjection", 0);
        }

        void t_BoundaryProjection::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "class_", make_descriptor(BoundaryProjection::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "wrapfn_", make_descriptor(t_BoundaryProjection::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BoundaryProjection_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BoundaryProjection::initializeClass, 1)))
            return NULL;
          return t_BoundaryProjection::wrap_Object(BoundaryProjection(((t_BoundaryProjection *) arg)->object.this$));
        }
        static PyObject *t_BoundaryProjection_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BoundaryProjection::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BoundaryProjection_of_(t_BoundaryProjection *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BoundaryProjection_init_(t_BoundaryProjection *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          BoundaryProjection object((jobject) NULL);

          if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::Point::initializeClass, ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1, &p1, ::org::hipparchus::geometry::t_Point::parameters_, &a2))
          {
            INT_CALL(object = BoundaryProjection(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BoundaryProjection_getOffset(t_BoundaryProjection *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BoundaryProjection_getOriginal(t_BoundaryProjection *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryProjection_getProjected(t_BoundaryProjection *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getProjected());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_BoundaryProjection_get__parameters_(t_BoundaryProjection *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BoundaryProjection_get__offset(t_BoundaryProjection *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOffset());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BoundaryProjection_get__original(t_BoundaryProjection *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_BoundaryProjection_get__projected(t_BoundaryProjection *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getProjected());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }
      }
    }
  }
}

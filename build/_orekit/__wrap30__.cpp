#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmWriter::class$ = NULL;
              jmethodID *OcmWriter::mids$ = NULL;
              bool OcmWriter::live$ = false;
              jdouble OcmWriter::CCSDS_OCM_VERS = (jdouble) 0;
              jint OcmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9d1c41cc4d1bd153] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;)V");
                  mids$[mid_getEquatorialRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                  mids$[mid_getFlattening_456d9a2f64d6b28d] = env->getMethodID(cls, "getFlattening", "()D");
                  mids$[mid_writeSegmentContent_17bd99da1e106002] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OCM_VERS = env->getStaticDoubleField(cls, "CCSDS_OCM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmWriter::OcmWriter(const ::org::orekit::utils::IERSConventions & a0, jdouble a1, jdouble a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_9d1c41cc4d1bd153, a0.this$, a1, a2, a3.this$)) {}

              jdouble OcmWriter::getEquatorialRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_456d9a2f64d6b28d]);
              }

              jdouble OcmWriter::getFlattening() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFlattening_456d9a2f64d6b28d]);
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
            namespace ocm {
              static PyObject *t_OcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmWriter_of_(t_OcmWriter *self, PyObject *args);
              static int t_OcmWriter_init_(t_OcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmWriter_getEquatorialRadius(t_OcmWriter *self);
              static PyObject *t_OcmWriter_getFlattening(t_OcmWriter *self);
              static PyObject *t_OcmWriter_get__equatorialRadius(t_OcmWriter *self, void *data);
              static PyObject *t_OcmWriter_get__flattening(t_OcmWriter *self, void *data);
              static PyObject *t_OcmWriter_get__parameters_(t_OcmWriter *self, void *data);
              static PyGetSetDef t_OcmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OcmWriter, equatorialRadius),
                DECLARE_GET_FIELD(t_OcmWriter, flattening),
                DECLARE_GET_FIELD(t_OcmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmWriter__methods_[] = {
                DECLARE_METHOD(t_OcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmWriter, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmWriter, getEquatorialRadius, METH_NOARGS),
                DECLARE_METHOD(t_OcmWriter, getFlattening, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmWriter)[] = {
                { Py_tp_methods, t_OcmWriter__methods_ },
                { Py_tp_init, (void *) t_OcmWriter_init_ },
                { Py_tp_getset, t_OcmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OcmWriter, t_OcmWriter, OcmWriter);
              PyObject *t_OcmWriter::wrap_Object(const OcmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OcmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmWriter *self = (t_OcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OcmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OcmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmWriter *self = (t_OcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmWriter), &PY_TYPE_DEF(OcmWriter), module, "OcmWriter", 0);
              }

              void t_OcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "class_", make_descriptor(OcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "wrapfn_", make_descriptor(t_OcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "CCSDS_OCM_VERS", make_descriptor(OcmWriter::CCSDS_OCM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "KVN_PADDING_WIDTH", make_descriptor(OcmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmWriter::initializeClass, 1)))
                  return NULL;
                return t_OcmWriter::wrap_Object(OcmWriter(((t_OcmWriter *) arg)->object.this$));
              }
              static PyObject *t_OcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmWriter_of_(t_OcmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OcmWriter_init_(t_OcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                jdouble a2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                OcmWriter object((jobject) NULL);

                if (!parseArgs(args, "KDDk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = OcmWriter(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(Ocm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmWriter_getEquatorialRadius(t_OcmWriter *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmWriter_getFlattening(t_OcmWriter *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlattening());
                return PyFloat_FromDouble((double) result);
              }
              static PyObject *t_OcmWriter_get__parameters_(t_OcmWriter *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OcmWriter_get__equatorialRadius(t_OcmWriter *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OcmWriter_get__flattening(t_OcmWriter *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFlattening());
                return PyFloat_FromDouble((double) value);
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
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedKalmanFilter::class$ = NULL;
          jmethodID *UnscentedKalmanFilter::mids$ = NULL;
          bool UnscentedKalmanFilter::live$ = false;

          jclass UnscentedKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4971584c5a4d7b97] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/unscented/UnscentedProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;Lorg/hipparchus/util/UnscentedTransformProvider;)V");
              mids$[mid_estimationStep_01cd341bc5eb698c] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getCorrected_3d891496bfc9091e] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getPredicted_3d891496bfc9091e] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getUnscentedTransformProvider_150f86c62233cf64] = env->getMethodID(cls, "getUnscentedTransformProvider", "()Lorg/hipparchus/util/UnscentedTransformProvider;");
              mids$[mid_predictionAndCorrectionSteps_ab11ecde48914feb] = env->getMethodID(cls, "predictionAndCorrectionSteps", "(Lorg/hipparchus/filtering/kalman/Measurement;[Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UnscentedKalmanFilter::UnscentedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2, const ::org::hipparchus::util::UnscentedTransformProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4971584c5a4d7b97, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_01cd341bc5eb698c], a0.this$));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::getCorrected() const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_3d891496bfc9091e]));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::getPredicted() const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_3d891496bfc9091e]));
          }

          ::org::hipparchus::util::UnscentedTransformProvider UnscentedKalmanFilter::getUnscentedTransformProvider() const
          {
            return ::org::hipparchus::util::UnscentedTransformProvider(env->callObjectMethod(this$, mids$[mid_getUnscentedTransformProvider_150f86c62233cf64]));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::predictionAndCorrectionSteps(const ::org::hipparchus::filtering::kalman::Measurement & a0, const JArray< ::org::hipparchus::linear::RealVector > & a1) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_predictionAndCorrectionSteps_ab11ecde48914feb], a0.this$, a1.this$));
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
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_of_(t_UnscentedKalmanFilter *self, PyObject *args);
          static int t_UnscentedKalmanFilter_init_(t_UnscentedKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_UnscentedKalmanFilter_estimationStep(t_UnscentedKalmanFilter *self, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_getCorrected(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_getPredicted(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_getUnscentedTransformProvider(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_predictionAndCorrectionSteps(t_UnscentedKalmanFilter *self, PyObject *args);
          static PyObject *t_UnscentedKalmanFilter_get__corrected(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__predicted(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__unscentedTransformProvider(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__parameters_(t_UnscentedKalmanFilter *self, void *data);
          static PyGetSetDef t_UnscentedKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, corrected),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, predicted),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, unscentedTransformProvider),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_UnscentedKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, estimationStep, METH_O),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getCorrected, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getPredicted, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getUnscentedTransformProvider, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, predictionAndCorrectionSteps, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanFilter)[] = {
            { Py_tp_methods, t_UnscentedKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_UnscentedKalmanFilter_init_ },
            { Py_tp_getset, t_UnscentedKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedKalmanFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedKalmanFilter, t_UnscentedKalmanFilter, UnscentedKalmanFilter);
          PyObject *t_UnscentedKalmanFilter::wrap_Object(const UnscentedKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedKalmanFilter *self = (t_UnscentedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UnscentedKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedKalmanFilter *self = (t_UnscentedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UnscentedKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedKalmanFilter), &PY_TYPE_DEF(UnscentedKalmanFilter), module, "UnscentedKalmanFilter", 0);
          }

          void t_UnscentedKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "class_", make_descriptor(UnscentedKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "wrapfn_", make_descriptor(t_UnscentedKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_UnscentedKalmanFilter::wrap_Object(UnscentedKalmanFilter(((t_UnscentedKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_UnscentedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnscentedKalmanFilter_of_(t_UnscentedKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_UnscentedKalmanFilter_init_(t_UnscentedKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            ::org::hipparchus::util::UnscentedTransformProvider a3((jobject) NULL);
            UnscentedKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKkk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::unscented::t_UnscentedProcess::parameters_, &a2, &a3))
            {
              INT_CALL(object = UnscentedKalmanFilter(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_UnscentedKalmanFilter_estimationStep(t_UnscentedKalmanFilter *self, PyObject *arg)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
            return NULL;
          }

          static PyObject *t_UnscentedKalmanFilter_getCorrected(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCorrected());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_getPredicted(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
            OBJ_CALL(result = self->object.getPredicted());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_getUnscentedTransformProvider(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::util::UnscentedTransformProvider result((jobject) NULL);
            OBJ_CALL(result = self->object.getUnscentedTransformProvider());
            return ::org::hipparchus::util::t_UnscentedTransformProvider::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_predictionAndCorrectionSteps(t_UnscentedKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k[k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.predictionAndCorrectionSteps(a0, a1));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "predictionAndCorrectionSteps", args);
            return NULL;
          }
          static PyObject *t_UnscentedKalmanFilter_get__parameters_(t_UnscentedKalmanFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_UnscentedKalmanFilter_get__corrected(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCorrected());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
          }

          static PyObject *t_UnscentedKalmanFilter_get__predicted(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
            OBJ_CALL(value = self->object.getPredicted());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
          }

          static PyObject *t_UnscentedKalmanFilter_get__unscentedTransformProvider(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::util::UnscentedTransformProvider value((jobject) NULL);
            OBJ_CALL(value = self->object.getUnscentedTransformProvider());
            return ::org::hipparchus::util::t_UnscentedTransformProvider::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathIllegalStateException::class$ = NULL;
      jmethodID *MathIllegalStateException::mids$ = NULL;
      bool MathIllegalStateException::live$ = false;

      jclass MathIllegalStateException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathIllegalStateException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_ca997976b075d32c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathIllegalStateException::MathIllegalStateException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

      MathIllegalStateException::MathIllegalStateException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ca997976b075d32c, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathIllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathIllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathIllegalStateException_init_(t_MathIllegalStateException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MathIllegalStateException__methods_[] = {
        DECLARE_METHOD(t_MathIllegalStateException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathIllegalStateException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathIllegalStateException)[] = {
        { Py_tp_methods, t_MathIllegalStateException__methods_ },
        { Py_tp_init, (void *) t_MathIllegalStateException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathIllegalStateException)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
        NULL
      };

      DEFINE_TYPE(MathIllegalStateException, t_MathIllegalStateException, MathIllegalStateException);

      void t_MathIllegalStateException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathIllegalStateException), &PY_TYPE_DEF(MathIllegalStateException), module, "MathIllegalStateException", 0);
      }

      void t_MathIllegalStateException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "class_", make_descriptor(MathIllegalStateException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "wrapfn_", make_descriptor(t_MathIllegalStateException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathIllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathIllegalStateException::initializeClass, 1)))
          return NULL;
        return t_MathIllegalStateException::wrap_Object(MathIllegalStateException(((t_MathIllegalStateException *) arg)->object.this$));
      }
      static PyObject *t_MathIllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathIllegalStateException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathIllegalStateException_init_(t_MathIllegalStateException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathIllegalStateException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathIllegalStateException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            MathIllegalStateException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathIllegalStateException(a0, a1, a2));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldEnablingPredicate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldEnablingPredicate::class$ = NULL;
        jmethodID *PythonFieldEnablingPredicate::mids$ = NULL;
        bool PythonFieldEnablingPredicate::live$ = false;

        jclass PythonFieldEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_eventIsEnabled_59813d9212bb9b66] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldEnablingPredicate::PythonFieldEnablingPredicate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonFieldEnablingPredicate::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldEnablingPredicate::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldEnablingPredicate::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonFieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEnablingPredicate_of_(t_PythonFieldEnablingPredicate *self, PyObject *args);
        static int t_PythonFieldEnablingPredicate_init_(t_PythonFieldEnablingPredicate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldEnablingPredicate_finalize(t_PythonFieldEnablingPredicate *self);
        static PyObject *t_PythonFieldEnablingPredicate_pythonExtension(t_PythonFieldEnablingPredicate *self, PyObject *args);
        static jboolean JNICALL t_PythonFieldEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldEnablingPredicate_get__self(t_PythonFieldEnablingPredicate *self, void *data);
        static PyObject *t_PythonFieldEnablingPredicate_get__parameters_(t_PythonFieldEnablingPredicate *self, void *data);
        static PyGetSetDef t_PythonFieldEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldEnablingPredicate, self),
          DECLARE_GET_FIELD(t_PythonFieldEnablingPredicate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldEnablingPredicate)[] = {
          { Py_tp_methods, t_PythonFieldEnablingPredicate__methods_ },
          { Py_tp_init, (void *) t_PythonFieldEnablingPredicate_init_ },
          { Py_tp_getset, t_PythonFieldEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldEnablingPredicate, t_PythonFieldEnablingPredicate, PythonFieldEnablingPredicate);
        PyObject *t_PythonFieldEnablingPredicate::wrap_Object(const PythonFieldEnablingPredicate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEnablingPredicate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEnablingPredicate *self = (t_PythonFieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldEnablingPredicate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEnablingPredicate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEnablingPredicate *self = (t_PythonFieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldEnablingPredicate), &PY_TYPE_DEF(PythonFieldEnablingPredicate), module, "PythonFieldEnablingPredicate", 1);
        }

        void t_PythonFieldEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "class_", make_descriptor(PythonFieldEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "wrapfn_", make_descriptor(t_PythonFieldEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldEnablingPredicate::initializeClass);
          JNINativeMethod methods[] = {
            { "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z", (void *) t_PythonFieldEnablingPredicate_eventIsEnabled0 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldEnablingPredicate_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonFieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_PythonFieldEnablingPredicate::wrap_Object(PythonFieldEnablingPredicate(((t_PythonFieldEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldEnablingPredicate_of_(t_PythonFieldEnablingPredicate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldEnablingPredicate_init_(t_PythonFieldEnablingPredicate *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldEnablingPredicate object((jobject) NULL);

          INT_CALL(object = PythonFieldEnablingPredicate());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldEnablingPredicate_finalize(t_PythonFieldEnablingPredicate *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldEnablingPredicate_pythonExtension(t_PythonFieldEnablingPredicate *self, PyObject *args)
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

        static jboolean JNICALL t_PythonFieldEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a1));
          PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
          PyObject *result = PyObject_CallMethod(obj, "eventIsEnabled", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("eventIsEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonFieldEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldEnablingPredicate_get__self(t_PythonFieldEnablingPredicate *self, void *data)
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
        static PyObject *t_PythonFieldEnablingPredicate_get__parameters_(t_PythonFieldEnablingPredicate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmParser::class$ = NULL;
            jmethodID *AdmParser::mids$ = NULL;
            bool AdmParser::live$ = false;

            jclass AdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMissionReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::time::AbsoluteDate AdmParser::getMissionReferenceDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_aaa854c403487cf3]));
            }

            ::java::util::Map AdmParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54]));
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
            static PyObject *t_AdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmParser_of_(t_AdmParser *self, PyObject *args);
            static PyObject *t_AdmParser_getMissionReferenceDate(t_AdmParser *self);
            static PyObject *t_AdmParser_getSpecialXmlElementsBuilders(t_AdmParser *self, PyObject *args);
            static PyObject *t_AdmParser_get__missionReferenceDate(t_AdmParser *self, void *data);
            static PyObject *t_AdmParser_get__specialXmlElementsBuilders(t_AdmParser *self, void *data);
            static PyObject *t_AdmParser_get__parameters_(t_AdmParser *self, void *data);
            static PyGetSetDef t_AdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_AdmParser, missionReferenceDate),
              DECLARE_GET_FIELD(t_AdmParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_AdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmParser__methods_[] = {
              DECLARE_METHOD(t_AdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmParser, getMissionReferenceDate, METH_NOARGS),
              DECLARE_METHOD(t_AdmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmParser)[] = {
              { Py_tp_methods, t_AdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(AdmParser, t_AdmParser, AdmParser);
            PyObject *t_AdmParser::wrap_Object(const AdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmParser *self = (t_AdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_AdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmParser *self = (t_AdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_AdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmParser), &PY_TYPE_DEF(AdmParser), module, "AdmParser", 0);
            }

            void t_AdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "class_", make_descriptor(AdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "wrapfn_", make_descriptor(t_AdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmParser::initializeClass, 1)))
                return NULL;
              return t_AdmParser::wrap_Object(AdmParser(((t_AdmParser *) arg)->object.this$));
            }
            static PyObject *t_AdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmParser_of_(t_AdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmParser_getMissionReferenceDate(t_AdmParser *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AdmParser_getSpecialXmlElementsBuilders(t_AdmParser *self, PyObject *args)
            {
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
              }

              return callSuper(PY_TYPE(AdmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
            }
            static PyObject *t_AdmParser_get__parameters_(t_AdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AdmParser_get__missionReferenceDate(t_AdmParser *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AdmParser_get__specialXmlElementsBuilders(t_AdmParser *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeTroposphericDelayModifier::mids$ = NULL;
          bool BistaticRangeTroposphericDelayModifier::live$ = false;

          jclass BistaticRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8171254277c9834a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeTroposphericDelayModifier::BistaticRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_8171254277c9834a, a0.this$)) {}

          void BistaticRangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void BistaticRangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
        namespace modifiers {
          static PyObject *t_BistaticRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeTroposphericDelayModifier_init_(t_BistaticRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_modify(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeTroposphericDelayModifier, t_BistaticRangeTroposphericDelayModifier, BistaticRangeTroposphericDelayModifier);

          void t_BistaticRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeTroposphericDelayModifier), &PY_TYPE_DEF(BistaticRangeTroposphericDelayModifier), module, "BistaticRangeTroposphericDelayModifier", 0);
          }

          void t_BistaticRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "class_", make_descriptor(BistaticRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeTroposphericDelayModifier::wrap_Object(BistaticRangeTroposphericDelayModifier(((t_BistaticRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeTroposphericDelayModifier_init_(t_BistaticRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            BistaticRangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = BistaticRangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_modify(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/utils/ElevationMask.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ElevationDetector::class$ = NULL;
        jmethodID *ElevationDetector::mids$ = NULL;
        bool ElevationDetector::live$ = false;

        jclass ElevationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ElevationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f9eb40be2920d1a6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_b7c2f9e5ae29d132] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getElevationMask_5d6f826de9792bc8] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
            mids$[mid_getMinElevation_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getRefractionModel_92dfb2e76d975897] = env->getMethodID(cls, "getRefractionModel", "()Lorg/orekit/models/AtmosphericRefractionModel;");
            mids$[mid_getTopocentricFrame_52fc31c455206160] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_withConstantElevation_baeecf6061525086] = env->getMethodID(cls, "withConstantElevation", "(D)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_withElevationMask_78eba44b1cd20eb1] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_withRefraction_422b0661514e96e6] = env->getMethodID(cls, "withRefraction", "(Lorg/orekit/models/AtmosphericRefractionModel;)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_create_47415e8062f7f200] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ElevationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ElevationDetector::ElevationDetector(const ::org::orekit::frames::TopocentricFrame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f9eb40be2920d1a6, a0.this$)) {}

        ElevationDetector::ElevationDetector(jdouble a0, jdouble a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b7c2f9e5ae29d132, a0, a1, a2.this$)) {}

        jdouble ElevationDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::utils::ElevationMask ElevationDetector::getElevationMask() const
        {
          return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_5d6f826de9792bc8]));
        }

        jdouble ElevationDetector::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_456d9a2f64d6b28d]);
        }

        ::org::orekit::models::AtmosphericRefractionModel ElevationDetector::getRefractionModel() const
        {
          return ::org::orekit::models::AtmosphericRefractionModel(env->callObjectMethod(this$, mids$[mid_getRefractionModel_92dfb2e76d975897]));
        }

        ::org::orekit::frames::TopocentricFrame ElevationDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_52fc31c455206160]));
        }

        ElevationDetector ElevationDetector::withConstantElevation(jdouble a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withConstantElevation_baeecf6061525086], a0));
        }

        ElevationDetector ElevationDetector::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withElevationMask_78eba44b1cd20eb1], a0.this$));
        }

        ElevationDetector ElevationDetector::withRefraction(const ::org::orekit::models::AtmosphericRefractionModel & a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withRefraction_422b0661514e96e6], a0.this$));
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
        static PyObject *t_ElevationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationDetector_of_(t_ElevationDetector *self, PyObject *args);
        static int t_ElevationDetector_init_(t_ElevationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ElevationDetector_g(t_ElevationDetector *self, PyObject *args);
        static PyObject *t_ElevationDetector_getElevationMask(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getMinElevation(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getRefractionModel(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getTopocentricFrame(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_withConstantElevation(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_withElevationMask(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_withRefraction(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_get__elevationMask(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__minElevation(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__refractionModel(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__topocentricFrame(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__parameters_(t_ElevationDetector *self, void *data);
        static PyGetSetDef t_ElevationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ElevationDetector, elevationMask),
          DECLARE_GET_FIELD(t_ElevationDetector, minElevation),
          DECLARE_GET_FIELD(t_ElevationDetector, refractionModel),
          DECLARE_GET_FIELD(t_ElevationDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_ElevationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ElevationDetector__methods_[] = {
          DECLARE_METHOD(t_ElevationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ElevationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ElevationDetector, getElevationMask, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getRefractionModel, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getTopocentricFrame, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, withConstantElevation, METH_O),
          DECLARE_METHOD(t_ElevationDetector, withElevationMask, METH_O),
          DECLARE_METHOD(t_ElevationDetector, withRefraction, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ElevationDetector)[] = {
          { Py_tp_methods, t_ElevationDetector__methods_ },
          { Py_tp_init, (void *) t_ElevationDetector_init_ },
          { Py_tp_getset, t_ElevationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ElevationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ElevationDetector, t_ElevationDetector, ElevationDetector);
        PyObject *t_ElevationDetector::wrap_Object(const ElevationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationDetector *self = (t_ElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ElevationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationDetector *self = (t_ElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ElevationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ElevationDetector), &PY_TYPE_DEF(ElevationDetector), module, "ElevationDetector", 0);
        }

        void t_ElevationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "class_", make_descriptor(ElevationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "wrapfn_", make_descriptor(t_ElevationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ElevationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ElevationDetector::initializeClass, 1)))
            return NULL;
          return t_ElevationDetector::wrap_Object(ElevationDetector(((t_ElevationDetector *) arg)->object.this$));
        }
        static PyObject *t_ElevationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ElevationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ElevationDetector_of_(t_ElevationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ElevationDetector_init_(t_ElevationDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = ElevationDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              ElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ElevationDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationDetector);
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

        static PyObject *t_ElevationDetector_g(t_ElevationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ElevationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ElevationDetector_getElevationMask(t_ElevationDetector *self)
        {
          ::org::orekit::utils::ElevationMask result((jobject) NULL);
          OBJ_CALL(result = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_getMinElevation(t_ElevationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ElevationDetector_getRefractionModel(t_ElevationDetector *self)
        {
          ::org::orekit::models::AtmosphericRefractionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_getTopocentricFrame(t_ElevationDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_withConstantElevation(t_ElevationDetector *self, PyObject *arg)
        {
          jdouble a0;
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withConstantElevation(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_ElevationDetector_withElevationMask(t_ElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::utils::ElevationMask a0((jobject) NULL);
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withElevationMask(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
          return NULL;
        }

        static PyObject *t_ElevationDetector_withRefraction(t_ElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withRefraction(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withRefraction", arg);
          return NULL;
        }
        static PyObject *t_ElevationDetector_get__parameters_(t_ElevationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ElevationDetector_get__elevationMask(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::utils::ElevationMask value((jobject) NULL);
          OBJ_CALL(value = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
        }

        static PyObject *t_ElevationDetector_get__minElevation(t_ElevationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ElevationDetector_get__refractionModel(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::models::AtmosphericRefractionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(value);
        }

        static PyObject *t_ElevationDetector_get__topocentricFrame(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/PythonEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *PythonEventHandler::class$ = NULL;
          jmethodID *PythonEventHandler::mids$ = NULL;
          bool PythonEventHandler::live$ = false;

          jclass PythonEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/PythonEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_66531e3c1769dca9] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_init_9678bba57553faaf] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_7c4cfc7ac2bc3a77] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonEventHandler::PythonEventHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonEventHandler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonEventHandler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonEventHandler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace events {
        namespace handlers {
          static PyObject *t_PythonEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonEventHandler_init_(t_PythonEventHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonEventHandler_finalize(t_PythonEventHandler *self);
          static PyObject *t_PythonEventHandler_pythonExtension(t_PythonEventHandler *self, PyObject *args);
          static jobject JNICALL t_PythonEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
          static void JNICALL t_PythonEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static PyObject *t_PythonEventHandler_get__self(t_PythonEventHandler *self, void *data);
          static PyGetSetDef t_PythonEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonEventHandler, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonEventHandler__methods_[] = {
            DECLARE_METHOD(t_PythonEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEventHandler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonEventHandler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonEventHandler)[] = {
            { Py_tp_methods, t_PythonEventHandler__methods_ },
            { Py_tp_init, (void *) t_PythonEventHandler_init_ },
            { Py_tp_getset, t_PythonEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonEventHandler, t_PythonEventHandler, PythonEventHandler);

          void t_PythonEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonEventHandler), &PY_TYPE_DEF(PythonEventHandler), module, "PythonEventHandler", 1);
          }

          void t_PythonEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "class_", make_descriptor(PythonEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "wrapfn_", make_descriptor(t_PythonEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonEventHandler::initializeClass);
            JNINativeMethod methods[] = {
              { "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;", (void *) t_PythonEventHandler_eventOccurred0 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonEventHandler_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonEventHandler_pythonDecRef2 },
              { "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonEventHandler_resetState3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonEventHandler::initializeClass, 1)))
              return NULL;
            return t_PythonEventHandler::wrap_Object(PythonEventHandler(((t_PythonEventHandler *) arg)->object.this$));
          }
          static PyObject *t_PythonEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonEventHandler_init_(t_PythonEventHandler *self, PyObject *args, PyObject *kwds)
          {
            PythonEventHandler object((jobject) NULL);

            INT_CALL(object = PythonEventHandler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonEventHandler_finalize(t_PythonEventHandler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonEventHandler_pythonExtension(t_PythonEventHandler *self, PyObject *args)
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

          static jobject JNICALL t_PythonEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::ode::events::Action value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a1));
            PyObject *o2 = (a2 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "eventOccurred", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::ode::events::Action::initializeClass, &value))
            {
              throwTypeError("eventOccurred", result);
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

          static void JNICALL t_PythonEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a2));
            PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonEventHandler_get__self(t_PythonEventHandler *self, void *data)
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
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *BlockRealMatrix::class$ = NULL;
      jmethodID *BlockRealMatrix::mids$ = NULL;
      bool BlockRealMatrix::live$ = false;
      jint BlockRealMatrix::BLOCK_SIZE = (jint) 0;

      jclass BlockRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/BlockRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d660c7a97bf55272] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_f37406172ab47ee6] = env->getMethodID(cls, "<init>", "(II[[DZ)V");
          mids$[mid_add_4d88a8ee7d6c18d7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_add_9f6b7013a1e49943] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_addToEntry_78e41e7b5124a628] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_2a96413687ce30f0] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_createBlocksLayout_f76bfea7a1ff2879] = env->getStaticMethodID(cls, "createBlocksLayout", "(II)[[D");
          mids$[mid_createMatrix_5643c126a567b8a1] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getColumn_eb9cceadce1b2217] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_c30a5588ba5709fd] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getColumnVector_2cafd1b18558ed5f] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_43de1192439efa92] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getNorm1_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInfty_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormInfty", "()D");
          mids$[mid_getRow_eb9cceadce1b2217] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_c30a5588ba5709fd] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getRowVector_2cafd1b18558ed5f] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_86da1f7d771af139] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiply_4d88a8ee7d6c18d7] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiply_9f6b7013a1e49943] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiplyEntry_78e41e7b5124a628] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_4d88a8ee7d6c18d7] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiplyTransposed_9f6b7013a1e49943] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_operate_4b742fe429c22ba8] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_4b742fe429c22ba8] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_scalarAdd_d3c12eeb1c6d7cbc] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_scalarMultiply_2461b653ab91779b] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_7d4f41c65056f174] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_8f1af6d535d298ec] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_dcd0f7fda5e9451c] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_78e41e7b5124a628] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_7d4f41c65056f174] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_3b2ad4b0f36c391d] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/BlockRealMatrix;)V");
          mids$[mid_setRowMatrix_8f1af6d535d298ec] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_dcd0f7fda5e9451c] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_a741cdd381e94792] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_4d88a8ee7d6c18d7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_subtract_9f6b7013a1e49943] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_toBlocksLayout_557d9547e284535f] = env->getStaticMethodID(cls, "toBlocksLayout", "([[D)[[D");
          mids$[mid_transpose_2a96413687ce30f0] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_transposeMultiply_4d88a8ee7d6c18d7] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_transposeMultiply_9f6b7013a1e49943] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_walkInOptimizedOrder_340ddcf983c0c22e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_354ebbe7c685c961] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_56223f2e9b79c5ad] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_62551289056beecd] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_340ddcf983c0c22e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_354ebbe7c685c961] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_56223f2e9b79c5ad] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_62551289056beecd] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BLOCK_SIZE = env->getStaticIntField(cls, "BLOCK_SIZE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BlockRealMatrix::BlockRealMatrix(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_d660c7a97bf55272, a0.this$)) {}

      BlockRealMatrix::BlockRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

      BlockRealMatrix::BlockRealMatrix(jint a0, jint a1, const JArray< JArray< jdouble > > & a2, jboolean a3) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_f37406172ab47ee6, a0, a1, a2.this$, a3)) {}

      BlockRealMatrix BlockRealMatrix::add(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_add_4d88a8ee7d6c18d7], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::add(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_add_9f6b7013a1e49943], a0.this$));
      }

      void BlockRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_78e41e7b5124a628], a0, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::copy() const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_copy_2a96413687ce30f0]));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::createBlocksLayout(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_createBlocksLayout_f76bfea7a1ff2879], a0, a1));
      }

      BlockRealMatrix BlockRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_5643c126a567b8a1], a0, a1));
      }

      JArray< jdouble > BlockRealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_eb9cceadce1b2217], a0));
      }

      jint BlockRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      BlockRealMatrix BlockRealMatrix::getColumnMatrix(jint a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_c30a5588ba5709fd], a0));
      }

      ::org::hipparchus::linear::RealVector BlockRealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_2cafd1b18558ed5f], a0));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_43de1192439efa92]));
      }

      jdouble BlockRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_a84e4ee1da3f1ab8], a0, a1);
      }

      jdouble BlockRealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_456d9a2f64d6b28d]);
      }

      jdouble BlockRealMatrix::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_456d9a2f64d6b28d]);
      }

      jdouble BlockRealMatrix::getNormInfty() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInfty_456d9a2f64d6b28d]);
      }

      JArray< jdouble > BlockRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_eb9cceadce1b2217], a0));
      }

      jint BlockRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      BlockRealMatrix BlockRealMatrix::getRowMatrix(jint a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_c30a5588ba5709fd], a0));
      }

      ::org::hipparchus::linear::RealVector BlockRealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_2cafd1b18558ed5f], a0));
      }

      BlockRealMatrix BlockRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_86da1f7d771af139], a0, a1, a2, a3));
      }

      BlockRealMatrix BlockRealMatrix::multiply(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_4d88a8ee7d6c18d7], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_9f6b7013a1e49943], a0.this$));
      }

      void BlockRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_78e41e7b5124a628], a0, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::multiplyTransposed(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_4d88a8ee7d6c18d7], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_9f6b7013a1e49943], a0.this$));
      }

      JArray< jdouble > BlockRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_4b742fe429c22ba8], a0.this$));
      }

      JArray< jdouble > BlockRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_4b742fe429c22ba8], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::scalarAdd(jdouble a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_d3c12eeb1c6d7cbc], a0));
      }

      ::org::hipparchus::linear::RealMatrix BlockRealMatrix::scalarMultiply(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_2461b653ab91779b], a0));
      }

      void BlockRealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_7d4f41c65056f174], a0, a1.this$);
      }

      void BlockRealMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_8f1af6d535d298ec], a0, a1.this$);
      }

      void BlockRealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_dcd0f7fda5e9451c], a0, a1.this$);
      }

      void BlockRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_78e41e7b5124a628], a0, a1, a2);
      }

      void BlockRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_7d4f41c65056f174], a0, a1.this$);
      }

      void BlockRealMatrix::setRowMatrix(jint a0, const BlockRealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_3b2ad4b0f36c391d], a0, a1.this$);
      }

      void BlockRealMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_8f1af6d535d298ec], a0, a1.this$);
      }

      void BlockRealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_dcd0f7fda5e9451c], a0, a1.this$);
      }

      void BlockRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_a741cdd381e94792], a0.this$, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::subtract(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_4d88a8ee7d6c18d7], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_9f6b7013a1e49943], a0.this$));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::toBlocksLayout(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_toBlocksLayout_557d9547e284535f], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::transpose() const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_2a96413687ce30f0]));
      }

      BlockRealMatrix BlockRealMatrix::transposeMultiply(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_4d88a8ee7d6c18d7], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_9f6b7013a1e49943], a0.this$));
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_340ddcf983c0c22e], a0.this$);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_354ebbe7c685c961], a0.this$);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_56223f2e9b79c5ad], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_62551289056beecd], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_340ddcf983c0c22e], a0.this$);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_354ebbe7c685c961], a0.this$);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_56223f2e9b79c5ad], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_62551289056beecd], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_BlockRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BlockRealMatrix_init_(t_BlockRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BlockRealMatrix_add(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_addToEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_copy(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args);
      static PyObject *t_BlockRealMatrix_createMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumn(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnDimension(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getData(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getFrobeniusNorm(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getNorm1(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getNormInfty(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRow(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowDimension(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getSubMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiplyEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiplyTransposed(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_operate(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_preMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_scalarAdd(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_scalarMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumn(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumnMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumnVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRow(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRowMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRowVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setSubMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_subtract(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockRealMatrix_transpose(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_transposeMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_walkInOptimizedOrder(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_walkInRowOrder(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_get__columnDimension(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__data(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__frobeniusNorm(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__norm1(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__normInfty(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__rowDimension(t_BlockRealMatrix *self, void *data);
      static PyGetSetDef t_BlockRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_BlockRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_BlockRealMatrix, data),
        DECLARE_GET_FIELD(t_BlockRealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_BlockRealMatrix, norm1),
        DECLARE_GET_FIELD(t_BlockRealMatrix, normInfty),
        DECLARE_GET_FIELD(t_BlockRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BlockRealMatrix__methods_[] = {
        DECLARE_METHOD(t_BlockRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, createBlocksLayout, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getFrobeniusNorm, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getNorm1, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getNormInfty, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, scalarAdd, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, scalarMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, toBlocksLayout, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, transpose, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BlockRealMatrix)[] = {
        { Py_tp_methods, t_BlockRealMatrix__methods_ },
        { Py_tp_init, (void *) t_BlockRealMatrix_init_ },
        { Py_tp_getset, t_BlockRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BlockRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(BlockRealMatrix, t_BlockRealMatrix, BlockRealMatrix);

      void t_BlockRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(BlockRealMatrix), &PY_TYPE_DEF(BlockRealMatrix), module, "BlockRealMatrix", 0);
      }

      void t_BlockRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "class_", make_descriptor(BlockRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "wrapfn_", make_descriptor(t_BlockRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "boxfn_", make_descriptor(boxObject));
        env->getClass(BlockRealMatrix::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "BLOCK_SIZE", make_descriptor(BlockRealMatrix::BLOCK_SIZE));
      }

      static PyObject *t_BlockRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BlockRealMatrix::initializeClass, 1)))
          return NULL;
        return t_BlockRealMatrix::wrap_Object(BlockRealMatrix(((t_BlockRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_BlockRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BlockRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BlockRealMatrix_init_(t_BlockRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              INT_CALL(object = BlockRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jint a1;
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = BlockRealMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            JArray< JArray< jdouble > > a2((jobject) NULL);
            jboolean a3;
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II[[DZ", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = BlockRealMatrix(a0, a1, a2, a3));
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

      static PyObject *t_BlockRealMatrix_add(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_BlockRealMatrix_addToEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_copy(t_BlockRealMatrix *self, PyObject *args)
      {
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_BlockRealMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockRealMatrix::createBlocksLayout(a0, a1));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "createBlocksLayout", args);
        return NULL;
      }

      static PyObject *t_BlockRealMatrix_createMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumn(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumn", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnDimension(t_BlockRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getData(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getFrobeniusNorm(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getFrobeniusNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getFrobeniusNorm", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getNorm1(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNorm1());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getNorm1", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getNormInfty(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNormInfty());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getNormInfty", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRow(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowDimension(t_BlockRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getSubMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiply(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiplyEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiplyTransposed(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_BlockRealMatrix_operate(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_BlockRealMatrix_preMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_scalarAdd(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "scalarAdd", args, 2);
      }

      static PyObject *t_BlockRealMatrix_scalarMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "scalarMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumn(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumn", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumnMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumnMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumnVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumnVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRow(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRowMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            BlockRealMatrix a1((jobject) NULL);

            if (!parseArgs(args, "Ik", BlockRealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRowMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRowVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRowVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setSubMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_subtract(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_BlockRealMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockRealMatrix::toBlocksLayout(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "toBlocksLayout", arg);
        return NULL;
      }

      static PyObject *t_BlockRealMatrix_transpose(t_BlockRealMatrix *self, PyObject *args)
      {
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.transpose());
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "transpose", args, 2);
      }

      static PyObject *t_BlockRealMatrix_transposeMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_walkInOptimizedOrder(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_BlockRealMatrix_walkInRowOrder(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }

      static PyObject *t_BlockRealMatrix_get__columnDimension(t_BlockRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BlockRealMatrix_get__data(t_BlockRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_BlockRealMatrix_get__frobeniusNorm(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__norm1(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__normInfty(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInfty());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__rowDimension(t_BlockRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$BooleanConsumer::class$ = NULL;
            jmethodID *ParseToken$BooleanConsumer::mids$ = NULL;
            bool ParseToken$BooleanConsumer::live$ = false;

            jclass ParseToken$BooleanConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_50a2e0b139e80a58] = env->getMethodID(cls, "accept", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$BooleanConsumer::accept(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_50a2e0b139e80a58], a0);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$BooleanConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$BooleanConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$BooleanConsumer_accept(t_ParseToken$BooleanConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$BooleanConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$BooleanConsumer)[] = {
              { Py_tp_methods, t_ParseToken$BooleanConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$BooleanConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$BooleanConsumer, t_ParseToken$BooleanConsumer, ParseToken$BooleanConsumer);

            void t_ParseToken$BooleanConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$BooleanConsumer), &PY_TYPE_DEF(ParseToken$BooleanConsumer), module, "ParseToken$BooleanConsumer", 0);
            }

            void t_ParseToken$BooleanConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "class_", make_descriptor(ParseToken$BooleanConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "wrapfn_", make_descriptor(t_ParseToken$BooleanConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$BooleanConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$BooleanConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$BooleanConsumer::wrap_Object(ParseToken$BooleanConsumer(((t_ParseToken$BooleanConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$BooleanConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$BooleanConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$BooleanConsumer_accept(t_ParseToken$BooleanConsumer *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialSplineFunction::class$ = NULL;
        jmethodID *PolynomialSplineFunction::mids$ = NULL;
        bool PolynomialSplineFunction::live$ = false;

        jclass PolynomialSplineFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialSplineFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_93b81a7dc415befa] = env->getMethodID(cls, "<init>", "([D[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
            mids$[mid_getKnots_7cdc325af0834901] = env->getMethodID(cls, "getKnots", "()[D");
            mids$[mid_getN_f2f64475e4580546] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_getPolynomials_4abf9ec9946ee32d] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_isValidPoint_e18fb1101b70dcca] = env->getMethodID(cls, "isValidPoint", "(D)Z");
            mids$[mid_polynomialSplineDerivative_0ca61ecfbea37c0e] = env->getMethodID(cls, "polynomialSplineDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialSplineFunction::PolynomialSplineFunction(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_93b81a7dc415befa, a0.this$, a1.this$)) {}

        JArray< jdouble > PolynomialSplineFunction::getKnots() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKnots_7cdc325af0834901]));
        }

        jint PolynomialSplineFunction::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_f2f64475e4580546]);
        }

        JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > PolynomialSplineFunction::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_4abf9ec9946ee32d]));
        }

        jboolean PolynomialSplineFunction::isValidPoint(jdouble a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_e18fb1101b70dcca], a0);
        }

        PolynomialSplineFunction PolynomialSplineFunction::polynomialSplineDerivative() const
        {
          return PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_polynomialSplineDerivative_0ca61ecfbea37c0e]));
        }

        jdouble PolynomialSplineFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialSplineFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d3398190482814dc], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialSplineFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
      namespace polynomials {
        static PyObject *t_PolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialSplineFunction_init_(t_PolynomialSplineFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialSplineFunction_getKnots(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_getN(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_getPolynomials(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_isValidPoint(t_PolynomialSplineFunction *self, PyObject *arg);
        static PyObject *t_PolynomialSplineFunction_polynomialSplineDerivative(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_value(t_PolynomialSplineFunction *self, PyObject *args);
        static PyObject *t_PolynomialSplineFunction_get__knots(t_PolynomialSplineFunction *self, void *data);
        static PyObject *t_PolynomialSplineFunction_get__n(t_PolynomialSplineFunction *self, void *data);
        static PyObject *t_PolynomialSplineFunction_get__polynomials(t_PolynomialSplineFunction *self, void *data);
        static PyGetSetDef t_PolynomialSplineFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, knots),
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, n),
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, polynomials),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialSplineFunction__methods_[] = {
          DECLARE_METHOD(t_PolynomialSplineFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSplineFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getKnots, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getN, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, isValidPoint, METH_O),
          DECLARE_METHOD(t_PolynomialSplineFunction, polynomialSplineDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialSplineFunction)[] = {
          { Py_tp_methods, t_PolynomialSplineFunction__methods_ },
          { Py_tp_init, (void *) t_PolynomialSplineFunction_init_ },
          { Py_tp_getset, t_PolynomialSplineFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialSplineFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialSplineFunction, t_PolynomialSplineFunction, PolynomialSplineFunction);

        void t_PolynomialSplineFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialSplineFunction), &PY_TYPE_DEF(PolynomialSplineFunction), module, "PolynomialSplineFunction", 0);
        }

        void t_PolynomialSplineFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "class_", make_descriptor(PolynomialSplineFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "wrapfn_", make_descriptor(t_PolynomialSplineFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialSplineFunction::initializeClass, 1)))
            return NULL;
          return t_PolynomialSplineFunction::wrap_Object(PolynomialSplineFunction(((t_PolynomialSplineFunction *) arg)->object.this$));
        }
        static PyObject *t_PolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialSplineFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialSplineFunction_init_(t_PolynomialSplineFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > a1((jobject) NULL);
          PolynomialSplineFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PolynomialSplineFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialSplineFunction_getKnots(t_PolynomialSplineFunction *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getKnots());
          return result.wrap();
        }

        static PyObject *t_PolynomialSplineFunction_getN(t_PolynomialSplineFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialSplineFunction_getPolynomials(t_PolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }

        static PyObject *t_PolynomialSplineFunction_isValidPoint(t_PolynomialSplineFunction *self, PyObject *arg)
        {
          jdouble a0;
          jboolean result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", arg);
          return NULL;
        }

        static PyObject *t_PolynomialSplineFunction_polynomialSplineDerivative(t_PolynomialSplineFunction *self)
        {
          PolynomialSplineFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialSplineDerivative());
          return t_PolynomialSplineFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialSplineFunction_value(t_PolynomialSplineFunction *self, PyObject *args)
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
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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

        static PyObject *t_PolynomialSplineFunction_get__knots(t_PolynomialSplineFunction *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getKnots());
          return value.wrap();
        }

        static PyObject *t_PolynomialSplineFunction_get__n(t_PolynomialSplineFunction *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PolynomialSplineFunction_get__polynomials(t_PolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *StreamingOemWriter::class$ = NULL;
              jmethodID *StreamingOemWriter::mids$ = NULL;
              bool StreamingOemWriter::live$ = false;

              jclass StreamingOemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_47c174dd8d9f95f0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;)V");
                  mids$[mid_init$_63d8fb2e0bb79b77] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Z)V");
                  mids$[mid_init$_2a245e70e6caa480] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;ZZ)V");
                  mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newSegment_94898e50afe4b3bb] = env->getMethodID(cls, "newSegment", "()Lorg/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_47c174dd8d9f95f0, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_63d8fb2e0bb79b77, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3, jboolean a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a245e70e6caa480, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5)) {}

              void StreamingOemWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter StreamingOemWriter::newSegment() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter(env->callObjectMethod(this$, mids$[mid_newSegment_94898e50afe4b3bb]));
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
            namespace oem {
              static PyObject *t_StreamingOemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOemWriter_init_(t_StreamingOemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOemWriter_close(t_StreamingOemWriter *self);
              static PyObject *t_StreamingOemWriter_newSegment(t_StreamingOemWriter *self);

              static PyMethodDef t_StreamingOemWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingOemWriter, newSegment, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOemWriter)[] = {
                { Py_tp_methods, t_StreamingOemWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOemWriter, t_StreamingOemWriter, StreamingOemWriter);

              void t_StreamingOemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOemWriter), &PY_TYPE_DEF(StreamingOemWriter), module, "StreamingOemWriter", 0);
              }

              void t_StreamingOemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "class_", make_descriptor(StreamingOemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "wrapfn_", make_descriptor(t_StreamingOemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOemWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOemWriter::wrap_Object(StreamingOemWriter(((t_StreamingOemWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOemWriter_init_(t_StreamingOemWriter *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 4:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 5:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    jboolean a4;
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3, &a4))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    jboolean a4;
                    jboolean a5;
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkZZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3, a4, a5));
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

              static PyObject *t_StreamingOemWriter_close(t_StreamingOemWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingOemWriter_newSegment(t_StreamingOemWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newSegment());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_StreamingOemWriter$SegmentWriter::wrap_Object(result);
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
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ElevationMask.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldElevationDetector::class$ = NULL;
        jmethodID *FieldElevationDetector::mids$ = NULL;
        bool FieldElevationDetector::live$ = false;

        jclass FieldElevationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldElevationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6ca81eaf03a89fb6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_3630f374a349bed6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getElevationMask_5d6f826de9792bc8] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
            mids$[mid_getMinElevation_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getRefractionModel_92dfb2e76d975897] = env->getMethodID(cls, "getRefractionModel", "()Lorg/orekit/models/AtmosphericRefractionModel;");
            mids$[mid_getTopocentricFrame_52fc31c455206160] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_withConstantElevation_4f3bd3b357cdeb54] = env->getMethodID(cls, "withConstantElevation", "(D)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_withElevationMask_576450d53fa897db] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_withRefraction_bad8e6d8da75ecea] = env->getMethodID(cls, "withRefraction", "(Lorg/orekit/models/AtmosphericRefractionModel;)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_create_b73e50e886d5c36f] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldElevationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldElevationDetector::FieldElevationDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::TopocentricFrame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6ca81eaf03a89fb6, a0.this$, a1.this$)) {}

        FieldElevationDetector::FieldElevationDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3630f374a349bed6, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldElevationDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::utils::ElevationMask FieldElevationDetector::getElevationMask() const
        {
          return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_5d6f826de9792bc8]));
        }

        jdouble FieldElevationDetector::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_456d9a2f64d6b28d]);
        }

        ::org::orekit::models::AtmosphericRefractionModel FieldElevationDetector::getRefractionModel() const
        {
          return ::org::orekit::models::AtmosphericRefractionModel(env->callObjectMethod(this$, mids$[mid_getRefractionModel_92dfb2e76d975897]));
        }

        ::org::orekit::frames::TopocentricFrame FieldElevationDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_52fc31c455206160]));
        }

        FieldElevationDetector FieldElevationDetector::withConstantElevation(jdouble a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withConstantElevation_4f3bd3b357cdeb54], a0));
        }

        FieldElevationDetector FieldElevationDetector::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withElevationMask_576450d53fa897db], a0.this$));
        }

        FieldElevationDetector FieldElevationDetector::withRefraction(const ::org::orekit::models::AtmosphericRefractionModel & a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withRefraction_bad8e6d8da75ecea], a0.this$));
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
        static PyObject *t_FieldElevationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationDetector_of_(t_FieldElevationDetector *self, PyObject *args);
        static int t_FieldElevationDetector_init_(t_FieldElevationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldElevationDetector_g(t_FieldElevationDetector *self, PyObject *args);
        static PyObject *t_FieldElevationDetector_getElevationMask(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getMinElevation(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getRefractionModel(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getTopocentricFrame(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_withConstantElevation(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_withElevationMask(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_withRefraction(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_get__elevationMask(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__minElevation(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__refractionModel(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__topocentricFrame(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__parameters_(t_FieldElevationDetector *self, void *data);
        static PyGetSetDef t_FieldElevationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldElevationDetector, elevationMask),
          DECLARE_GET_FIELD(t_FieldElevationDetector, minElevation),
          DECLARE_GET_FIELD(t_FieldElevationDetector, refractionModel),
          DECLARE_GET_FIELD(t_FieldElevationDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_FieldElevationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldElevationDetector__methods_[] = {
          DECLARE_METHOD(t_FieldElevationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getElevationMask, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getRefractionModel, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getTopocentricFrame, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, withConstantElevation, METH_O),
          DECLARE_METHOD(t_FieldElevationDetector, withElevationMask, METH_O),
          DECLARE_METHOD(t_FieldElevationDetector, withRefraction, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldElevationDetector)[] = {
          { Py_tp_methods, t_FieldElevationDetector__methods_ },
          { Py_tp_init, (void *) t_FieldElevationDetector_init_ },
          { Py_tp_getset, t_FieldElevationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldElevationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldElevationDetector, t_FieldElevationDetector, FieldElevationDetector);
        PyObject *t_FieldElevationDetector::wrap_Object(const FieldElevationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationDetector *self = (t_FieldElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldElevationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationDetector *self = (t_FieldElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldElevationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldElevationDetector), &PY_TYPE_DEF(FieldElevationDetector), module, "FieldElevationDetector", 0);
        }

        void t_FieldElevationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "class_", make_descriptor(FieldElevationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "wrapfn_", make_descriptor(t_FieldElevationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldElevationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldElevationDetector::initializeClass, 1)))
            return NULL;
          return t_FieldElevationDetector::wrap_Object(FieldElevationDetector(((t_FieldElevationDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldElevationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldElevationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldElevationDetector_of_(t_FieldElevationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldElevationDetector_init_(t_FieldElevationDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
              FieldElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldElevationDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              FieldElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldElevationDetector(a0, a1, a2));
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

        static PyObject *t_FieldElevationDetector_g(t_FieldElevationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldElevationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldElevationDetector_getElevationMask(t_FieldElevationDetector *self)
        {
          ::org::orekit::utils::ElevationMask result((jobject) NULL);
          OBJ_CALL(result = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_getMinElevation(t_FieldElevationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldElevationDetector_getRefractionModel(t_FieldElevationDetector *self)
        {
          ::org::orekit::models::AtmosphericRefractionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_getTopocentricFrame(t_FieldElevationDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_withConstantElevation(t_FieldElevationDetector *self, PyObject *arg)
        {
          jdouble a0;
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withConstantElevation(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationDetector_withElevationMask(t_FieldElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::utils::ElevationMask a0((jobject) NULL);
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withElevationMask(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationDetector_withRefraction(t_FieldElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withRefraction(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withRefraction", arg);
          return NULL;
        }
        static PyObject *t_FieldElevationDetector_get__parameters_(t_FieldElevationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldElevationDetector_get__elevationMask(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::utils::ElevationMask value((jobject) NULL);
          OBJ_CALL(value = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
        }

        static PyObject *t_FieldElevationDetector_get__minElevation(t_FieldElevationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldElevationDetector_get__refractionModel(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::models::AtmosphericRefractionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(value);
        }

        static PyObject *t_FieldElevationDetector_get__topocentricFrame(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/LambdaMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *LambdaMethod::class$ = NULL;
          jmethodID *LambdaMethod::mids$ = NULL;
          bool LambdaMethod::live$ = false;

          jclass LambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/LambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_inverseDecomposition_7ae3461a92a43152] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_reduction_7ae3461a92a43152] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_discreteSearch_7ae3461a92a43152] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_ltdlDecomposition_7ae3461a92a43152] = env->getMethodID(cls, "ltdlDecomposition", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LambdaMethod::LambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
          static PyObject *t_LambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LambdaMethod_init_(t_LambdaMethod *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LambdaMethod__methods_[] = {
            DECLARE_METHOD(t_LambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LambdaMethod, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LambdaMethod)[] = {
            { Py_tp_methods, t_LambdaMethod__methods_ },
            { Py_tp_init, (void *) t_LambdaMethod_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(LambdaMethod, t_LambdaMethod, LambdaMethod);

          void t_LambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(LambdaMethod), &PY_TYPE_DEF(LambdaMethod), module, "LambdaMethod", 0);
          }

          void t_LambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "class_", make_descriptor(LambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "wrapfn_", make_descriptor(t_LambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LambdaMethod::initializeClass, 1)))
              return NULL;
            return t_LambdaMethod::wrap_Object(LambdaMethod(((t_LambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_LambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LambdaMethod_init_(t_LambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            LambdaMethod object((jobject) NULL);

            INT_CALL(object = LambdaMethod());
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
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepHandler::class$ = NULL;
        jmethodID *FieldOrekitStepHandler::mids$ = NULL;
        bool FieldOrekitStepHandler::live$ = false;

        jclass FieldOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_52154b94d63e10ed] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_9eedcf3b856fcc75] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldOrekitStepHandler::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_52154b94d63e10ed], a0.this$);
        }

        void FieldOrekitStepHandler::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_9eedcf3b856fcc75], a0.this$);
        }

        void FieldOrekitStepHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
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
        static PyObject *t_FieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_of_(t_FieldOrekitStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitStepHandler_finish(t_FieldOrekitStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_handleStep(t_FieldOrekitStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_init(t_FieldOrekitStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitStepHandler_get__parameters_(t_FieldOrekitStepHandler *self, void *data);
        static PyGetSetDef t_FieldOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepHandler)[] = {
          { Py_tp_methods, t_FieldOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepHandler, t_FieldOrekitStepHandler, FieldOrekitStepHandler);
        PyObject *t_FieldOrekitStepHandler::wrap_Object(const FieldOrekitStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepHandler *self = (t_FieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepHandler *self = (t_FieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepHandler), &PY_TYPE_DEF(FieldOrekitStepHandler), module, "FieldOrekitStepHandler", 0);
        }

        void t_FieldOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "class_", make_descriptor(FieldOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "wrapfn_", make_descriptor(t_FieldOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepHandler::wrap_Object(FieldOrekitStepHandler(((t_FieldOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepHandler_of_(t_FieldOrekitStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitStepHandler_finish(t_FieldOrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepHandler_handleStep(t_FieldOrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepHandler_init(t_FieldOrekitStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitStepHandler_get__parameters_(t_FieldOrekitStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/RangeRateBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *RangeRateBuilder::class$ = NULL;
          jmethodID *RangeRateBuilder::mids$ = NULL;
          bool RangeRateBuilder::live$ = false;

          jclass RangeRateBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/RangeRateBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c8415f9ae7de2332] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;ZDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_659093e7e627e4aa] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/RangeRate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateBuilder::RangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jboolean a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_c8415f9ae7de2332, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::RangeRate RangeRateBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::RangeRate(env->callObjectMethod(this$, mids$[mid_build_659093e7e627e4aa], a0.this$, a1.this$));
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
          static PyObject *t_RangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateBuilder_of_(t_RangeRateBuilder *self, PyObject *args);
          static int t_RangeRateBuilder_init_(t_RangeRateBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateBuilder_build(t_RangeRateBuilder *self, PyObject *args);
          static PyObject *t_RangeRateBuilder_get__parameters_(t_RangeRateBuilder *self, void *data);
          static PyGetSetDef t_RangeRateBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_RangeRateBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RangeRateBuilder__methods_[] = {
            DECLARE_METHOD(t_RangeRateBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RangeRateBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateBuilder)[] = {
            { Py_tp_methods, t_RangeRateBuilder__methods_ },
            { Py_tp_init, (void *) t_RangeRateBuilder_init_ },
            { Py_tp_getset, t_RangeRateBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(RangeRateBuilder, t_RangeRateBuilder, RangeRateBuilder);
          PyObject *t_RangeRateBuilder::wrap_Object(const RangeRateBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeRateBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeRateBuilder *self = (t_RangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RangeRateBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeRateBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeRateBuilder *self = (t_RangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RangeRateBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateBuilder), &PY_TYPE_DEF(RangeRateBuilder), module, "RangeRateBuilder", 0);
          }

          void t_RangeRateBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "class_", make_descriptor(RangeRateBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "wrapfn_", make_descriptor(t_RangeRateBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateBuilder::initializeClass, 1)))
              return NULL;
            return t_RangeRateBuilder::wrap_Object(RangeRateBuilder(((t_RangeRateBuilder *) arg)->object.this$));
          }
          static PyObject *t_RangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RangeRateBuilder_of_(t_RangeRateBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RangeRateBuilder_init_(t_RangeRateBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            RangeRateBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkZDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RangeRateBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(RangeRate);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateBuilder_build(t_RangeRateBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::RangeRate result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_RangeRate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RangeRateBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_RangeRateBuilder_get__parameters_(t_RangeRateBuilder *self, void *data)
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
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimation::class$ = NULL;
        jmethodID *KalmanEstimation::mids$ = NULL;
        bool KalmanEstimation::live$ = false;

        jclass KalmanEstimation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCorrectedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_aaa854c403487cf3] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanEstimation::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_164e77faf6b1d416]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimation::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164]));
        }

        ::org::orekit::time::AbsoluteDate KalmanEstimation::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_aaa854c403487cf3]));
        }

        jint KalmanEstimation::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546]);
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealVector KalmanEstimation::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanEstimation::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_164e77faf6b1d416]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimation::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164]));
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
      namespace sequential {
        static PyObject *t_KalmanEstimation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimation_getCorrectedMeasurement(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCorrectedSpacecraftStates(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCurrentDate(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCurrentMeasurementNumber(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedMeasurementsParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedOrbitalParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedPropagationParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalEstimatedCovarianceMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalEstimatedState(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalInnovationCovarianceMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalKalmanGain(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalMeasurementJacobian(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalStateTransitionMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPredictedMeasurement(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPredictedSpacecraftStates(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_get__correctedMeasurement(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__correctedSpacecraftStates(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__currentDate(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__currentMeasurementNumber(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedMeasurementsParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedOrbitalParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedPropagationParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalEstimatedCovarianceMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalEstimatedState(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalInnovationCovarianceMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalKalmanGain(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalMeasurementJacobian(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalStateTransitionMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__predictedMeasurement(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__predictedSpacecraftStates(t_KalmanEstimation *self, void *data);
        static PyGetSetDef t_KalmanEstimation__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanEstimation, correctedMeasurement),
          DECLARE_GET_FIELD(t_KalmanEstimation, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_KalmanEstimation, currentDate),
          DECLARE_GET_FIELD(t_KalmanEstimation, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalEstimatedState),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalKalmanGain),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, predictedMeasurement),
          DECLARE_GET_FIELD(t_KalmanEstimation, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanEstimation__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimation, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPredictedSpacecraftStates, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimation)[] = {
          { Py_tp_methods, t_KalmanEstimation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanEstimation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimation, t_KalmanEstimation, KalmanEstimation);

        void t_KalmanEstimation::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimation), &PY_TYPE_DEF(KalmanEstimation), module, "KalmanEstimation", 0);
        }

        void t_KalmanEstimation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "class_", make_descriptor(KalmanEstimation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "wrapfn_", make_descriptor(t_KalmanEstimation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimation::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimation::wrap_Object(KalmanEstimation(((t_KalmanEstimation *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimation_getCorrectedMeasurement(t_KalmanEstimation *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getCorrectedSpacecraftStates(t_KalmanEstimation *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_getCurrentDate(t_KalmanEstimation *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getCurrentMeasurementNumber(t_KalmanEstimation *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedMeasurementsParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedOrbitalParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedPropagationParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalEstimatedCovarianceMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalEstimatedState(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalInnovationCovarianceMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalKalmanGain(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalMeasurementJacobian(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalStateTransitionMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPredictedMeasurement(t_KalmanEstimation *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPredictedSpacecraftStates(t_KalmanEstimation *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_get__correctedMeasurement(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__correctedSpacecraftStates(t_KalmanEstimation *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_get__currentDate(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__currentMeasurementNumber(t_KalmanEstimation *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedMeasurementsParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedOrbitalParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedPropagationParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalEstimatedCovarianceMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalEstimatedState(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalInnovationCovarianceMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalKalmanGain(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalMeasurementJacobian(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalStateTransitionMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__predictedMeasurement(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__predictedSpacecraftStates(t_KalmanEstimation *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logistic$Parametric::class$ = NULL;
        jmethodID *Logistic$Parametric::mids$ = NULL;
        bool Logistic$Parametric::live$ = false;

        jclass Logistic$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logistic$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_7b8ea6f669f90156] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_618a40a0b95154fa] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logistic$Parametric::Logistic$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        JArray< jdouble > Logistic$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_7b8ea6f669f90156], a0, a1.this$));
        }

        jdouble Logistic$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_618a40a0b95154fa], a0, a1.this$);
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
        static PyObject *t_Logistic$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logistic$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logistic$Parametric_init_(t_Logistic$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logistic$Parametric_gradient(t_Logistic$Parametric *self, PyObject *args);
        static PyObject *t_Logistic$Parametric_value(t_Logistic$Parametric *self, PyObject *args);

        static PyMethodDef t_Logistic$Parametric__methods_[] = {
          DECLARE_METHOD(t_Logistic$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Logistic$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logistic$Parametric)[] = {
          { Py_tp_methods, t_Logistic$Parametric__methods_ },
          { Py_tp_init, (void *) t_Logistic$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logistic$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logistic$Parametric, t_Logistic$Parametric, Logistic$Parametric);

        void t_Logistic$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Logistic$Parametric), &PY_TYPE_DEF(Logistic$Parametric), module, "Logistic$Parametric", 0);
        }

        void t_Logistic$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "class_", make_descriptor(Logistic$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "wrapfn_", make_descriptor(t_Logistic$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logistic$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logistic$Parametric::initializeClass, 1)))
            return NULL;
          return t_Logistic$Parametric::wrap_Object(Logistic$Parametric(((t_Logistic$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Logistic$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logistic$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logistic$Parametric_init_(t_Logistic$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Logistic$Parametric object((jobject) NULL);

          INT_CALL(object = Logistic$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Logistic$Parametric_gradient(t_Logistic$Parametric *self, PyObject *args)
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

        static PyObject *t_Logistic$Parametric_value(t_Logistic$Parametric *self, PyObject *args)
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
#include "org/orekit/time/AbstractTimeInterpolator.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeInterpolator::class$ = NULL;
      jmethodID *AbstractTimeInterpolator::mids$ = NULL;
      bool AbstractTimeInterpolator::live$ = false;
      jdouble AbstractTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = (jdouble) 0;
      jint AbstractTimeInterpolator::DEFAULT_INTERPOLATION_POINTS = (jint) 0;

      jclass AbstractTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_checkInterpolatorCompatibilityWithSampleSize_45c4ea6c211ca8d0] = env->getStaticMethodID(cls, "checkInterpolatorCompatibilityWithSampleSize", "(Lorg/orekit/time/TimeInterpolator;I)V");
          mids$[mid_getExtrapolationThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_f2f64475e4580546] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_a6156df500549a58] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_1bf58a5a4276965f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_e3cc35eb10c5d2cd] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_4e6d64907ae5c35a] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_addOptionalSubInterpolatorIfDefined_6a54fcd6977f9655] = env->getMethodID(cls, "addOptionalSubInterpolatorIfDefined", "(Lorg/orekit/time/TimeInterpolator;Ljava/util/List;)V");
          mids$[mid_getTimeParameter_5978b75a817dc032] = env->getMethodID(cls, "getTimeParameter", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = env->getStaticDoubleField(cls, "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC");
          DEFAULT_INTERPOLATION_POINTS = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_POINTS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractTimeInterpolator::AbstractTimeInterpolator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

      void AbstractTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::TimeInterpolator & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkInterpolatorCompatibilityWithSampleSize_45c4ea6c211ca8d0], a0.this$, a1);
      }

      jdouble AbstractTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_456d9a2f64d6b28d]);
      }

      jint AbstractTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_f2f64475e4580546]);
      }

      ::java::util::List AbstractTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_a6156df500549a58]));
      }

      ::org::orekit::time::TimeStamped AbstractTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_1bf58a5a4276965f], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeStamped AbstractTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_e3cc35eb10c5d2cd], a0.this$, a1.this$));
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
      static PyObject *t_AbstractTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator_of_(t_AbstractTimeInterpolator *self, PyObject *args);
      static int t_AbstractTimeInterpolator_init_(t_AbstractTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator_getExtrapolationThreshold(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_getNbInterpolationPoints(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_getSubInterpolators(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_interpolate(t_AbstractTimeInterpolator *self, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator_get__extrapolationThreshold(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__nbInterpolationPoints(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__subInterpolators(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__parameters_(t_AbstractTimeInterpolator *self, void *data);
      static PyGetSetDef t_AbstractTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, checkInterpolatorCompatibilityWithSampleSize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeInterpolator)[] = {
        { Py_tp_methods, t_AbstractTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractTimeInterpolator_init_ },
        { Py_tp_getset, t_AbstractTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeInterpolator, t_AbstractTimeInterpolator, AbstractTimeInterpolator);
      PyObject *t_AbstractTimeInterpolator::wrap_Object(const AbstractTimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator *self = (t_AbstractTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator *self = (t_AbstractTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeInterpolator), &PY_TYPE_DEF(AbstractTimeInterpolator), module, "AbstractTimeInterpolator", 0);
      }

      void t_AbstractTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "class_", make_descriptor(AbstractTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "wrapfn_", make_descriptor(t_AbstractTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractTimeInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC", make_descriptor(AbstractTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "DEFAULT_INTERPOLATION_POINTS", make_descriptor(AbstractTimeInterpolator::DEFAULT_INTERPOLATION_POINTS));
      }

      static PyObject *t_AbstractTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeInterpolator::wrap_Object(AbstractTimeInterpolator(((t_AbstractTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractTimeInterpolator_of_(t_AbstractTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractTimeInterpolator_init_(t_AbstractTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        AbstractTimeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          INT_CALL(object = AbstractTimeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;

        if (!parseArgs(args, "KI", ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::time::AbstractTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkInterpolatorCompatibilityWithSampleSize", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeInterpolator_getExtrapolationThreshold(t_AbstractTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractTimeInterpolator_getNbInterpolationPoints(t_AbstractTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractTimeInterpolator_getSubInterpolators(t_AbstractTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeInterpolator_interpolate(t_AbstractTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_AbstractTimeInterpolator_get__parameters_(t_AbstractTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractTimeInterpolator_get__extrapolationThreshold(t_AbstractTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractTimeInterpolator_get__nbInterpolationPoints(t_AbstractTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractTimeInterpolator_get__subInterpolators(t_AbstractTimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *ParameterValidator::class$ = NULL;
            jmethodID *ParameterValidator::mids$ = NULL;
            bool ParameterValidator::live$ = false;

            jclass ParameterValidator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_validate_a3e626dfa1abd779] = env->getMethodID(cls, "validate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::linear::RealVector ParameterValidator::validate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_validate_a3e626dfa1abd779], a0.this$));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_ParameterValidator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParameterValidator_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParameterValidator_validate(t_ParameterValidator *self, PyObject *arg);

            static PyMethodDef t_ParameterValidator__methods_[] = {
              DECLARE_METHOD(t_ParameterValidator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParameterValidator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParameterValidator, validate, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParameterValidator)[] = {
              { Py_tp_methods, t_ParameterValidator__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParameterValidator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParameterValidator, t_ParameterValidator, ParameterValidator);

            void t_ParameterValidator::install(PyObject *module)
            {
              installType(&PY_TYPE(ParameterValidator), &PY_TYPE_DEF(ParameterValidator), module, "ParameterValidator", 0);
            }

            void t_ParameterValidator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "class_", make_descriptor(ParameterValidator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "wrapfn_", make_descriptor(t_ParameterValidator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParameterValidator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParameterValidator::initializeClass, 1)))
                return NULL;
              return t_ParameterValidator::wrap_Object(ParameterValidator(((t_ParameterValidator *) arg)->object.this$));
            }
            static PyObject *t_ParameterValidator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParameterValidator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParameterValidator_validate(t_ParameterValidator *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.validate(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "validate", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudesSequence$SwitchHandler::class$ = NULL;
      jmethodID *AttitudesSequence$SwitchHandler::mids$ = NULL;
      bool AttitudesSequence$SwitchHandler::live$ = false;

      jclass AttitudesSequence$SwitchHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudesSequence$SwitchHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_switchOccurred_8a05bbdb2856b4ec] = env->getMethodID(cls, "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AttitudesSequence$SwitchHandler::switchOccurred(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::propagation::SpacecraftState & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_switchOccurred_8a05bbdb2856b4ec], a0.this$, a1.this$, a2.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_AttitudesSequence$SwitchHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence$SwitchHandler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence$SwitchHandler_switchOccurred(t_AttitudesSequence$SwitchHandler *self, PyObject *args);

      static PyMethodDef t_AttitudesSequence$SwitchHandler__methods_[] = {
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, switchOccurred, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudesSequence$SwitchHandler)[] = {
        { Py_tp_methods, t_AttitudesSequence$SwitchHandler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudesSequence$SwitchHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudesSequence$SwitchHandler, t_AttitudesSequence$SwitchHandler, AttitudesSequence$SwitchHandler);

      void t_AttitudesSequence$SwitchHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudesSequence$SwitchHandler), &PY_TYPE_DEF(AttitudesSequence$SwitchHandler), module, "AttitudesSequence$SwitchHandler", 0);
      }

      void t_AttitudesSequence$SwitchHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "class_", make_descriptor(AttitudesSequence$SwitchHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "wrapfn_", make_descriptor(t_AttitudesSequence$SwitchHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudesSequence$SwitchHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudesSequence$SwitchHandler::initializeClass, 1)))
          return NULL;
        return t_AttitudesSequence$SwitchHandler::wrap_Object(AttitudesSequence$SwitchHandler(((t_AttitudesSequence$SwitchHandler *) arg)->object.this$));
      }
      static PyObject *t_AttitudesSequence$SwitchHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudesSequence$SwitchHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudesSequence$SwitchHandler_switchOccurred(t_AttitudesSequence$SwitchHandler *self, PyObject *args)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
        ::org::orekit::propagation::SpacecraftState a2((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.switchOccurred(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "switchOccurred", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataProvider.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataProvider::class$ = NULL;
      jmethodID *PythonDataProvider::mids$ = NULL;
      bool PythonDataProvider::live$ = false;

      jclass PythonDataProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataProvider::PythonDataProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonDataProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonDataProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonDataProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonDataProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataProvider_init_(t_PythonDataProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataProvider_finalize(t_PythonDataProvider *self);
      static PyObject *t_PythonDataProvider_pythonExtension(t_PythonDataProvider *self, PyObject *args);
      static void JNICALL t_PythonDataProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataProvider_get__self(t_PythonDataProvider *self, void *data);
      static PyGetSetDef t_PythonDataProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataProvider__methods_[] = {
        DECLARE_METHOD(t_PythonDataProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataProvider)[] = {
        { Py_tp_methods, t_PythonDataProvider__methods_ },
        { Py_tp_init, (void *) t_PythonDataProvider_init_ },
        { Py_tp_getset, t_PythonDataProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataProvider, t_PythonDataProvider, PythonDataProvider);

      void t_PythonDataProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataProvider), &PY_TYPE_DEF(PythonDataProvider), module, "PythonDataProvider", 1);
      }

      void t_PythonDataProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "class_", make_descriptor(PythonDataProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "wrapfn_", make_descriptor(t_PythonDataProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonDataProvider_pythonDecRef0 },
        };
        env->registerNatives(cls, methods, 1);
      }

      static PyObject *t_PythonDataProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataProvider::initializeClass, 1)))
          return NULL;
        return t_PythonDataProvider::wrap_Object(PythonDataProvider(((t_PythonDataProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonDataProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataProvider_init_(t_PythonDataProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonDataProvider object((jobject) NULL);

        INT_CALL(object = PythonDataProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataProvider_finalize(t_PythonDataProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataProvider_pythonExtension(t_PythonDataProvider *self, PyObject *args)
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

      static void JNICALL t_PythonDataProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataProvider::mids$[PythonDataProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataProvider::mids$[PythonDataProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataProvider_get__self(t_PythonDataProvider *self, void *data)
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
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UnitSphereRandomVectorGenerator::class$ = NULL;
      jmethodID *UnitSphereRandomVectorGenerator::mids$ = NULL;
      bool UnitSphereRandomVectorGenerator::live$ = false;

      jclass UnitSphereRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UnitSphereRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3838ea28c063a110] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextVector_7cdc325af0834901] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnitSphereRandomVectorGenerator::UnitSphereRandomVectorGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      UnitSphereRandomVectorGenerator::UnitSphereRandomVectorGenerator(jint a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3838ea28c063a110, a0, a1.this$)) {}

      JArray< jdouble > UnitSphereRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_7cdc325af0834901]));
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
      static PyObject *t_UnitSphereRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnitSphereRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnitSphereRandomVectorGenerator_init_(t_UnitSphereRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UnitSphereRandomVectorGenerator_nextVector(t_UnitSphereRandomVectorGenerator *self);

      static PyMethodDef t_UnitSphereRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnitSphereRandomVectorGenerator)[] = {
        { Py_tp_methods, t_UnitSphereRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_UnitSphereRandomVectorGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnitSphereRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnitSphereRandomVectorGenerator, t_UnitSphereRandomVectorGenerator, UnitSphereRandomVectorGenerator);

      void t_UnitSphereRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UnitSphereRandomVectorGenerator), &PY_TYPE_DEF(UnitSphereRandomVectorGenerator), module, "UnitSphereRandomVectorGenerator", 0);
      }

      void t_UnitSphereRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "class_", make_descriptor(UnitSphereRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "wrapfn_", make_descriptor(t_UnitSphereRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnitSphereRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnitSphereRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_UnitSphereRandomVectorGenerator::wrap_Object(UnitSphereRandomVectorGenerator(((t_UnitSphereRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_UnitSphereRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnitSphereRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnitSphereRandomVectorGenerator_init_(t_UnitSphereRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            UnitSphereRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = UnitSphereRandomVectorGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
            UnitSphereRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UnitSphereRandomVectorGenerator(a0, a1));
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

      static PyObject *t_UnitSphereRandomVectorGenerator_nextVector(t_UnitSphereRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataSource$Opener.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/Reader.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$Opener::class$ = NULL;
      jmethodID *DataSource$Opener::mids$ = NULL;
      bool DataSource$Opener::live$ = false;

      jclass DataSource$Opener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$Opener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openReaderOnce_8476c88b3f0eb61c] = env->getMethodID(cls, "openReaderOnce", "()Ljava/io/Reader;");
          mids$[mid_openStreamOnce_eafcb03912e8859c] = env->getMethodID(cls, "openStreamOnce", "()Ljava/io/InputStream;");
          mids$[mid_rawDataIsBinary_e470b6d9e0d979db] = env->getMethodID(cls, "rawDataIsBinary", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::Reader DataSource$Opener::openReaderOnce() const
      {
        return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_openReaderOnce_8476c88b3f0eb61c]));
      }

      ::java::io::InputStream DataSource$Opener::openStreamOnce() const
      {
        return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openStreamOnce_eafcb03912e8859c]));
      }

      jboolean DataSource$Opener::rawDataIsBinary() const
      {
        return env->callBooleanMethod(this$, mids$[mid_rawDataIsBinary_e470b6d9e0d979db]);
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
      static PyObject *t_DataSource$Opener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$Opener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$Opener_openReaderOnce(t_DataSource$Opener *self);
      static PyObject *t_DataSource$Opener_openStreamOnce(t_DataSource$Opener *self);
      static PyObject *t_DataSource$Opener_rawDataIsBinary(t_DataSource$Opener *self);

      static PyMethodDef t_DataSource$Opener__methods_[] = {
        DECLARE_METHOD(t_DataSource$Opener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$Opener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$Opener, openReaderOnce, METH_NOARGS),
        DECLARE_METHOD(t_DataSource$Opener, openStreamOnce, METH_NOARGS),
        DECLARE_METHOD(t_DataSource$Opener, rawDataIsBinary, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$Opener)[] = {
        { Py_tp_methods, t_DataSource$Opener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$Opener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$Opener, t_DataSource$Opener, DataSource$Opener);

      void t_DataSource$Opener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$Opener), &PY_TYPE_DEF(DataSource$Opener), module, "DataSource$Opener", 0);
      }

      void t_DataSource$Opener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "class_", make_descriptor(DataSource$Opener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "wrapfn_", make_descriptor(t_DataSource$Opener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$Opener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$Opener::initializeClass, 1)))
          return NULL;
        return t_DataSource$Opener::wrap_Object(DataSource$Opener(((t_DataSource$Opener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$Opener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$Opener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$Opener_openReaderOnce(t_DataSource$Opener *self)
      {
        ::java::io::Reader result((jobject) NULL);
        OBJ_CALL(result = self->object.openReaderOnce());
        return ::java::io::t_Reader::wrap_Object(result);
      }

      static PyObject *t_DataSource$Opener_openStreamOnce(t_DataSource$Opener *self)
      {
        ::java::io::InputStream result((jobject) NULL);
        OBJ_CALL(result = self->object.openStreamOnce());
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      static PyObject *t_DataSource$Opener_rawDataIsBinary(t_DataSource$Opener *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.rawDataIsBinary());
        Py_RETURN_BOOL(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *EventHandler::class$ = NULL;
          jmethodID *EventHandler::mids$ = NULL;
          bool EventHandler::live$ = false;

          jclass EventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/EventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_eventOccurred_66531e3c1769dca9] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_init_9678bba57553faaf] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_resetState_7c4cfc7ac2bc3a77] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::ode::events::Action EventHandler::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66531e3c1769dca9], a0.this$, a1.this$, a2));
          }

          void EventHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::propagation::events::EventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_9678bba57553faaf], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::SpacecraftState EventHandler::resetState(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_7c4cfc7ac2bc3a77], a0.this$, a1.this$));
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
      namespace events {
        namespace handlers {
          static PyObject *t_EventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventHandler_eventOccurred(t_EventHandler *self, PyObject *args);
          static PyObject *t_EventHandler_init(t_EventHandler *self, PyObject *args);
          static PyObject *t_EventHandler_resetState(t_EventHandler *self, PyObject *args);

          static PyMethodDef t_EventHandler__methods_[] = {
            DECLARE_METHOD(t_EventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_EventHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_EventHandler, resetState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventHandler)[] = {
            { Py_tp_methods, t_EventHandler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EventHandler, t_EventHandler, EventHandler);

          void t_EventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventHandler), &PY_TYPE_DEF(EventHandler), module, "EventHandler", 0);
          }

          void t_EventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "class_", make_descriptor(EventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "wrapfn_", make_descriptor(t_EventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventHandler::initializeClass, 1)))
              return NULL;
            return t_EventHandler::wrap_Object(EventHandler(((t_EventHandler *) arg)->object.this$));
          }
          static PyObject *t_EventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EventHandler_eventOccurred(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_EventHandler_init(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_EventHandler_resetState(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractIntegratedPropagator::class$ = NULL;
        jmethodID *AbstractIntegratedPropagator::mids$ = NULL;
        bool AbstractIntegratedPropagator::live$ = false;

        jclass AbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_de58ca8034102d77] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/AdditionalDerivativesProvider;)V");
            mids$[mid_addEventDetector_8ef30a2ad40caceb] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getAdditionalDerivativesProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_getBasicDimension_f2f64475e4580546] = env->getMethodID(cls, "getBasicDimension", "()I");
            mids$[mid_getCalls_f2f64475e4580546] = env->getMethodID(cls, "getCalls", "()I");
            mids$[mid_getEphemerisGenerator_dd0e78d2be8aaf34] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
            mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getIntegratorName_0090f7797e403f43] = env->getMethodID(cls, "getIntegratorName", "()Ljava/lang/String;");
            mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagationType_cb6f177f3e3f8613] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getResetAtEnd_e470b6d9e0d979db] = env->getMethodID(cls, "getResetAtEnd", "()Z");
            mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_propagate_889031abe87f3b14] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_propagate_afc18c81ed763a96] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setMu_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setResetAtEnd_50a2e0b139e80a58] = env->getMethodID(cls, "setResetAtEnd", "(Z)V");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_setPositionAngleType_07350e8db766ef51] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_setUpStmAndJacobianGenerators_7ae3461a92a43152] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");
            mids$[mid_beforeIntegration_3d13474d79f5e7bc] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_afterIntegration_7ae3461a92a43152] = env->getMethodID(cls, "afterIntegration", "()V");
            mids$[mid_getInitialIntegrationState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_createMapper_083e2bc1612e9def] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_9c7da9606951e4f0] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_setUpEventDetector_be1a944c726f9d5c] = env->getMethodID(cls, "setUpEventDetector", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_initMapper_7ae3461a92a43152] = env->getMethodID(cls, "initMapper", "()V");
            mids$[mid_setOrbitType_bbd02639b41d4055] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_getIntegrator_8d1d211a59943275] = env->getMethodID(cls, "getIntegrator", "()Lorg/hipparchus/ode/ODEIntegrator;");
            mids$[mid_setUpUserEventDetectors_7ae3461a92a43152] = env->getMethodID(cls, "setUpUserEventDetectors", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractIntegratedPropagator::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_de58ca8034102d77], a0.this$);
        }

        void AbstractIntegratedPropagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_8ef30a2ad40caceb], a0.this$);
        }

        void AbstractIntegratedPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_7ae3461a92a43152]);
        }

        ::java::util::List AbstractIntegratedPropagator::getAdditionalDerivativesProviders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivativesProviders_a6156df500549a58]));
        }

        jint AbstractIntegratedPropagator::getBasicDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getBasicDimension_f2f64475e4580546]);
        }

        jint AbstractIntegratedPropagator::getCalls() const
        {
          return env->callIntMethod(this$, mids$[mid_getCalls_f2f64475e4580546]);
        }

        ::org::orekit::propagation::EphemerisGenerator AbstractIntegratedPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_dd0e78d2be8aaf34]));
        }

        ::java::util::Collection AbstractIntegratedPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cfcfd130f9013e3e]));
        }

        ::java::lang::String AbstractIntegratedPropagator::getIntegratorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIntegratorName_0090f7797e403f43]));
        }

        JArray< ::java::lang::String > AbstractIntegratedPropagator::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924]));
        }

        jdouble AbstractIntegratedPropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::org::orekit::propagation::PropagationType AbstractIntegratedPropagator::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_cb6f177f3e3f8613]));
        }

        jboolean AbstractIntegratedPropagator::getResetAtEnd() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getResetAtEnd_e470b6d9e0d979db]);
        }

        jboolean AbstractIntegratedPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_6b161f495ea569b8], a0.this$);
        }

        ::org::orekit::propagation::SpacecraftState AbstractIntegratedPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_889031abe87f3b14], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState AbstractIntegratedPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_afc18c81ed763a96], a0.this$, a1.this$));
        }

        void AbstractIntegratedPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
        }

        void AbstractIntegratedPropagator::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_77e0f9a1f260e2e5], a0);
        }

        void AbstractIntegratedPropagator::setResetAtEnd(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setResetAtEnd_50a2e0b139e80a58], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_AbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_addEventDetector(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_clearEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getBasicDimension(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getCalls(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getEphemerisGenerator(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getIntegratorName(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getManagedAdditionalStates(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getMu(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getPropagationType(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getResetAtEnd(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_isAdditionalStateManaged(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_propagate(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_setAttitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_setMu(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_setResetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_get__additionalDerivativesProviders(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__attitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__basicDimension(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__calls(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__ephemerisGenerator(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__eventsDetectors(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__integratorName(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__managedAdditionalStates(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__mu(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__mu(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__propagationType(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__resetAtEnd(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__resetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, additionalDerivativesProviders),
          DECLARE_SET_FIELD(t_AbstractIntegratedPropagator, attitudeProvider),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, basicDimension),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, calls),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, integratorName),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, managedAdditionalStates),
          DECLARE_GETSET_FIELD(t_AbstractIntegratedPropagator, mu),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, propagationType),
          DECLARE_GETSET_FIELD(t_AbstractIntegratedPropagator, resetAtEnd),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getAdditionalDerivativesProviders, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getBasicDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getCalls, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getIntegratorName, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getResetAtEnd, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, propagate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setMu, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setResetAtEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_AbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
          NULL
        };

        DEFINE_TYPE(AbstractIntegratedPropagator, t_AbstractIntegratedPropagator, AbstractIntegratedPropagator);

        void t_AbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegratedPropagator), &PY_TYPE_DEF(AbstractIntegratedPropagator), module, "AbstractIntegratedPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "MainStateEquations", make_descriptor(&PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations)));
        }

        void t_AbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "class_", make_descriptor(AbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_AbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegratedPropagator::wrap_Object(AbstractIntegratedPropagator(((t_AbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::AdditionalDerivativesProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::integration::AdditionalDerivativesProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_addEventDetector(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_clearEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_AbstractIntegratedPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::integration::PY_TYPE(AdditionalDerivativesProvider));
        }

        static PyObject *t_AbstractIntegratedPropagator_getBasicDimension(t_AbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBasicDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getCalls(t_AbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCalls());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getEphemerisGenerator(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getIntegratorName(t_AbstractIntegratedPropagator *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorName());
          return j2p(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getManagedAdditionalStates(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getMu(t_AbstractIntegratedPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getPropagationType(t_AbstractIntegratedPropagator *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getResetAtEnd(t_AbstractIntegratedPropagator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getResetAtEnd());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_isAdditionalStateManaged(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_propagate(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.propagate(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.propagate(a0, a1));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_setAttitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_setMu(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_setResetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setResetAtEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setResetAtEnd", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__additionalDerivativesProviders(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_AbstractIntegratedPropagator_set__attitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__basicDimension(t_AbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBasicDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__calls(t_AbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCalls());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__ephemerisGenerator(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__eventsDetectors(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__integratorName(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorName());
          return j2p(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__managedAdditionalStates(t_AbstractIntegratedPropagator *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_AbstractIntegratedPropagator_get__mu(t_AbstractIntegratedPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }
        static int t_AbstractIntegratedPropagator_set__mu(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__propagationType(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__resetAtEnd(t_AbstractIntegratedPropagator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getResetAtEnd());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractIntegratedPropagator_set__resetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setResetAtEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "resetAtEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/GillIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GillIntegrator::class$ = NULL;
        jmethodID *GillIntegrator::mids$ = NULL;
        bool GillIntegrator::live$ = false;

        jclass GillIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GillIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_43de1192439efa92] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_7cdc325af0834901] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_7cdc325af0834901] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_8dd1e1bf46ea2095] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/GillStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillIntegrator::GillIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        JArray< JArray< jdouble > > GillIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_43de1192439efa92]));
        }

        JArray< jdouble > GillIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_7cdc325af0834901]));
        }

        JArray< jdouble > GillIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_7cdc325af0834901]));
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
    namespace ode {
      namespace nonstiff {
        static PyObject *t_GillIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GillIntegrator_init_(t_GillIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillIntegrator_getA(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_getB(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_getC(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_get__a(t_GillIntegrator *self, void *data);
        static PyObject *t_GillIntegrator_get__b(t_GillIntegrator *self, void *data);
        static PyObject *t_GillIntegrator_get__c(t_GillIntegrator *self, void *data);
        static PyGetSetDef t_GillIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_GillIntegrator, a),
          DECLARE_GET_FIELD(t_GillIntegrator, b),
          DECLARE_GET_FIELD(t_GillIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillIntegrator__methods_[] = {
          DECLARE_METHOD(t_GillIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_GillIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_GillIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillIntegrator)[] = {
          { Py_tp_methods, t_GillIntegrator__methods_ },
          { Py_tp_init, (void *) t_GillIntegrator_init_ },
          { Py_tp_getset, t_GillIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(GillIntegrator, t_GillIntegrator, GillIntegrator);

        void t_GillIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GillIntegrator), &PY_TYPE_DEF(GillIntegrator), module, "GillIntegrator", 0);
        }

        void t_GillIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "class_", make_descriptor(GillIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "wrapfn_", make_descriptor(t_GillIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillIntegrator::initializeClass, 1)))
            return NULL;
          return t_GillIntegrator::wrap_Object(GillIntegrator(((t_GillIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GillIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GillIntegrator_init_(t_GillIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GillIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GillIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillIntegrator_getA(t_GillIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_GillIntegrator_getB(t_GillIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_GillIntegrator_getC(t_GillIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_GillIntegrator_get__a(t_GillIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_GillIntegrator_get__b(t_GillIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_GillIntegrator_get__c(t_GillIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *Array2DRowRealMatrix::class$ = NULL;
      jmethodID *Array2DRowRealMatrix::mids$ = NULL;
      bool Array2DRowRealMatrix::live$ = false;

      jclass Array2DRowRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/Array2DRowRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_d660c7a97bf55272] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_init$_7911f39d20980098] = env->getMethodID(cls, "<init>", "([[DZ)V");
          mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_add_6bf0ab2b7bd27bc5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_addToEntry_78e41e7b5124a628] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_7116bbecdd8ceb21] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createMatrix_4225756160ad1bc1] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_43de1192439efa92] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getDataRef_43de1192439efa92] = env->getMethodID(cls, "getDataRef", "()[[D");
          mids$[mid_getEntry_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRow_eb9cceadce1b2217] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getSubMatrix_d4cd53a0b7898ff0] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_kroneckerProduct_e00cd33aedcc5bd0] = env->getMethodID(cls, "kroneckerProduct", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiply_6bf0ab2b7bd27bc5] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_multiplyEntry_78e41e7b5124a628] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_5fa4c10133fc1565] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyTransposed_e00cd33aedcc5bd0] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_4b742fe429c22ba8] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_4b742fe429c22ba8] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_setEntry_78e41e7b5124a628] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_7d4f41c65056f174] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setSubMatrix_a741cdd381e94792] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_stack_7116bbecdd8ceb21] = env->getMethodID(cls, "stack", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_subtract_6bf0ab2b7bd27bc5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_transposeMultiply_5fa4c10133fc1565] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transposeMultiply_e00cd33aedcc5bd0] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_unstackSquare_7116bbecdd8ceb21] = env->getMethodID(cls, "unstackSquare", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_340ddcf983c0c22e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_354ebbe7c685c961] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_56223f2e9b79c5ad] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_62551289056beecd] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_340ddcf983c0c22e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_354ebbe7c685c961] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_56223f2e9b79c5ad] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_62551289056beecd] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Array2DRowRealMatrix::Array2DRowRealMatrix() : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< jdouble > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_d660c7a97bf55272, a0.this$)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< JArray< jdouble > > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_7911f39d20980098, a0.this$, a1)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

      Array2DRowRealMatrix Array2DRowRealMatrix::add(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_add_6bf0ab2b7bd27bc5], a0.this$));
      }

      void Array2DRowRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_78e41e7b5124a628], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_4225756160ad1bc1], a0, a1));
      }

      jint Array2DRowRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      JArray< JArray< jdouble > > Array2DRowRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_43de1192439efa92]));
      }

      JArray< JArray< jdouble > > Array2DRowRealMatrix::getDataRef() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getDataRef_43de1192439efa92]));
      }

      jdouble Array2DRowRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_a84e4ee1da3f1ab8], a0, a1);
      }

      JArray< jdouble > Array2DRowRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_eb9cceadce1b2217], a0));
      }

      jint Array2DRowRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_d4cd53a0b7898ff0], a0, a1, a2, a3));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::kroneckerProduct(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_kroneckerProduct_e00cd33aedcc5bd0], a0.this$));
      }

      Array2DRowRealMatrix Array2DRowRealMatrix::multiply(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_6bf0ab2b7bd27bc5], a0.this$));
      }

      void Array2DRowRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_78e41e7b5124a628], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::multiplyTransposed(const Array2DRowRealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_5fa4c10133fc1565], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e00cd33aedcc5bd0], a0.this$));
      }

      JArray< jdouble > Array2DRowRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_4b742fe429c22ba8], a0.this$));
      }

      JArray< jdouble > Array2DRowRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_4b742fe429c22ba8], a0.this$));
      }

      void Array2DRowRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_78e41e7b5124a628], a0, a1, a2);
      }

      void Array2DRowRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_7d4f41c65056f174], a0, a1.this$);
      }

      void Array2DRowRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_a741cdd381e94792], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::stack() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_stack_7116bbecdd8ceb21]));
      }

      Array2DRowRealMatrix Array2DRowRealMatrix::subtract(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_6bf0ab2b7bd27bc5], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::transposeMultiply(const Array2DRowRealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_5fa4c10133fc1565], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e00cd33aedcc5bd0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::unstackSquare() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_unstackSquare_7116bbecdd8ceb21]));
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_340ddcf983c0c22e], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_354ebbe7c685c961], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_56223f2e9b79c5ad], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_62551289056beecd], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_340ddcf983c0c22e], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_354ebbe7c685c961], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_56223f2e9b79c5ad], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_62551289056beecd], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_Array2DRowRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Array2DRowRealMatrix_init_(t_Array2DRowRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Array2DRowRealMatrix_add(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_addToEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_copy(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_createMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getColumnDimension(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getData(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getDataRef(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_getEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getRow(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getRowDimension(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_kroneckerProduct(t_Array2DRowRealMatrix *self, PyObject *arg);
      static PyObject *t_Array2DRowRealMatrix_multiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_multiplyEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_multiplyTransposed(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_operate(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_preMultiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setRow(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_stack(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_subtract(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_transposeMultiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_unstackSquare(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_walkInColumnOrder(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_walkInRowOrder(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_get__columnDimension(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__data(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__dataRef(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__rowDimension(t_Array2DRowRealMatrix *self, void *data);
      static PyGetSetDef t_Array2DRowRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, data),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, dataRef),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Array2DRowRealMatrix__methods_[] = {
        DECLARE_METHOD(t_Array2DRowRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, kroneckerProduct, METH_O),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, stack, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, unstackSquare, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Array2DRowRealMatrix)[] = {
        { Py_tp_methods, t_Array2DRowRealMatrix__methods_ },
        { Py_tp_init, (void *) t_Array2DRowRealMatrix_init_ },
        { Py_tp_getset, t_Array2DRowRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Array2DRowRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(Array2DRowRealMatrix, t_Array2DRowRealMatrix, Array2DRowRealMatrix);

      void t_Array2DRowRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(Array2DRowRealMatrix), &PY_TYPE_DEF(Array2DRowRealMatrix), module, "Array2DRowRealMatrix", 0);
      }

      void t_Array2DRowRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "class_", make_descriptor(Array2DRowRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "wrapfn_", make_descriptor(t_Array2DRowRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Array2DRowRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Array2DRowRealMatrix::initializeClass, 1)))
          return NULL;
        return t_Array2DRowRealMatrix::wrap_Object(Array2DRowRealMatrix(((t_Array2DRowRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_Array2DRowRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Array2DRowRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Array2DRowRealMatrix_init_(t_Array2DRowRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Array2DRowRealMatrix object((jobject) NULL);

            INT_CALL(object = Array2DRowRealMatrix());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            jboolean a1;
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[DZ", &a0, &a1))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0, a1));
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

      static PyObject *t_Array2DRowRealMatrix_add(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_addToEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_copy(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_createMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getColumnDimension(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getData(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getDataRef(t_Array2DRowRealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_getEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getRow(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getRowDimension(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_kroneckerProduct(t_Array2DRowRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.kroneckerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "kroneckerProduct", arg);
        return NULL;
      }

      static PyObject *t_Array2DRowRealMatrix_multiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_multiplyEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_multiplyTransposed(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowRealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_operate(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_preMultiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setRow(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_stack(t_Array2DRowRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.stack());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_Array2DRowRealMatrix_subtract(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_transposeMultiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowRealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_unstackSquare(t_Array2DRowRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.unstackSquare());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_Array2DRowRealMatrix_walkInColumnOrder(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "walkInColumnOrder", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_walkInRowOrder(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_get__columnDimension(t_Array2DRowRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Array2DRowRealMatrix_get__data(t_Array2DRowRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_get__dataRef(t_Array2DRowRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_get__rowDimension(t_Array2DRowRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTZonal::class$ = NULL;
            jmethodID *DSSTZonal::mids$ = NULL;
            bool DSSTZonal::live$ = false;
            ::java::lang::String *DSSTZonal::SHORT_PERIOD_PREFIX = NULL;

            jclass DSSTZonal::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ae95768491c6929a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_init$_caab3b50ba79ba40] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;III)V");
                mids$[mid_getMeanElementRate_5265bce9e9da3506] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_3b4b4fe187ad73ff] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_getProvider_c9ceb4647ee2e17e] = env->getMethodID(cls, "getProvider", "()Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
                mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_8df221610d0cb785] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_6839803ab3ef216d] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTZonal::DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae95768491c6929a, a0.this$)) {}

            DSSTZonal::DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_caab3b50ba79ba40, a0.this$, a1, a2, a3)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTZonal::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5265bce9e9da3506], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTZonal::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3b4b4fe187ad73ff], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTZonal::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
            }

            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider DSSTZonal::getProvider() const
            {
              return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_c9ceb4647ee2e17e]));
            }

            ::java::util::List DSSTZonal::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTZonal::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d], a0.this$, a1.this$, a2.this$));
            }

            void DSSTZonal::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8109c1a27d4471d3], a0.this$);
            }

            void DSSTZonal::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_8df221610d0cb785], a0.this$, a1.this$);
            }

            void DSSTZonal::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_6839803ab3ef216d], a0.this$, a1.this$);
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
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTZonal_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonal_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTZonal_init_(t_DSSTZonal *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTZonal_getMeanElementRate(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_getParametersDrivers(t_DSSTZonal *self);
            static PyObject *t_DSSTZonal_getProvider(t_DSSTZonal *self);
            static PyObject *t_DSSTZonal_initializeShortPeriodTerms(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_registerAttitudeProvider(t_DSSTZonal *self, PyObject *arg);
            static PyObject *t_DSSTZonal_updateShortPeriodTerms(t_DSSTZonal *self, PyObject *args);
            static PyObject *t_DSSTZonal_get__parametersDrivers(t_DSSTZonal *self, void *data);
            static PyObject *t_DSSTZonal_get__provider(t_DSSTZonal *self, void *data);
            static PyGetSetDef t_DSSTZonal__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTZonal, parametersDrivers),
              DECLARE_GET_FIELD(t_DSSTZonal, provider),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTZonal__methods_[] = {
              DECLARE_METHOD(t_DSSTZonal, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonal, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonal, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTZonal, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonal, getProvider, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonal, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTZonal, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTZonal, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTZonal)[] = {
              { Py_tp_methods, t_DSSTZonal__methods_ },
              { Py_tp_init, (void *) t_DSSTZonal_init_ },
              { Py_tp_getset, t_DSSTZonal__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTZonal)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTZonal, t_DSSTZonal, DSSTZonal);

            void t_DSSTZonal::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTZonal), &PY_TYPE_DEF(DSSTZonal), module, "DSSTZonal", 0);
            }

            void t_DSSTZonal::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "class_", make_descriptor(DSSTZonal::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "wrapfn_", make_descriptor(t_DSSTZonal::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTZonal::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonal), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTZonal::SHORT_PERIOD_PREFIX)));
            }

            static PyObject *t_DSSTZonal_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTZonal::initializeClass, 1)))
                return NULL;
              return t_DSSTZonal::wrap_Object(DSSTZonal(((t_DSSTZonal *) arg)->object.this$));
            }
            static PyObject *t_DSSTZonal_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTZonal::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTZonal_init_(t_DSSTZonal *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                  DSSTZonal object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                  {
                    INT_CALL(object = DSSTZonal(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                  jint a1;
                  jint a2;
                  jint a3;
                  DSSTZonal object((jobject) NULL);

                  if (!parseArgs(args, "kIII", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTZonal(a0, a1, a2, a3));
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

            static PyObject *t_DSSTZonal_getMeanElementRate(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_getParametersDrivers(t_DSSTZonal *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTZonal_getProvider(t_DSSTZonal *self)
            {
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);
              OBJ_CALL(result = self->object.getProvider());
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            static PyObject *t_DSSTZonal_initializeShortPeriodTerms(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_registerAttitudeProvider(t_DSSTZonal *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTZonal_updateShortPeriodTerms(t_DSSTZonal *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTZonal_get__parametersDrivers(t_DSSTZonal *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_DSSTZonal_get__provider(t_DSSTZonal *self, void *data)
            {
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
              OBJ_CALL(value = self->object.getProvider());
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}

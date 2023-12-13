#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/GnssData.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *GnssData::class$ = NULL;
          jmethodID *GnssData::mids$ = NULL;
          bool GnssData::live$ = false;

          jclass GnssData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/GnssData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fdec0c33477ce5f0] = env->getMethodID(cls, "<init>", "([BI)V");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GnssData::GnssData(const JArray< jbyte > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdec0c33477ce5f0, a0.this$, a1)) {}

          ::java::lang::String GnssData::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        namespace ntrip {
          static PyObject *t_GnssData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GnssData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GnssData_init_(t_GnssData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GnssData_toString(t_GnssData *self, PyObject *args);

          static PyMethodDef t_GnssData__methods_[] = {
            DECLARE_METHOD(t_GnssData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GnssData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GnssData, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GnssData)[] = {
            { Py_tp_methods, t_GnssData__methods_ },
            { Py_tp_init, (void *) t_GnssData_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GnssData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GnssData, t_GnssData, GnssData);

          void t_GnssData::install(PyObject *module)
          {
            installType(&PY_TYPE(GnssData), &PY_TYPE_DEF(GnssData), module, "GnssData", 0);
          }

          void t_GnssData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "class_", make_descriptor(GnssData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "wrapfn_", make_descriptor(t_GnssData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GnssData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GnssData::initializeClass, 1)))
              return NULL;
            return t_GnssData::wrap_Object(GnssData(((t_GnssData *) arg)->object.this$));
          }
          static PyObject *t_GnssData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GnssData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GnssData_init_(t_GnssData *self, PyObject *args, PyObject *kwds)
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            GnssData object((jobject) NULL);

            if (!parseArgs(args, "[BI", &a0, &a1))
            {
              INT_CALL(object = GnssData(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GnssData_toString(t_GnssData *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(GnssData), (PyObject *) self, "toString", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistory::class$ = NULL;
              jmethodID *TrajectoryStateHistory::mids$ = NULL;
              bool TrajectoryStateHistory::live$ = false;

              jclass TrajectoryStateHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c790d28536d77682] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Ljava/util/List;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                  mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getBody_dd5c4288aa5a3dd8] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
                  mids$[mid_getCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMetadata_81764a8f1cf7116d] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;");
                  mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTrajectoryStates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getTrajectoryStates", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryStateHistory::TrajectoryStateHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a0, const ::java::util::List & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c790d28536d77682, a0.this$, a1.this$, a2.this$, a3)) {}

              ::org::orekit::utils::CartesianDerivativesFilter TrajectoryStateHistory::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c]));
              }

              ::org::orekit::bodies::OneAxisEllipsoid TrajectoryStateHistory::getBody() const
              {
                return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dd5c4288aa5a3dd8]));
              }

              ::java::util::List TrajectoryStateHistory::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_e62d3bb06d56d7e3]));
              }

              ::org::orekit::frames::Frame TrajectoryStateHistory::getFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
              }

              jint TrajectoryStateHistory::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata TrajectoryStateHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_81764a8f1cf7116d]));
              }

              jdouble TrajectoryStateHistory::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistory::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistory::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
              }

              ::java::util::List TrajectoryStateHistory::getTrajectoryStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajectoryStates_e62d3bb06d56d7e3]));
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
              static PyObject *t_TrajectoryStateHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryStateHistory_init_(t_TrajectoryStateHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryStateHistory_getAvailableDerivatives(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getBody(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getCoordinates(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getFrame(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getInterpolationSamples(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getMetadata(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getMu(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getStart(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getStop(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getTrajectoryStates(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_get__availableDerivatives(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__body(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__coordinates(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__frame(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__interpolationSamples(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__metadata(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__mu(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__start(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__stop(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__trajectoryStates(t_TrajectoryStateHistory *self, void *data);
              static PyGetSetDef t_TrajectoryStateHistory__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, availableDerivatives),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, body),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, coordinates),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, frame),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, interpolationSamples),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, metadata),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, mu),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, start),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, stop),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, trajectoryStates),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistory__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getBody, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getMu, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getStart, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getStop, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getTrajectoryStates, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistory)[] = {
                { Py_tp_methods, t_TrajectoryStateHistory__methods_ },
                { Py_tp_init, (void *) t_TrajectoryStateHistory_init_ },
                { Py_tp_getset, t_TrajectoryStateHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistory, t_TrajectoryStateHistory, TrajectoryStateHistory);

              void t_TrajectoryStateHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistory), &PY_TYPE_DEF(TrajectoryStateHistory), module, "TrajectoryStateHistory", 0);
              }

              void t_TrajectoryStateHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "class_", make_descriptor(TrajectoryStateHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "wrapfn_", make_descriptor(t_TrajectoryStateHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_TrajectoryStateHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistory::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistory::wrap_Object(TrajectoryStateHistory(((t_TrajectoryStateHistory *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryStateHistory_init_(t_TrajectoryStateHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                TrajectoryStateHistory object((jobject) NULL);

                if (!parseArgs(args, "kKkD", ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, ::java::util::List::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
                {
                  INT_CALL(object = TrajectoryStateHistory(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_TrajectoryStateHistory_getAvailableDerivatives(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getBody(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
                OBJ_CALL(result = self->object.getBody());
                return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getCoordinates(t_TrajectoryStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_TrajectoryStateHistory_getFrame(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getInterpolationSamples(t_TrajectoryStateHistory *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistory_getMetadata(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_TrajectoryStateHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getMu(t_TrajectoryStateHistory *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_TrajectoryStateHistory_getStart(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getStop(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getTrajectoryStates(t_TrajectoryStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajectoryStates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryState));
              }

              static PyObject *t_TrajectoryStateHistory_get__availableDerivatives(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__body(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
                OBJ_CALL(value = self->object.getBody());
                return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__coordinates(t_TrajectoryStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__frame(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__interpolationSamples(t_TrajectoryStateHistory *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_TrajectoryStateHistory_get__metadata(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_TrajectoryStateHistoryMetadata::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__mu(t_TrajectoryStateHistory *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_TrajectoryStateHistory_get__start(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__stop(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__trajectoryStates(t_TrajectoryStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajectoryStates());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *RadiationSensitive::class$ = NULL;
        jmethodID *RadiationSensitive::mids$ = NULL;
        bool RadiationSensitive::live$ = false;
        ::java::lang::String *RadiationSensitive::ABSORPTION_COEFFICIENT = NULL;
        ::java::lang::String *RadiationSensitive::GLOBAL_RADIATION_FACTOR = NULL;
        ::java::lang::String *RadiationSensitive::REFLECTION_COEFFICIENT = NULL;

        jclass RadiationSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/RadiationSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_a230d7bdb943f733] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABSORPTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ABSORPTION_COEFFICIENT", "Ljava/lang/String;"));
            GLOBAL_RADIATION_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "GLOBAL_RADIATION_FACTOR", "Ljava/lang/String;"));
            REFLECTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "REFLECTION_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List RadiationSensitive::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D RadiationSensitive::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a230d7bdb943f733], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D RadiationSensitive::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_RadiationSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RadiationSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RadiationSensitive_getRadiationParametersDrivers(t_RadiationSensitive *self);
        static PyObject *t_RadiationSensitive_radiationPressureAcceleration(t_RadiationSensitive *self, PyObject *args);
        static PyObject *t_RadiationSensitive_get__radiationParametersDrivers(t_RadiationSensitive *self, void *data);
        static PyGetSetDef t_RadiationSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_RadiationSensitive, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RadiationSensitive__methods_[] = {
          DECLARE_METHOD(t_RadiationSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RadiationSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RadiationSensitive, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_RadiationSensitive, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RadiationSensitive)[] = {
          { Py_tp_methods, t_RadiationSensitive__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RadiationSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RadiationSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RadiationSensitive, t_RadiationSensitive, RadiationSensitive);

        void t_RadiationSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(RadiationSensitive), &PY_TYPE_DEF(RadiationSensitive), module, "RadiationSensitive", 0);
        }

        void t_RadiationSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "class_", make_descriptor(RadiationSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "wrapfn_", make_descriptor(t_RadiationSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "boxfn_", make_descriptor(boxObject));
          env->getClass(RadiationSensitive::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "ABSORPTION_COEFFICIENT", make_descriptor(j2p(*RadiationSensitive::ABSORPTION_COEFFICIENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "GLOBAL_RADIATION_FACTOR", make_descriptor(j2p(*RadiationSensitive::GLOBAL_RADIATION_FACTOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "REFLECTION_COEFFICIENT", make_descriptor(j2p(*RadiationSensitive::REFLECTION_COEFFICIENT)));
        }

        static PyObject *t_RadiationSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RadiationSensitive::initializeClass, 1)))
            return NULL;
          return t_RadiationSensitive::wrap_Object(RadiationSensitive(((t_RadiationSensitive *) arg)->object.this$));
        }
        static PyObject *t_RadiationSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RadiationSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RadiationSensitive_getRadiationParametersDrivers(t_RadiationSensitive *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_RadiationSensitive_radiationPressureAcceleration(t_RadiationSensitive *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_RadiationSensitive_get__radiationParametersDrivers(t_RadiationSensitive *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *NodesSet::class$ = NULL;
        jmethodID *NodesSet::mids$ = NULL;
        bool NodesSet::live$ = false;

        jclass NodesSet::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/NodesSet");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_3a739bdb8ed3db11] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_addAll_bc29b133e9ea6ed1] = env->getMethodID(cls, "addAll", "(Ljava/lang/Iterable;)V");
            mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NodesSet::NodesSet() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void NodesSet::add(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_3a739bdb8ed3db11], a0.this$);
        }

        void NodesSet::addAll(const ::java::lang::Iterable & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAll_bc29b133e9ea6ed1], a0.this$);
        }

        ::java::util::Iterator NodesSet::iterator() const
        {
          return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
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
        static PyObject *t_NodesSet_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodesSet_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodesSet_of_(t_NodesSet *self, PyObject *args);
        static int t_NodesSet_init_(t_NodesSet *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NodesSet_add(t_NodesSet *self, PyObject *arg);
        static PyObject *t_NodesSet_addAll(t_NodesSet *self, PyObject *arg);
        static PyObject *t_NodesSet_iterator(t_NodesSet *self);
        static PyObject *t_NodesSet_get__parameters_(t_NodesSet *self, void *data);
        static PyGetSetDef t_NodesSet__fields_[] = {
          DECLARE_GET_FIELD(t_NodesSet, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NodesSet__methods_[] = {
          DECLARE_METHOD(t_NodesSet, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodesSet, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodesSet, of_, METH_VARARGS),
          DECLARE_METHOD(t_NodesSet, add, METH_O),
          DECLARE_METHOD(t_NodesSet, addAll, METH_O),
          DECLARE_METHOD(t_NodesSet, iterator, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NodesSet)[] = {
          { Py_tp_methods, t_NodesSet__methods_ },
          { Py_tp_init, (void *) t_NodesSet_init_ },
          { Py_tp_getset, t_NodesSet__fields_ },
          { Py_tp_iter, (void *) ((PyObject *(*)(t_NodesSet *)) get_generic_iterator< t_NodesSet >) },
          { Py_tp_iternext, (void *) 0 },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NodesSet)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NodesSet, t_NodesSet, NodesSet);
        PyObject *t_NodesSet::wrap_Object(const NodesSet& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodesSet::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodesSet *self = (t_NodesSet *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NodesSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodesSet::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodesSet *self = (t_NodesSet *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NodesSet::install(PyObject *module)
        {
          installType(&PY_TYPE(NodesSet), &PY_TYPE_DEF(NodesSet), module, "NodesSet", 0);
        }

        void t_NodesSet::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "class_", make_descriptor(NodesSet::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "wrapfn_", make_descriptor(t_NodesSet::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NodesSet_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NodesSet::initializeClass, 1)))
            return NULL;
          return t_NodesSet::wrap_Object(NodesSet(((t_NodesSet *) arg)->object.this$));
        }
        static PyObject *t_NodesSet_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NodesSet::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NodesSet_of_(t_NodesSet *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NodesSet_init_(t_NodesSet *self, PyObject *args, PyObject *kwds)
        {
          NodesSet object((jobject) NULL);

          INT_CALL(object = NodesSet());
          self->object = object;

          return 0;
        }

        static PyObject *t_NodesSet_add(t_NodesSet *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.add(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_NodesSet_addAll(t_NodesSet *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(self->object.addAll(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAll", arg);
          return NULL;
        }

        static PyObject *t_NodesSet_iterator(t_NodesSet *self)
        {
          ::java::util::Iterator result((jobject) NULL);
          OBJ_CALL(result = self->object.iterator());
          return ::java::util::t_Iterator::wrap_Object(result);
        }
        static PyObject *t_NodesSet_get__parameters_(t_NodesSet *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CjSjCoefficient.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CjSjCoefficient::class$ = NULL;
            jmethodID *CjSjCoefficient::mids$ = NULL;
            bool CjSjCoefficient::live$ = false;

            jclass CjSjCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CjSjCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_getCj_2afcbc21f4e57ab2] = env->getMethodID(cls, "getCj", "(I)D");
                mids$[mid_getDcjDh_2afcbc21f4e57ab2] = env->getMethodID(cls, "getDcjDh", "(I)D");
                mids$[mid_getDcjDk_2afcbc21f4e57ab2] = env->getMethodID(cls, "getDcjDk", "(I)D");
                mids$[mid_getDsjDh_2afcbc21f4e57ab2] = env->getMethodID(cls, "getDsjDh", "(I)D");
                mids$[mid_getDsjDk_2afcbc21f4e57ab2] = env->getMethodID(cls, "getDsjDk", "(I)D");
                mids$[mid_getSj_2afcbc21f4e57ab2] = env->getMethodID(cls, "getSj", "(I)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CjSjCoefficient::CjSjCoefficient(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

            jdouble CjSjCoefficient::getCj(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCj_2afcbc21f4e57ab2], a0);
            }

            jdouble CjSjCoefficient::getDcjDh(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDcjDh_2afcbc21f4e57ab2], a0);
            }

            jdouble CjSjCoefficient::getDcjDk(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDcjDk_2afcbc21f4e57ab2], a0);
            }

            jdouble CjSjCoefficient::getDsjDh(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDsjDh_2afcbc21f4e57ab2], a0);
            }

            jdouble CjSjCoefficient::getDsjDk(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDsjDk_2afcbc21f4e57ab2], a0);
            }

            jdouble CjSjCoefficient::getSj(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSj_2afcbc21f4e57ab2], a0);
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
          namespace utilities {
            static PyObject *t_CjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CjSjCoefficient_init_(t_CjSjCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CjSjCoefficient_getCj(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDcjDh(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDcjDk(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDsjDh(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDsjDk(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getSj(t_CjSjCoefficient *self, PyObject *arg);

            static PyMethodDef t_CjSjCoefficient__methods_[] = {
              DECLARE_METHOD(t_CjSjCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CjSjCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CjSjCoefficient, getCj, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDcjDh, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDcjDk, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDsjDh, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDsjDk, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getSj, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CjSjCoefficient)[] = {
              { Py_tp_methods, t_CjSjCoefficient__methods_ },
              { Py_tp_init, (void *) t_CjSjCoefficient_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CjSjCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CjSjCoefficient, t_CjSjCoefficient, CjSjCoefficient);

            void t_CjSjCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(CjSjCoefficient), &PY_TYPE_DEF(CjSjCoefficient), module, "CjSjCoefficient", 0);
            }

            void t_CjSjCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "class_", make_descriptor(CjSjCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "wrapfn_", make_descriptor(t_CjSjCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CjSjCoefficient::initializeClass, 1)))
                return NULL;
              return t_CjSjCoefficient::wrap_Object(CjSjCoefficient(((t_CjSjCoefficient *) arg)->object.this$));
            }
            static PyObject *t_CjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CjSjCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CjSjCoefficient_init_(t_CjSjCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              CjSjCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = CjSjCoefficient(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CjSjCoefficient_getCj(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getCj(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCj", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDcjDh(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDh(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDh", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDcjDk(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDk(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDk", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDsjDh(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDh(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDh", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDsjDk(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDk(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDk", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getSj(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getSj(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSj", arg);
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03Header::class$ = NULL;
              jmethodID *SsrIgm03Header::mids$ = NULL;
              bool SsrIgm03Header::live$ = false;

              jclass SsrIgm03Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCrsIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getCrsIndicator", "()I");
                  mids$[mid_setCrsIndicator_44ed599e93e8a30c] = env->getMethodID(cls, "setCrsIndicator", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03Header::SsrIgm03Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint SsrIgm03Header::getCrsIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getCrsIndicator_55546ef6a647f39b]);
              }

              void SsrIgm03Header::setCrsIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCrsIndicator_44ed599e93e8a30c], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm03Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm03Header_init_(t_SsrIgm03Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03Header_getCrsIndicator(t_SsrIgm03Header *self);
              static PyObject *t_SsrIgm03Header_setCrsIndicator(t_SsrIgm03Header *self, PyObject *arg);
              static PyObject *t_SsrIgm03Header_get__crsIndicator(t_SsrIgm03Header *self, void *data);
              static int t_SsrIgm03Header_set__crsIndicator(t_SsrIgm03Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm03Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm03Header, crsIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Header, getCrsIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Header, setCrsIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03Header)[] = {
                { Py_tp_methods, t_SsrIgm03Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03Header_init_ },
                { Py_tp_getset, t_SsrIgm03Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm03Header, t_SsrIgm03Header, SsrIgm03Header);

              void t_SsrIgm03Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03Header), &PY_TYPE_DEF(SsrIgm03Header), module, "SsrIgm03Header", 0);
              }

              void t_SsrIgm03Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "class_", make_descriptor(SsrIgm03Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "wrapfn_", make_descriptor(t_SsrIgm03Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03Header::wrap_Object(SsrIgm03Header(((t_SsrIgm03Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm03Header_init_(t_SsrIgm03Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm03Header object((jobject) NULL);

                INT_CALL(object = SsrIgm03Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm03Header_getCrsIndicator(t_SsrIgm03Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getCrsIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm03Header_setCrsIndicator(t_SsrIgm03Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setCrsIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCrsIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Header_get__crsIndicator(t_SsrIgm03Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getCrsIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm03Header_set__crsIndicator(t_SsrIgm03Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setCrsIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "crsIndicator", arg);
                return -1;
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistoryMetadataKey::class$ = NULL;
              jmethodID *OrbitManeuverHistoryMetadataKey::mids$ = NULL;
              bool OrbitManeuverHistoryMetadataKey::live$ = false;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::COMMENT = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_BODY_FRAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_BODY_TRIGGER = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_EXEC_START = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_EXEC_STOP = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_MAX_CYCLES = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_MIN_CYCLES = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_PA_START_ANGLE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_PA_STOP_ANGLE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_REF_DIR = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_REF_TIME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_DURATION = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_PERIOD = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TYPE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_WIN_CLOSE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_WIN_OPEN = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::GRAV_ASSIST_NAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_BASIS = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_BASIS_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_COMPOSITION = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_DEVICE_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_FRAME_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_NEXT_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_NEXT_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PRED_SOURCE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PREV_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PREV_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PURPOSE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_REF_FRAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_UNITS = NULL;

              jclass OrbitManeuverHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_13ba7e66b60ab39f] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;)Z");
                  mids$[mid_valueOf_dbbc817678e3e033] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;");
                  mids$[mid_values_a1b242dceb8e7049] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_BODY_FRAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_BODY_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_BODY_TRIGGER = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_BODY_TRIGGER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_EXEC_START = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_EXEC_START", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_EXEC_STOP = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_EXEC_STOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_MAX_CYCLES = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_MAX_CYCLES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_MIN_CYCLES = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_MIN_CYCLES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_PA_START_ANGLE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_PA_START_ANGLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_PA_STOP_ANGLE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_PA_STOP_ANGLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_REF_DIR = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_REF_DIR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_REF_TIME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_REF_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TIME_PULSE_DURATION = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TIME_PULSE_DURATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TIME_PULSE_PERIOD = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TIME_PULSE_PERIOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TYPE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_WIN_CLOSE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_WIN_CLOSE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_WIN_OPEN = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_WIN_OPEN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  GRAV_ASSIST_NAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "GRAV_ASSIST_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_BASIS = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_BASIS_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_COMPOSITION = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_COMPOSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_DEVICE_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_DEVICE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_FRAME_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_NEXT_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_NEXT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_NEXT_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PRED_SOURCE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PRED_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PREV_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PREV_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PREV_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PURPOSE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PURPOSE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_REF_FRAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_UNITS = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitManeuverHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_13ba7e66b60ab39f], a0.this$, a1.this$, a2.this$);
              }

              OrbitManeuverHistoryMetadataKey OrbitManeuverHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitManeuverHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dbbc817678e3e033], a0.this$));
              }

              JArray< OrbitManeuverHistoryMetadataKey > OrbitManeuverHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitManeuverHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_a1b242dceb8e7049]));
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
              static PyObject *t_OrbitManeuverHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_of_(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_process(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_get__parameters_(t_OrbitManeuverHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_OrbitManeuverHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuverHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistoryMetadataKey)[] = {
                { Py_tp_methods, t_OrbitManeuverHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitManeuverHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistoryMetadataKey, t_OrbitManeuverHistoryMetadataKey, OrbitManeuverHistoryMetadataKey);
              PyObject *t_OrbitManeuverHistoryMetadataKey::wrap_Object(const OrbitManeuverHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitManeuverHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitManeuverHistoryMetadataKey *self = (t_OrbitManeuverHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitManeuverHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitManeuverHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitManeuverHistoryMetadataKey *self = (t_OrbitManeuverHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitManeuverHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistoryMetadataKey), &PY_TYPE_DEF(OrbitManeuverHistoryMetadataKey), module, "OrbitManeuverHistoryMetadataKey", 0);
              }

              void t_OrbitManeuverHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "class_", make_descriptor(OrbitManeuverHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "wrapfn_", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitManeuverHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "COMMENT", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_BODY_FRAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_BODY_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_BODY_TRIGGER", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_BODY_TRIGGER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_EXEC_START", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_EXEC_START)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_EXEC_STOP", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_EXEC_STOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_MAX_CYCLES", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_MAX_CYCLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_MIN_CYCLES", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_MIN_CYCLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_PA_START_ANGLE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_PA_START_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_PA_STOP_ANGLE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_PA_STOP_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_REF_DIR", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_REF_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_REF_TIME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_REF_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TIME_PULSE_DURATION", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TIME_PULSE_PERIOD", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_PERIOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TYPE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_WIN_CLOSE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_WIN_CLOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_WIN_OPEN", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_WIN_OPEN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "GRAV_ASSIST_NAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::GRAV_ASSIST_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_BASIS", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_BASIS_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_COMPOSITION", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_COMPOSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_DEVICE_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_DEVICE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_FRAME_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_NEXT_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_NEXT_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_NEXT_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PRED_SOURCE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PRED_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PREV_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PREV_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PREV_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PURPOSE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PURPOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_REF_FRAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_UNITS", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_UNITS)));
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistoryMetadataKey::wrap_Object(OrbitManeuverHistoryMetadataKey(((t_OrbitManeuverHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_of_(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_process(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitManeuverHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadataKey::valueOf(a0));
                  return t_OrbitManeuverHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< OrbitManeuverHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitManeuverHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_OrbitManeuverHistoryMetadataKey_get__parameters_(t_OrbitManeuverHistoryMetadataKey *self, void *data)
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
#include "java/io/Reader.h"
#include "java/lang/Readable.h"
#include "java/io/Reader.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/Writer.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Reader::class$ = NULL;
    jmethodID *Reader::mids$ = NULL;
    bool Reader::live$ = false;

    jclass Reader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Reader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_44ed599e93e8a30c] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_9ab94ac1dc23b105] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_nullReader_b2bc6d3e210c2dd4] = env->getStaticMethodID(cls, "nullReader", "()Ljava/io/Reader;");
        mids$[mid_read_55546ef6a647f39b] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_cedc4c6898e22fb4] = env->getMethodID(cls, "read", "([C)I");
        mids$[mid_read_a45a4db28976f262] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_9ab94ac1dc23b105] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_9db63109f74a74fc] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_transferTo_1da1e24641b39913] = env->getMethodID(cls, "transferTo", "(Ljava/io/Writer;)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Reader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void Reader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_44ed599e93e8a30c], a0);
    }

    jboolean Reader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_9ab94ac1dc23b105]);
    }

    Reader Reader::nullReader()
    {
      jclass cls = env->getClass(initializeClass);
      return Reader(env->callStaticObjectMethod(cls, mids$[mid_nullReader_b2bc6d3e210c2dd4]));
    }

    jint Reader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_55546ef6a647f39b]);
    }

    jint Reader::read(const JArray< jchar > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_cedc4c6898e22fb4], a0.this$);
    }

    jint Reader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_a45a4db28976f262], a0.this$, a1, a2);
    }

    jboolean Reader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_9ab94ac1dc23b105]);
    }

    void Reader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_a1fa5dae97ea5ed2]);
    }

    jlong Reader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_9db63109f74a74fc], a0);
    }

    jlong Reader::transferTo(const ::java::io::Writer & a0) const
    {
      return env->callLongMethod(this$, mids$[mid_transferTo_1da1e24641b39913], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Reader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Reader_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Reader_close(t_Reader *self);
    static PyObject *t_Reader_mark(t_Reader *self, PyObject *arg);
    static PyObject *t_Reader_markSupported(t_Reader *self);
    static PyObject *t_Reader_nullReader(PyTypeObject *type);
    static PyObject *t_Reader_read(t_Reader *self, PyObject *args);
    static PyObject *t_Reader_ready(t_Reader *self);
    static PyObject *t_Reader_reset(t_Reader *self);
    static PyObject *t_Reader_skip(t_Reader *self, PyObject *arg);
    static PyObject *t_Reader_transferTo(t_Reader *self, PyObject *arg);

    static PyMethodDef t_Reader__methods_[] = {
      DECLARE_METHOD(t_Reader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Reader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Reader, close, METH_NOARGS),
      DECLARE_METHOD(t_Reader, mark, METH_O),
      DECLARE_METHOD(t_Reader, markSupported, METH_NOARGS),
      DECLARE_METHOD(t_Reader, nullReader, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Reader, read, METH_VARARGS),
      DECLARE_METHOD(t_Reader, ready, METH_NOARGS),
      DECLARE_METHOD(t_Reader, reset, METH_NOARGS),
      DECLARE_METHOD(t_Reader, skip, METH_O),
      DECLARE_METHOD(t_Reader, transferTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Reader)[] = {
      { Py_tp_methods, t_Reader__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Reader)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Reader, t_Reader, Reader);

    void t_Reader::install(PyObject *module)
    {
      installType(&PY_TYPE(Reader), &PY_TYPE_DEF(Reader), module, "Reader", 0);
    }

    void t_Reader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "class_", make_descriptor(Reader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "wrapfn_", make_descriptor(t_Reader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Reader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Reader::initializeClass, 1)))
        return NULL;
      return t_Reader::wrap_Object(Reader(((t_Reader *) arg)->object.this$));
    }
    static PyObject *t_Reader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Reader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Reader_close(t_Reader *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_Reader_mark(t_Reader *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "mark", arg);
      return NULL;
    }

    static PyObject *t_Reader_markSupported(t_Reader *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.markSupported());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Reader_nullReader(PyTypeObject *type)
    {
      Reader result((jobject) NULL);
      OBJ_CALL(result = ::java::io::Reader::nullReader());
      return t_Reader::wrap_Object(result);
    }

    static PyObject *t_Reader_read(t_Reader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
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
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_Reader_ready(t_Reader *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.ready());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Reader_reset(t_Reader *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_Reader_skip(t_Reader *self, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skip", arg);
      return NULL;
    }

    static PyObject *t_Reader_transferTo(t_Reader *self, PyObject *arg)
    {
      ::java::io::Writer a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "k", ::java::io::Writer::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.transferTo(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "transferTo", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Writer.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/files/sp3/SP3.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Writer::class$ = NULL;
        jmethodID *SP3Writer::mids$ = NULL;
        bool SP3Writer::live$ = false;

        jclass SP3Writer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Writer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4a8a93da906aeadb] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_write_3350f7bf9bffa448] = env->getMethodID(cls, "write", "(Lorg/orekit/files/sp3/SP3;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Writer::SP3Writer(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4a8a93da906aeadb, a0.this$, a1.this$, a2.this$)) {}

        void SP3Writer::write(const ::org::orekit::files::sp3::SP3 & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_write_3350f7bf9bffa448], a0.this$);
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
      namespace sp3 {
        static PyObject *t_SP3Writer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Writer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Writer_init_(t_SP3Writer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Writer_write(t_SP3Writer *self, PyObject *arg);

        static PyMethodDef t_SP3Writer__methods_[] = {
          DECLARE_METHOD(t_SP3Writer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Writer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Writer, write, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Writer)[] = {
          { Py_tp_methods, t_SP3Writer__methods_ },
          { Py_tp_init, (void *) t_SP3Writer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Writer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Writer, t_SP3Writer, SP3Writer);

        void t_SP3Writer::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Writer), &PY_TYPE_DEF(SP3Writer), module, "SP3Writer", 0);
        }

        void t_SP3Writer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "class_", make_descriptor(SP3Writer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "wrapfn_", make_descriptor(t_SP3Writer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Writer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Writer::initializeClass, 1)))
            return NULL;
          return t_SP3Writer::wrap_Object(SP3Writer(((t_SP3Writer *) arg)->object.this$));
        }
        static PyObject *t_SP3Writer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Writer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Writer_init_(t_SP3Writer *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::Appendable a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::time::TimeScales a2((jobject) NULL);
          SP3Writer object((jobject) NULL);

          if (!parseArgs(args, "ksk", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = SP3Writer(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Writer_write(t_SP3Writer *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3 a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3::initializeClass, &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *RuntimeException::class$ = NULL;
    jmethodID *RuntimeException::mids$ = NULL;
    bool RuntimeException::live$ = false;

    jclass RuntimeException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/RuntimeException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    RuntimeException::RuntimeException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    RuntimeException::RuntimeException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    RuntimeException::RuntimeException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

    RuntimeException::RuntimeException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_RuntimeException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_RuntimeException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_RuntimeException_init_(t_RuntimeException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_RuntimeException__methods_[] = {
      DECLARE_METHOD(t_RuntimeException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_RuntimeException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(RuntimeException)[] = {
      { Py_tp_methods, t_RuntimeException__methods_ },
      { Py_tp_init, (void *) t_RuntimeException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(RuntimeException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(RuntimeException, t_RuntimeException, RuntimeException);

    void t_RuntimeException::install(PyObject *module)
    {
      installType(&PY_TYPE(RuntimeException), &PY_TYPE_DEF(RuntimeException), module, "RuntimeException", 0);
    }

    void t_RuntimeException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "class_", make_descriptor(RuntimeException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "wrapfn_", make_descriptor(t_RuntimeException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_RuntimeException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, RuntimeException::initializeClass, 1)))
        return NULL;
      return t_RuntimeException::wrap_Object(RuntimeException(((t_RuntimeException *) arg)->object.this$));
    }
    static PyObject *t_RuntimeException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, RuntimeException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_RuntimeException_init_(t_RuntimeException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          RuntimeException object((jobject) NULL);

          INT_CALL(object = RuntimeException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = RuntimeException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = RuntimeException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = RuntimeException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/MidpointIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *MidpointIntegratorBuilder::class$ = NULL;
        jmethodID *MidpointIntegratorBuilder::mids$ = NULL;
        bool MidpointIntegratorBuilder::live$ = false;

        jclass MidpointIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/MidpointIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointIntegratorBuilder::MidpointIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator MidpointIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_916fa199ca08d656], a0.this$, a1.this$));
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
      namespace conversion {
        static PyObject *t_MidpointIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidpointIntegratorBuilder_init_(t_MidpointIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointIntegratorBuilder_buildIntegrator(t_MidpointIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_MidpointIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_MidpointIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointIntegratorBuilder)[] = {
          { Py_tp_methods, t_MidpointIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_MidpointIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MidpointIntegratorBuilder, t_MidpointIntegratorBuilder, MidpointIntegratorBuilder);

        void t_MidpointIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointIntegratorBuilder), &PY_TYPE_DEF(MidpointIntegratorBuilder), module, "MidpointIntegratorBuilder", 0);
        }

        void t_MidpointIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "class_", make_descriptor(MidpointIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "wrapfn_", make_descriptor(t_MidpointIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_MidpointIntegratorBuilder::wrap_Object(MidpointIntegratorBuilder(((t_MidpointIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_MidpointIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidpointIntegratorBuilder_init_(t_MidpointIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          MidpointIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = MidpointIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointIntegratorBuilder_buildIntegrator(t_MidpointIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunction$Parametric::class$ = NULL;
        jmethodID *PolynomialFunction$Parametric::mids$ = NULL;
        bool PolynomialFunction$Parametric::live$ = false;

        jclass PolynomialFunction$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_91fbb4072ae7ce9a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_e45651f63bcd931a] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunction$Parametric::PolynomialFunction$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        JArray< jdouble > PolynomialFunction$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_91fbb4072ae7ce9a], a0, a1.this$));
        }

        jdouble PolynomialFunction$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
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
      namespace polynomials {
        static PyObject *t_PolynomialFunction$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunction$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunction$Parametric_init_(t_PolynomialFunction$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunction$Parametric_gradient(t_PolynomialFunction$Parametric *self, PyObject *args);
        static PyObject *t_PolynomialFunction$Parametric_value(t_PolynomialFunction$Parametric *self, PyObject *args);

        static PyMethodDef t_PolynomialFunction$Parametric__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunction$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunction$Parametric)[] = {
          { Py_tp_methods, t_PolynomialFunction$Parametric__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunction$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunction$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunction$Parametric, t_PolynomialFunction$Parametric, PolynomialFunction$Parametric);

        void t_PolynomialFunction$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunction$Parametric), &PY_TYPE_DEF(PolynomialFunction$Parametric), module, "PolynomialFunction$Parametric", 0);
        }

        void t_PolynomialFunction$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "class_", make_descriptor(PolynomialFunction$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "wrapfn_", make_descriptor(t_PolynomialFunction$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunction$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunction$Parametric::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunction$Parametric::wrap_Object(PolynomialFunction$Parametric(((t_PolynomialFunction$Parametric *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunction$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunction$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunction$Parametric_init_(t_PolynomialFunction$Parametric *self, PyObject *args, PyObject *kwds)
        {
          PolynomialFunction$Parametric object((jobject) NULL);

          INT_CALL(object = PolynomialFunction$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_PolynomialFunction$Parametric_gradient(t_PolynomialFunction$Parametric *self, PyObject *args)
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

        static PyObject *t_PolynomialFunction$Parametric_value(t_PolynomialFunction$Parametric *self, PyObject *args)
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
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoadingCoefficientsBLQFactory::class$ = NULL;
          jmethodID *OceanLoadingCoefficientsBLQFactory::mids$ = NULL;
          bool OceanLoadingCoefficientsBLQFactory::live$ = false;
          ::java::lang::String *OceanLoadingCoefficientsBLQFactory::DEFAULT_BLQ_SUPPORTED_NAMES = NULL;

          jclass OceanLoadingCoefficientsBLQFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_0343d25c5af74eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getCoefficients_2e5caba2c57755ee] = env->getMethodID(cls, "getCoefficients", "(Ljava/lang/String;)Lorg/orekit/models/earth/displacement/OceanLoadingCoefficients;");
              mids$[mid_getSites_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSites", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_BLQ_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_BLQ_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoadingCoefficientsBLQFactory::OceanLoadingCoefficientsBLQFactory(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

          OceanLoadingCoefficientsBLQFactory::OceanLoadingCoefficientsBLQFactory(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0343d25c5af74eca, a0.this$, a1.this$)) {}

          ::org::orekit::models::earth::displacement::OceanLoadingCoefficients OceanLoadingCoefficientsBLQFactory::getCoefficients(const ::java::lang::String & a0) const
          {
            return ::org::orekit::models::earth::displacement::OceanLoadingCoefficients(env->callObjectMethod(this$, mids$[mid_getCoefficients_2e5caba2c57755ee], a0.this$));
          }

          ::java::util::List OceanLoadingCoefficientsBLQFactory::getSites() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSites_e62d3bb06d56d7e3]));
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
    namespace models {
      namespace earth {
        namespace displacement {
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoadingCoefficientsBLQFactory_init_(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getCoefficients(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getSites(t_OceanLoadingCoefficientsBLQFactory *self);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_get__sites(t_OceanLoadingCoefficientsBLQFactory *self, void *data);
          static PyGetSetDef t_OceanLoadingCoefficientsBLQFactory__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadingCoefficientsBLQFactory, sites),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadingCoefficientsBLQFactory__methods_[] = {
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, getCoefficients, METH_O),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, getSites, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadingCoefficientsBLQFactory)[] = {
            { Py_tp_methods, t_OceanLoadingCoefficientsBLQFactory__methods_ },
            { Py_tp_init, (void *) t_OceanLoadingCoefficientsBLQFactory_init_ },
            { Py_tp_getset, t_OceanLoadingCoefficientsBLQFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadingCoefficientsBLQFactory)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(OceanLoadingCoefficientsBLQFactory, t_OceanLoadingCoefficientsBLQFactory, OceanLoadingCoefficientsBLQFactory);

          void t_OceanLoadingCoefficientsBLQFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadingCoefficientsBLQFactory), &PY_TYPE_DEF(OceanLoadingCoefficientsBLQFactory), module, "OceanLoadingCoefficientsBLQFactory", 0);
          }

          void t_OceanLoadingCoefficientsBLQFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "class_", make_descriptor(OceanLoadingCoefficientsBLQFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "wrapfn_", make_descriptor(t_OceanLoadingCoefficientsBLQFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(OceanLoadingCoefficientsBLQFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "DEFAULT_BLQ_SUPPORTED_NAMES", make_descriptor(j2p(*OceanLoadingCoefficientsBLQFactory::DEFAULT_BLQ_SUPPORTED_NAMES)));
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadingCoefficientsBLQFactory::initializeClass, 1)))
              return NULL;
            return t_OceanLoadingCoefficientsBLQFactory::wrap_Object(OceanLoadingCoefficientsBLQFactory(((t_OceanLoadingCoefficientsBLQFactory *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadingCoefficientsBLQFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoadingCoefficientsBLQFactory_init_(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                OceanLoadingCoefficientsBLQFactory object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = OceanLoadingCoefficientsBLQFactory(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                OceanLoadingCoefficientsBLQFactory object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = OceanLoadingCoefficientsBLQFactory(a0, a1));
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

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getCoefficients(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::models::earth::displacement::OceanLoadingCoefficients result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.getCoefficients(a0));
              return ::org::orekit::models::earth::displacement::t_OceanLoadingCoefficients::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getCoefficients", arg);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getSites(t_OceanLoadingCoefficientsBLQFactory *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSites());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_get__sites(t_OceanLoadingCoefficientsBLQFactory *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSites());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02::class$ = NULL;
              jmethodID *SsrIgm02::mids$ = NULL;
              bool SsrIgm02::live$ = false;

              jclass SsrIgm02::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d186280b3ba694f4] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm02Data_810bed48fafb0b9a] = env->getMethodID(cls, "getSsrIgm02Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02::SsrIgm02(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_d186280b3ba694f4, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm02::getSsrIgm02Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm02Data_810bed48fafb0b9a]));
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm02_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02_of_(t_SsrIgm02 *self, PyObject *args);
              static int t_SsrIgm02_init_(t_SsrIgm02 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm02_getSsrIgm02Data(t_SsrIgm02 *self);
              static PyObject *t_SsrIgm02_get__ssrIgm02Data(t_SsrIgm02 *self, void *data);
              static PyObject *t_SsrIgm02_get__parameters_(t_SsrIgm02 *self, void *data);
              static PyGetSetDef t_SsrIgm02__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm02, ssrIgm02Data),
                DECLARE_GET_FIELD(t_SsrIgm02, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm02__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm02, getSsrIgm02Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02)[] = {
                { Py_tp_methods, t_SsrIgm02__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02_init_ },
                { Py_tp_getset, t_SsrIgm02__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm02, t_SsrIgm02, SsrIgm02);
              PyObject *t_SsrIgm02::wrap_Object(const SsrIgm02& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm02::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm02 *self = (t_SsrIgm02 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm02::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm02::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm02 *self = (t_SsrIgm02 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm02::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02), &PY_TYPE_DEF(SsrIgm02), module, "SsrIgm02", 0);
              }

              void t_SsrIgm02::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "class_", make_descriptor(SsrIgm02::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "wrapfn_", make_descriptor(t_SsrIgm02::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02::wrap_Object(SsrIgm02(((t_SsrIgm02 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm02_of_(t_SsrIgm02 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm02_init_(t_SsrIgm02 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm02 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm02(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm02Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm02Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm02_getSsrIgm02Data(t_SsrIgm02 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm02Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm02_get__parameters_(t_SsrIgm02 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm02_get__ssrIgm02Data(t_SsrIgm02 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm02Data());
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
#include "org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractCycleSlipDetector::class$ = NULL;
          jmethodID *AbstractCycleSlipDetector::mids$ = NULL;
          bool AbstractCycleSlipDetector::live$ = false;

          jclass AbstractCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_detect_d1fc3c05f458e1a3] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");
              mids$[mid_cycleSlipDataSet_6ac7265223ac326f] = env->getMethodID(cls, "cycleSlipDataSet", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/gnss/Frequency;)V");
              mids$[mid_getResults_e62d3bb06d56d7e3] = env->getMethodID(cls, "getResults", "()Ljava/util/List;");
              mids$[mid_getStuffReference_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStuffReference", "()Ljava/util/List;");
              mids$[mid_getMaxTimeBeetween2Measurement_b74f83833fdad017] = env->getMethodID(cls, "getMaxTimeBeetween2Measurement", "()D");
              mids$[mid_getMinMeasurementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getMinMeasurementNumber", "()I");
              mids$[mid_manageData_e95b94a72b1c921a] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_setName_c8f78fa2214ae788] = env->getMethodID(cls, "setName", "(ILorg/orekit/gnss/SatelliteSystem;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List AbstractCycleSlipDetector::detect(const ::java::util::List & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_detect_d1fc3c05f458e1a3], a0.this$));
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
          static PyObject *t_AbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractCycleSlipDetector_detect(t_AbstractCycleSlipDetector *self, PyObject *arg);

          static PyMethodDef t_AbstractCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_AbstractCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractCycleSlipDetector, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractCycleSlipDetector, detect, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractCycleSlipDetector)[] = {
            { Py_tp_methods, t_AbstractCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractCycleSlipDetector, t_AbstractCycleSlipDetector, AbstractCycleSlipDetector);

          void t_AbstractCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractCycleSlipDetector), &PY_TYPE_DEF(AbstractCycleSlipDetector), module, "AbstractCycleSlipDetector", 0);
          }

          void t_AbstractCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "class_", make_descriptor(AbstractCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "wrapfn_", make_descriptor(t_AbstractCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_AbstractCycleSlipDetector::wrap_Object(AbstractCycleSlipDetector(((t_AbstractCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_AbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractCycleSlipDetector_detect(t_AbstractCycleSlipDetector *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.detect(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
            }

            PyErr_SetArgsError((PyObject *) self, "detect", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplexUnivariateIntegrator::class$ = NULL;
      jmethodID *FieldComplexUnivariateIntegrator::mids$ = NULL;
      bool FieldComplexUnivariateIntegrator::live$ = false;

      jclass FieldComplexUnivariateIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplexUnivariateIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bfa8c3de537fe155] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;)V");
          mids$[mid_integrate_e8b296115a497457] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/FieldComplex;[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_integrate_8daa69e2f042f9b7] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldComplexUnivariateIntegrator::FieldComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bfa8c3de537fe155, a0.this$)) {}

      ::org::hipparchus::complex::FieldComplex FieldComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::FieldComplex & a2, const JArray< ::org::hipparchus::complex::FieldComplex > & a3) const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_integrate_e8b296115a497457], a0, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3) const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_integrate_8daa69e2f042f9b7], a0, a1.this$, a2.this$, a3.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_FieldComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexUnivariateIntegrator_of_(t_FieldComplexUnivariateIntegrator *self, PyObject *args);
      static int t_FieldComplexUnivariateIntegrator_init_(t_FieldComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldComplexUnivariateIntegrator_integrate(t_FieldComplexUnivariateIntegrator *self, PyObject *args);
      static PyObject *t_FieldComplexUnivariateIntegrator_get__parameters_(t_FieldComplexUnivariateIntegrator *self, void *data);
      static PyGetSetDef t_FieldComplexUnivariateIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplexUnivariateIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplexUnivariateIntegrator__methods_[] = {
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, integrate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplexUnivariateIntegrator)[] = {
        { Py_tp_methods, t_FieldComplexUnivariateIntegrator__methods_ },
        { Py_tp_init, (void *) t_FieldComplexUnivariateIntegrator_init_ },
        { Py_tp_getset, t_FieldComplexUnivariateIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplexUnivariateIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplexUnivariateIntegrator, t_FieldComplexUnivariateIntegrator, FieldComplexUnivariateIntegrator);
      PyObject *t_FieldComplexUnivariateIntegrator::wrap_Object(const FieldComplexUnivariateIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexUnivariateIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexUnivariateIntegrator *self = (t_FieldComplexUnivariateIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplexUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexUnivariateIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexUnivariateIntegrator *self = (t_FieldComplexUnivariateIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplexUnivariateIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplexUnivariateIntegrator), &PY_TYPE_DEF(FieldComplexUnivariateIntegrator), module, "FieldComplexUnivariateIntegrator", 0);
      }

      void t_FieldComplexUnivariateIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "class_", make_descriptor(FieldComplexUnivariateIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "wrapfn_", make_descriptor(t_FieldComplexUnivariateIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplexUnivariateIntegrator::initializeClass, 1)))
          return NULL;
        return t_FieldComplexUnivariateIntegrator::wrap_Object(FieldComplexUnivariateIntegrator(((t_FieldComplexUnivariateIntegrator *) arg)->object.this$));
      }
      static PyObject *t_FieldComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplexUnivariateIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_of_(t_FieldComplexUnivariateIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldComplexUnivariateIntegrator_init_(t_FieldComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplexUnivariateIntegrator object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_))
        {
          INT_CALL(object = FieldComplexUnivariateIntegrator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_integrate(t_FieldComplexUnivariateIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::complex::FieldComplex > a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "IKK[K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }
      static PyObject *t_FieldComplexUnivariateIntegrator_get__parameters_(t_FieldComplexUnivariateIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonBoundedAttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonBoundedAttitudeProvider::class$ = NULL;
      jmethodID *PythonBoundedAttitudeProvider::mids$ = NULL;
      bool PythonBoundedAttitudeProvider::live$ = false;

      jclass PythonBoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonBoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBoundedAttitudeProvider::PythonBoundedAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonBoundedAttitudeProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonBoundedAttitudeProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonBoundedAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBoundedAttitudeProvider_init_(t_PythonBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBoundedAttitudeProvider_finalize(t_PythonBoundedAttitudeProvider *self);
      static PyObject *t_PythonBoundedAttitudeProvider_pythonExtension(t_PythonBoundedAttitudeProvider *self, PyObject *args);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMaxDate2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMinDate3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonBoundedAttitudeProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonBoundedAttitudeProvider_get__self(t_PythonBoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_PythonBoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBoundedAttitudeProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_PythonBoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_PythonBoundedAttitudeProvider_init_ },
        { Py_tp_getset, t_PythonBoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBoundedAttitudeProvider, t_PythonBoundedAttitudeProvider, PythonBoundedAttitudeProvider);

      void t_PythonBoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBoundedAttitudeProvider), &PY_TYPE_DEF(PythonBoundedAttitudeProvider), module, "PythonBoundedAttitudeProvider", 1);
      }

      void t_PythonBoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "class_", make_descriptor(PythonBoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "wrapfn_", make_descriptor(t_PythonBoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBoundedAttitudeProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonBoundedAttitudeProvider_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonBoundedAttitudeProvider_getAttitude1 },
          { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedAttitudeProvider_getMaxDate2 },
          { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedAttitudeProvider_getMinDate3 },
          { "pythonDecRef", "()V", (void *) t_PythonBoundedAttitudeProvider_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_PythonBoundedAttitudeProvider::wrap_Object(PythonBoundedAttitudeProvider(((t_PythonBoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBoundedAttitudeProvider_init_(t_PythonBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonBoundedAttitudeProvider object((jobject) NULL);

        INT_CALL(object = PythonBoundedAttitudeProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBoundedAttitudeProvider_finalize(t_PythonBoundedAttitudeProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBoundedAttitudeProvider_pythonExtension(t_PythonBoundedAttitudeProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMaxDate2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMaxDate", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMinDate3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMinDate", result);
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

      static void JNICALL t_PythonBoundedAttitudeProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonBoundedAttitudeProvider_get__self(t_PythonBoundedAttitudeProvider *self, void *data)
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
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoadingCoefficients::class$ = NULL;
          jmethodID *OceanLoadingCoefficients::mids$ = NULL;
          bool OceanLoadingCoefficients::live$ = false;

          jclass OceanLoadingCoefficients::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoadingCoefficients");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_45ecc5fe392d73ba] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;[[Lorg/orekit/models/earth/displacement/Tide;[[D[[D[[D[[D[[D[[D)V");
              mids$[mid_getNbSpecies_55546ef6a647f39b] = env->getMethodID(cls, "getNbSpecies", "()I");
              mids$[mid_getNbTides_0e7cf35192c3effe] = env->getMethodID(cls, "getNbTides", "(I)I");
              mids$[mid_getSiteLocation_963915d358b1e63a] = env->getMethodID(cls, "getSiteLocation", "()Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getSiteName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSiteName", "()Ljava/lang/String;");
              mids$[mid_getSouthAmplitude_cad98089d00f8a5b] = env->getMethodID(cls, "getSouthAmplitude", "(II)D");
              mids$[mid_getSouthPhase_cad98089d00f8a5b] = env->getMethodID(cls, "getSouthPhase", "(II)D");
              mids$[mid_getTide_eae842591bb4ca23] = env->getMethodID(cls, "getTide", "(II)Lorg/orekit/models/earth/displacement/Tide;");
              mids$[mid_getWestAmplitude_cad98089d00f8a5b] = env->getMethodID(cls, "getWestAmplitude", "(II)D");
              mids$[mid_getWestPhase_cad98089d00f8a5b] = env->getMethodID(cls, "getWestPhase", "(II)D");
              mids$[mid_getZenithAmplitude_cad98089d00f8a5b] = env->getMethodID(cls, "getZenithAmplitude", "(II)D");
              mids$[mid_getZenithPhase_cad98089d00f8a5b] = env->getMethodID(cls, "getZenithPhase", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoadingCoefficients::OceanLoadingCoefficients(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, const JArray< JArray< jdouble > > & a5, const JArray< JArray< jdouble > > & a6, const JArray< JArray< jdouble > > & a7, const JArray< JArray< jdouble > > & a8) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_45ecc5fe392d73ba, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

          jint OceanLoadingCoefficients::getNbSpecies() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbSpecies_55546ef6a647f39b]);
          }

          jint OceanLoadingCoefficients::getNbTides(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getNbTides_0e7cf35192c3effe], a0);
          }

          ::org::orekit::bodies::GeodeticPoint OceanLoadingCoefficients::getSiteLocation() const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getSiteLocation_963915d358b1e63a]));
          }

          ::java::lang::String OceanLoadingCoefficients::getSiteName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteName_1c1fa1e935d6cdcf]));
          }

          jdouble OceanLoadingCoefficients::getSouthAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSouthAmplitude_cad98089d00f8a5b], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getSouthPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSouthPhase_cad98089d00f8a5b], a0, a1);
          }

          ::org::orekit::models::earth::displacement::Tide OceanLoadingCoefficients::getTide(jint a0, jint a1) const
          {
            return ::org::orekit::models::earth::displacement::Tide(env->callObjectMethod(this$, mids$[mid_getTide_eae842591bb4ca23], a0, a1));
          }

          jdouble OceanLoadingCoefficients::getWestAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWestAmplitude_cad98089d00f8a5b], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getWestPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWestPhase_cad98089d00f8a5b], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getZenithAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZenithAmplitude_cad98089d00f8a5b], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getZenithPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZenithPhase_cad98089d00f8a5b], a0, a1);
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
    namespace models {
      namespace earth {
        namespace displacement {
          static PyObject *t_OceanLoadingCoefficients_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficients_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoadingCoefficients_init_(t_OceanLoadingCoefficients *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoadingCoefficients_getNbSpecies(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getNbTides(t_OceanLoadingCoefficients *self, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficients_getSiteLocation(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getSiteName(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getSouthAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getSouthPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getTide(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getWestAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getWestPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getZenithAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getZenithPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_get__nbSpecies(t_OceanLoadingCoefficients *self, void *data);
          static PyObject *t_OceanLoadingCoefficients_get__siteLocation(t_OceanLoadingCoefficients *self, void *data);
          static PyObject *t_OceanLoadingCoefficients_get__siteName(t_OceanLoadingCoefficients *self, void *data);
          static PyGetSetDef t_OceanLoadingCoefficients__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, nbSpecies),
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, siteLocation),
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, siteName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadingCoefficients__methods_[] = {
            DECLARE_METHOD(t_OceanLoadingCoefficients, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getNbSpecies, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getNbTides, METH_O),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSiteLocation, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSiteName, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSouthAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSouthPhase, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getTide, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getWestAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getWestPhase, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getZenithAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getZenithPhase, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadingCoefficients)[] = {
            { Py_tp_methods, t_OceanLoadingCoefficients__methods_ },
            { Py_tp_init, (void *) t_OceanLoadingCoefficients_init_ },
            { Py_tp_getset, t_OceanLoadingCoefficients__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadingCoefficients)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanLoadingCoefficients, t_OceanLoadingCoefficients, OceanLoadingCoefficients);

          void t_OceanLoadingCoefficients::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadingCoefficients), &PY_TYPE_DEF(OceanLoadingCoefficients), module, "OceanLoadingCoefficients", 0);
          }

          void t_OceanLoadingCoefficients::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "class_", make_descriptor(OceanLoadingCoefficients::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "wrapfn_", make_descriptor(t_OceanLoadingCoefficients::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanLoadingCoefficients_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadingCoefficients::initializeClass, 1)))
              return NULL;
            return t_OceanLoadingCoefficients::wrap_Object(OceanLoadingCoefficients(((t_OceanLoadingCoefficients *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadingCoefficients_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadingCoefficients::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoadingCoefficients_init_(t_OceanLoadingCoefficients *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > a2((jobject) NULL);
            JArray< JArray< jdouble > > a3((jobject) NULL);
            JArray< JArray< jdouble > > a4((jobject) NULL);
            JArray< JArray< jdouble > > a5((jobject) NULL);
            JArray< JArray< jdouble > > a6((jobject) NULL);
            JArray< JArray< jdouble > > a7((jobject) NULL);
            JArray< JArray< jdouble > > a8((jobject) NULL);
            OceanLoadingCoefficients object((jobject) NULL);

            if (!parseArgs(args, "sk[[k[[D[[D[[D[[D[[D[[D", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::models::earth::displacement::Tide::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = OceanLoadingCoefficients(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanLoadingCoefficients_getNbSpecies(t_OceanLoadingCoefficients *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbSpecies());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanLoadingCoefficients_getNbTides(t_OceanLoadingCoefficients *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getNbTides(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNbTides", arg);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getSiteLocation(t_OceanLoadingCoefficients *self)
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getSiteLocation());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          static PyObject *t_OceanLoadingCoefficients_getSiteName(t_OceanLoadingCoefficients *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSiteName());
            return j2p(result);
          }

          static PyObject *t_OceanLoadingCoefficients_getSouthAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSouthAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSouthAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getSouthPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSouthPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSouthPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getTide(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::models::earth::displacement::Tide result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTide(a0, a1));
              return ::org::orekit::models::earth::displacement::t_Tide::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTide", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getWestAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getWestAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWestAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getWestPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getWestPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWestPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getZenithAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getZenithAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getZenithAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getZenithPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getZenithPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getZenithPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_get__nbSpecies(t_OceanLoadingCoefficients *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbSpecies());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanLoadingCoefficients_get__siteLocation(t_OceanLoadingCoefficients *self, void *data)
          {
            ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
            OBJ_CALL(value = self->object.getSiteLocation());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
          }

          static PyObject *t_OceanLoadingCoefficients_get__siteName(t_OceanLoadingCoefficients *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSiteName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CartesianOrbit::class$ = NULL;
      jmethodID *CartesianOrbit::mids$ = NULL;
      bool CartesianOrbit::live$ = false;

      jclass CartesianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CartesianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_69b47a274eed440d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_18124f64d7fce8bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_bc81b5d0c2baa99c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_2a5649bc1625306e] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_b74f83833fdad017] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_b74f83833fdad017] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_b74f83833fdad017] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_b74f83833fdad017] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_b74f83833fdad017] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_b74f83833fdad017] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_b74f83833fdad017] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_b74f83833fdad017] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_b74f83833fdad017] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_b74f83833fdad017] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_b74f83833fdad017] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_b74f83833fdad017] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_b74f83833fdad017] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_b74f83833fdad017] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_9ab94ac1dc23b105] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_shiftedBy_88c84847c2a191e0] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/CartesianOrbit;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CartesianOrbit::CartesianOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_69b47a274eed440d, a0.this$)) {}

      CartesianOrbit::CartesianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_18124f64d7fce8bd, a0.this$, a1.this$, a2)) {}

      CartesianOrbit::CartesianOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_bc81b5d0c2baa99c, a0.this$, a1.this$, a2.this$, a3)) {}

      void CartesianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_2a5649bc1625306e], a0.this$, a1, a2.this$);
      }

      jdouble CartesianOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_b74f83833fdad017]);
      }

      jdouble CartesianOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_b74f83833fdad017]);
      }

      ::org::orekit::orbits::OrbitType CartesianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_c7d4737d7afca612]));
      }

      jboolean CartesianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_9ab94ac1dc23b105]);
      }

      CartesianOrbit CartesianOrbit::shiftedBy(jdouble a0) const
      {
        return CartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_88c84847c2a191e0], a0));
      }

      ::java::lang::String CartesianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_CartesianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CartesianOrbit_init_(t_CartesianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CartesianOrbit_addKeplerContribution(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getA(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getADot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getE(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEx(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialExDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEyDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHx(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHxDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHyDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getI(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getIDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLE(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLEDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLM(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLMDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLv(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLvDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getType(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_hasDerivatives(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_shiftedBy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_toString(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_get__a(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__aDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__e(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__eDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEx(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialExDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEy(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEyDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hx(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hxDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hy(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hyDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__i(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__iDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lE(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lEDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lM(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lMDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lv(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lvDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__type(t_CartesianOrbit *self, void *data);
      static PyGetSetDef t_CartesianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_CartesianOrbit, a),
        DECLARE_GET_FIELD(t_CartesianOrbit, aDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, e),
        DECLARE_GET_FIELD(t_CartesianOrbit, eDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, hx),
        DECLARE_GET_FIELD(t_CartesianOrbit, hxDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, hy),
        DECLARE_GET_FIELD(t_CartesianOrbit, hyDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, i),
        DECLARE_GET_FIELD(t_CartesianOrbit, iDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lE),
        DECLARE_GET_FIELD(t_CartesianOrbit, lEDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lM),
        DECLARE_GET_FIELD(t_CartesianOrbit, lMDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lv),
        DECLARE_GET_FIELD(t_CartesianOrbit, lvDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CartesianOrbit__methods_[] = {
        DECLARE_METHOD(t_CartesianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CartesianOrbit)[] = {
        { Py_tp_methods, t_CartesianOrbit__methods_ },
        { Py_tp_init, (void *) t_CartesianOrbit_init_ },
        { Py_tp_getset, t_CartesianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CartesianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(CartesianOrbit, t_CartesianOrbit, CartesianOrbit);

      void t_CartesianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(CartesianOrbit), &PY_TYPE_DEF(CartesianOrbit), module, "CartesianOrbit", 0);
      }

      void t_CartesianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "class_", make_descriptor(CartesianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "wrapfn_", make_descriptor(t_CartesianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CartesianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CartesianOrbit::initializeClass, 1)))
          return NULL;
        return t_CartesianOrbit::wrap_Object(CartesianOrbit(((t_CartesianOrbit *) arg)->object.this$));
      }
      static PyObject *t_CartesianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CartesianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CartesianOrbit_init_(t_CartesianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = CartesianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CartesianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CartesianOrbit(a0, a1, a2, a3));
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

      static PyObject *t_CartesianOrbit_addKeplerContribution(t_CartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_CartesianOrbit_getA(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_CartesianOrbit_getADot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getE(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEx(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialExDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEyDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHx(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHxDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHyDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getI(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_CartesianOrbit_getIDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLE(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLEDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLM(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLMDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLv(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLvDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getType(t_CartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_CartesianOrbit_hasDerivatives(t_CartesianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_CartesianOrbit_shiftedBy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble a0;
        CartesianOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_CartesianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_CartesianOrbit_toString(t_CartesianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_CartesianOrbit_get__a(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__aDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__e(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__eDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEx(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialExDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEy(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEyDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hx(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hxDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hy(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hyDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__i(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__iDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lE(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lEDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lM(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lMDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lv(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lvDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__type(t_CartesianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/EigenDecompositionNonSymmetric.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *EigenDecompositionNonSymmetric::class$ = NULL;
      jmethodID *EigenDecompositionNonSymmetric::mids$ = NULL;
      bool EigenDecompositionNonSymmetric::live$ = false;
      jdouble EigenDecompositionNonSymmetric::DEFAULT_EPSILON = (jdouble) 0;

      jclass EigenDecompositionNonSymmetric::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/EigenDecompositionNonSymmetric");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_5c88fbe0835e7c85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getD_f77d745f2128c391] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getDeterminant_2f0868cbf8c045d4] = env->getMethodID(cls, "getDeterminant", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvalue_98a65fafe34db74b] = env->getMethodID(cls, "getEigenvalue", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvalues_24cc06122e1087cf] = env->getMethodID(cls, "getEigenvalues", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvector_06abfeddf4c4a28c] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getEpsilon_b74f83833fdad017] = env->getMethodID(cls, "getEpsilon", "()D");
          mids$[mid_getV_f77d745f2128c391] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVInv_f77d745f2128c391] = env->getMethodID(cls, "getVInv", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EigenDecompositionNonSymmetric::EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      EigenDecompositionNonSymmetric::EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5c88fbe0835e7c85, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getD() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getD_f77d745f2128c391]));
      }

      ::org::hipparchus::complex::Complex EigenDecompositionNonSymmetric::getDeterminant() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getDeterminant_2f0868cbf8c045d4]));
      }

      ::org::hipparchus::complex::Complex EigenDecompositionNonSymmetric::getEigenvalue(jint a0) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getEigenvalue_98a65fafe34db74b], a0));
      }

      JArray< ::org::hipparchus::complex::Complex > EigenDecompositionNonSymmetric::getEigenvalues() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_24cc06122e1087cf]));
      }

      ::org::hipparchus::linear::FieldVector EigenDecompositionNonSymmetric::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_06abfeddf4c4a28c], a0));
      }

      jdouble EigenDecompositionNonSymmetric::getEpsilon() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEpsilon_b74f83833fdad017]);
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getVInv() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVInv_f77d745f2128c391]));
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
      static PyObject *t_EigenDecompositionNonSymmetric_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EigenDecompositionNonSymmetric_init_(t_EigenDecompositionNonSymmetric *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EigenDecompositionNonSymmetric_getD(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getDeterminant(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalue(t_EigenDecompositionNonSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalues(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvector(t_EigenDecompositionNonSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_getEpsilon(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getV(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getVInv(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_get__d(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__determinant(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__eigenvalues(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__epsilon(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__v(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__vInv(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyGetSetDef t_EigenDecompositionNonSymmetric__fields_[] = {
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, d),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, determinant),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, eigenvalues),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, epsilon),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, v),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, vInv),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EigenDecompositionNonSymmetric__methods_[] = {
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getD, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvalue, METH_O),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvector, METH_O),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEpsilon, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getV, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getVInv, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EigenDecompositionNonSymmetric)[] = {
        { Py_tp_methods, t_EigenDecompositionNonSymmetric__methods_ },
        { Py_tp_init, (void *) t_EigenDecompositionNonSymmetric_init_ },
        { Py_tp_getset, t_EigenDecompositionNonSymmetric__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EigenDecompositionNonSymmetric)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EigenDecompositionNonSymmetric, t_EigenDecompositionNonSymmetric, EigenDecompositionNonSymmetric);

      void t_EigenDecompositionNonSymmetric::install(PyObject *module)
      {
        installType(&PY_TYPE(EigenDecompositionNonSymmetric), &PY_TYPE_DEF(EigenDecompositionNonSymmetric), module, "EigenDecompositionNonSymmetric", 0);
      }

      void t_EigenDecompositionNonSymmetric::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "class_", make_descriptor(EigenDecompositionNonSymmetric::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "wrapfn_", make_descriptor(t_EigenDecompositionNonSymmetric::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "boxfn_", make_descriptor(boxObject));
        env->getClass(EigenDecompositionNonSymmetric::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "DEFAULT_EPSILON", make_descriptor(EigenDecompositionNonSymmetric::DEFAULT_EPSILON));
      }

      static PyObject *t_EigenDecompositionNonSymmetric_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EigenDecompositionNonSymmetric::initializeClass, 1)))
          return NULL;
        return t_EigenDecompositionNonSymmetric::wrap_Object(EigenDecompositionNonSymmetric(((t_EigenDecompositionNonSymmetric *) arg)->object.this$));
      }
      static PyObject *t_EigenDecompositionNonSymmetric_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EigenDecompositionNonSymmetric::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EigenDecompositionNonSymmetric_init_(t_EigenDecompositionNonSymmetric *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            EigenDecompositionNonSymmetric object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = EigenDecompositionNonSymmetric(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            EigenDecompositionNonSymmetric object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = EigenDecompositionNonSymmetric(a0, a1));
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

      static PyObject *t_EigenDecompositionNonSymmetric_getD(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getDeterminant(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getDeterminant());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalue(t_EigenDecompositionNonSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::complex::Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvalue(a0));
          return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvalue", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalues(t_EigenDecompositionNonSymmetric *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvector(t_EigenDecompositionNonSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEpsilon(t_EigenDecompositionNonSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEpsilon());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getV(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getVInv(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVInv());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__d(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__determinant(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getDeterminant());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__eigenvalues(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__epsilon(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEpsilon());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__v(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__vInv(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVInv());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonAbstractMultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonAbstractMultipleShooting::class$ = NULL;
      jmethodID *PythonAbstractMultipleShooting::mids$ = NULL;
      bool PythonAbstractMultipleShooting::live$ = false;

      jclass PythonAbstractMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonAbstractMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fcb1b7dcba0178cf] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;DIZLjava/lang/String;)V");
          mids$[mid_computeAdditionalConstraints_a16345554cd829da] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_223f424c780300ce] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAugmentedInitialState_f4730dd89e9880a0] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractMultipleShooting::PythonAbstractMultipleShooting(const ::java::util::List & a0, const ::java::util::List & a1, jdouble a2, jint a3, jboolean a4, const ::java::lang::String & a5) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_fcb1b7dcba0178cf, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

      void PythonAbstractMultipleShooting::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAbstractMultipleShooting::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAbstractMultipleShooting::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonAbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractMultipleShooting_init_(t_PythonAbstractMultipleShooting *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractMultipleShooting_finalize(t_PythonAbstractMultipleShooting *self);
      static PyObject *t_PythonAbstractMultipleShooting_pythonExtension(t_PythonAbstractMultipleShooting *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalConstraints0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractMultipleShooting_getAugmentedInitialState2(JNIEnv *jenv, jobject jobj, jint a0);
      static void JNICALL t_PythonAbstractMultipleShooting_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractMultipleShooting_get__self(t_PythonAbstractMultipleShooting *self, void *data);
      static PyGetSetDef t_PythonAbstractMultipleShooting__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractMultipleShooting, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMultipleShooting)[] = {
        { Py_tp_methods, t_PythonAbstractMultipleShooting__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractMultipleShooting_init_ },
        { Py_tp_getset, t_PythonAbstractMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractMultipleShooting)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
        NULL
      };

      DEFINE_TYPE(PythonAbstractMultipleShooting, t_PythonAbstractMultipleShooting, PythonAbstractMultipleShooting);

      void t_PythonAbstractMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractMultipleShooting), &PY_TYPE_DEF(PythonAbstractMultipleShooting), module, "PythonAbstractMultipleShooting", 1);
      }

      void t_PythonAbstractMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "class_", make_descriptor(PythonAbstractMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "wrapfn_", make_descriptor(t_PythonAbstractMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractMultipleShooting::initializeClass);
        JNINativeMethod methods[] = {
          { "computeAdditionalConstraints", "(Ljava/util/List;)[D", (void *) t_PythonAbstractMultipleShooting_computeAdditionalConstraints0 },
          { "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D", (void *) t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1 },
          { "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonAbstractMultipleShooting_getAugmentedInitialState2 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractMultipleShooting_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonAbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractMultipleShooting::wrap_Object(PythonAbstractMultipleShooting(((t_PythonAbstractMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractMultipleShooting_init_(t_PythonAbstractMultipleShooting *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jint a3;
        jboolean a4;
        ::java::lang::String a5((jobject) NULL);
        PythonAbstractMultipleShooting object((jobject) NULL);

        if (!parseArgs(args, "KKDIZs", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &a4, &a5))
        {
          INT_CALL(object = PythonAbstractMultipleShooting(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_PythonAbstractMultipleShooting_finalize(t_PythonAbstractMultipleShooting *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractMultipleShooting_pythonExtension(t_PythonAbstractMultipleShooting *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalConstraints0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
        PyObject *result = PyObject_CallMethod(obj, "computeAdditionalConstraints", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("computeAdditionalConstraints", result);
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

      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
        PyObject *result = PyObject_CallMethod(obj, "computeAdditionalJacobianMatrix", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeAdditionalJacobianMatrix", result);
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

      static jobject JNICALL t_PythonAbstractMultipleShooting_getAugmentedInitialState2(JNIEnv *jenv, jobject jobj, jint a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAugmentedInitialState", "i", (int) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("getAugmentedInitialState", result);
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

      static void JNICALL t_PythonAbstractMultipleShooting_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractMultipleShooting_get__self(t_PythonAbstractMultipleShooting *self, void *data)
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
#include "org/orekit/orbits/OrbitHermiteInterpolator.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitHermiteInterpolator::class$ = NULL;
      jmethodID *OrbitHermiteInterpolator::mids$ = NULL;
      bool OrbitHermiteInterpolator::live$ = false;

      jclass OrbitHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_92e0516c51076c2f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_5295144d3ac34660] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_7f6d7ca3076fa7fe] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getPVAFilter_63bfdcc4b7a0536c] = env->getMethodID(cls, "getPVAFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_ea364fd17b3fd043] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_92e0516c51076c2f, a0, a1.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5295144d3ac34660, a0, a1.this$, a2.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7f6d7ca3076fa7fe, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter OrbitHermiteInterpolator::getPVAFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVAFilter_63bfdcc4b7a0536c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_OrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitHermiteInterpolator_of_(t_OrbitHermiteInterpolator *self, PyObject *args);
      static int t_OrbitHermiteInterpolator_init_(t_OrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrbitHermiteInterpolator_getPVAFilter(t_OrbitHermiteInterpolator *self);
      static PyObject *t_OrbitHermiteInterpolator_get__pVAFilter(t_OrbitHermiteInterpolator *self, void *data);
      static PyObject *t_OrbitHermiteInterpolator_get__parameters_(t_OrbitHermiteInterpolator *self, void *data);
      static PyGetSetDef t_OrbitHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitHermiteInterpolator, pVAFilter),
        DECLARE_GET_FIELD(t_OrbitHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_OrbitHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, getPVAFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitHermiteInterpolator)[] = {
        { Py_tp_methods, t_OrbitHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_OrbitHermiteInterpolator_init_ },
        { Py_tp_getset, t_OrbitHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(OrbitHermiteInterpolator, t_OrbitHermiteInterpolator, OrbitHermiteInterpolator);
      PyObject *t_OrbitHermiteInterpolator::wrap_Object(const OrbitHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitHermiteInterpolator *self = (t_OrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitHermiteInterpolator *self = (t_OrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitHermiteInterpolator), &PY_TYPE_DEF(OrbitHermiteInterpolator), module, "OrbitHermiteInterpolator", 0);
      }

      void t_OrbitHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "class_", make_descriptor(OrbitHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "wrapfn_", make_descriptor(t_OrbitHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_OrbitHermiteInterpolator::wrap_Object(OrbitHermiteInterpolator(((t_OrbitHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_OrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitHermiteInterpolator_of_(t_OrbitHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrbitHermiteInterpolator_init_(t_OrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
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

      static PyObject *t_OrbitHermiteInterpolator_getPVAFilter(t_OrbitHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_OrbitHermiteInterpolator_get__parameters_(t_OrbitHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrbitHermiteInterpolator_get__pVAFilter(t_OrbitHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVectorPreservingVisitor::class$ = NULL;
      jmethodID *FieldVectorPreservingVisitor::mids$ = NULL;
      bool FieldVectorPreservingVisitor::live$ = false;

      jclass FieldVectorPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVectorPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_2ff8de927fda4153] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_a0df4b8e4ed3805e] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_3e5e9beae9eb3b27] = env->getMethodID(cls, "visit", "(ILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldVectorPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_2ff8de927fda4153]));
      }

      void FieldVectorPreservingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_a0df4b8e4ed3805e], a0, a1, a2);
      }

      void FieldVectorPreservingVisitor::visit(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_3e5e9beae9eb3b27], a0, a1.this$);
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
      static PyObject *t_FieldVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorPreservingVisitor_of_(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_end(t_FieldVectorPreservingVisitor *self);
      static PyObject *t_FieldVectorPreservingVisitor_start(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_visit(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_get__parameters_(t_FieldVectorPreservingVisitor *self, void *data);
      static PyGetSetDef t_FieldVectorPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVectorPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVectorPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVectorPreservingVisitor)[] = {
        { Py_tp_methods, t_FieldVectorPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVectorPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVectorPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVectorPreservingVisitor, t_FieldVectorPreservingVisitor, FieldVectorPreservingVisitor);
      PyObject *t_FieldVectorPreservingVisitor::wrap_Object(const FieldVectorPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorPreservingVisitor *self = (t_FieldVectorPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVectorPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorPreservingVisitor *self = (t_FieldVectorPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVectorPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVectorPreservingVisitor), &PY_TYPE_DEF(FieldVectorPreservingVisitor), module, "FieldVectorPreservingVisitor", 0);
      }

      void t_FieldVectorPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "class_", make_descriptor(FieldVectorPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "wrapfn_", make_descriptor(t_FieldVectorPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVectorPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldVectorPreservingVisitor::wrap_Object(FieldVectorPreservingVisitor(((t_FieldVectorPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVectorPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVectorPreservingVisitor_of_(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVectorPreservingVisitor_end(t_FieldVectorPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldVectorPreservingVisitor_start(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldVectorPreservingVisitor_visit(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldVectorPreservingVisitor_get__parameters_(t_FieldVectorPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader.h"
#include "org/orekit/data/DataLoader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaModelCoefficientsLoader::class$ = NULL;
          jmethodID *ViennaModelCoefficientsLoader::mids$ = NULL;
          bool ViennaModelCoefficientsLoader::live$ = false;
          ::java::lang::String *ViennaModelCoefficientsLoader::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass ViennaModelCoefficientsLoader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_94a432a96b6f2908] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/troposphere/ViennaModelType;)V");
              mids$[mid_init$_10c8955a59d23838] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/troposphere/ViennaModelType;)V");
              mids$[mid_init$_293ce9451bede7f1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/troposphere/ViennaModelType;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getA_25e1757a36c4dde2] = env->getMethodID(cls, "getA", "()[D");
              mids$[mid_getSupportedNames_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_getZenithDelay_25e1757a36c4dde2] = env->getMethodID(cls, "getZenithDelay", "()[D");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_loadViennaCoefficients_a1fa5dae97ea5ed2] = env->getMethodID(cls, "loadViennaCoefficients", "()V");
              mids$[mid_loadViennaCoefficients_0ae14a6b384129f2] = env->getMethodID(cls, "loadViennaCoefficients", "(Lorg/orekit/time/DateTimeComponents;)V");
              mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(jdouble a0, jdouble a1, const ::org::orekit::models::earth::troposphere::ViennaModelType & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_94a432a96b6f2908, a0, a1, a2.this$)) {}

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::troposphere::ViennaModelType & a3) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_10c8955a59d23838, a0.this$, a1, a2, a3.this$)) {}

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::troposphere::ViennaModelType & a3, const ::org::orekit::data::DataProvidersManager & a4) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_293ce9451bede7f1, a0.this$, a1, a2, a3.this$, a4.this$)) {}

          JArray< jdouble > ViennaModelCoefficientsLoader::getA() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getA_25e1757a36c4dde2]));
          }

          ::java::lang::String ViennaModelCoefficientsLoader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_1c1fa1e935d6cdcf]));
          }

          JArray< jdouble > ViennaModelCoefficientsLoader::getZenithDelay() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getZenithDelay_25e1757a36c4dde2]));
          }

          void ViennaModelCoefficientsLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
          }

          void ViennaModelCoefficientsLoader::loadViennaCoefficients() const
          {
            env->callVoidMethod(this$, mids$[mid_loadViennaCoefficients_a1fa5dae97ea5ed2]);
          }

          void ViennaModelCoefficientsLoader::loadViennaCoefficients(const ::org::orekit::time::DateTimeComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_loadViennaCoefficients_0ae14a6b384129f2], a0.this$);
          }

          jboolean ViennaModelCoefficientsLoader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_ViennaModelCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaModelCoefficientsLoader_init_(t_ViennaModelCoefficientsLoader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaModelCoefficientsLoader_getA(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_getSupportedNames(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_getZenithDelay(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_loadData(t_ViennaModelCoefficientsLoader *self, PyObject *args);
          static PyObject *t_ViennaModelCoefficientsLoader_loadViennaCoefficients(t_ViennaModelCoefficientsLoader *self, PyObject *args);
          static PyObject *t_ViennaModelCoefficientsLoader_stillAcceptsData(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_get__a(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyObject *t_ViennaModelCoefficientsLoader_get__supportedNames(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyObject *t_ViennaModelCoefficientsLoader_get__zenithDelay(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyGetSetDef t_ViennaModelCoefficientsLoader__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, a),
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, supportedNames),
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, zenithDelay),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaModelCoefficientsLoader__methods_[] = {
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getA, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getZenithDelay, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, loadViennaCoefficients, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaModelCoefficientsLoader)[] = {
            { Py_tp_methods, t_ViennaModelCoefficientsLoader__methods_ },
            { Py_tp_init, (void *) t_ViennaModelCoefficientsLoader_init_ },
            { Py_tp_getset, t_ViennaModelCoefficientsLoader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaModelCoefficientsLoader)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(ViennaModelCoefficientsLoader, t_ViennaModelCoefficientsLoader, ViennaModelCoefficientsLoader);

          void t_ViennaModelCoefficientsLoader::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaModelCoefficientsLoader), &PY_TYPE_DEF(ViennaModelCoefficientsLoader), module, "ViennaModelCoefficientsLoader", 0);
          }

          void t_ViennaModelCoefficientsLoader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "class_", make_descriptor(ViennaModelCoefficientsLoader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "wrapfn_", make_descriptor(t_ViennaModelCoefficientsLoader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "boxfn_", make_descriptor(boxObject));
            env->getClass(ViennaModelCoefficientsLoader::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*ViennaModelCoefficientsLoader::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_ViennaModelCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaModelCoefficientsLoader::initializeClass, 1)))
              return NULL;
            return t_ViennaModelCoefficientsLoader::wrap_Object(ViennaModelCoefficientsLoader(((t_ViennaModelCoefficientsLoader *) arg)->object.this$));
          }
          static PyObject *t_ViennaModelCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaModelCoefficientsLoader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaModelCoefficientsLoader_init_(t_ViennaModelCoefficientsLoader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::troposphere::ViennaModelType a2((jobject) NULL);
                PyTypeObject **p2;
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "DDK", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::troposphere::ViennaModelType a3((jobject) NULL);
                PyTypeObject **p3;
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sDDK", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::troposphere::ViennaModelType a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sDDKk", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_, &a4))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2, a3, a4));
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

          static PyObject *t_ViennaModelCoefficientsLoader_getA(t_ViennaModelCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getA());
            return result.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_getSupportedNames(t_ViennaModelCoefficientsLoader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_getZenithDelay(t_ViennaModelCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getZenithDelay());
            return result.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_loadData(t_ViennaModelCoefficientsLoader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_ViennaModelCoefficientsLoader_loadViennaCoefficients(t_ViennaModelCoefficientsLoader *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                OBJ_CALL(self->object.loadViennaCoefficients());
                Py_RETURN_NONE;
              }
              break;
             case 1:
              {
                ::org::orekit::time::DateTimeComponents a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.loadViennaCoefficients(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "loadViennaCoefficients", args);
            return NULL;
          }

          static PyObject *t_ViennaModelCoefficientsLoader_stillAcceptsData(t_ViennaModelCoefficientsLoader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__a(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getA());
            return value.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__supportedNames(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__zenithDelay(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getZenithDelay());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00InputParameters::class$ = NULL;
          jmethodID *NRLMSISE00InputParameters::mids$ = NULL;
          bool NRLMSISE00InputParameters::live$ = false;

          jclass NRLMSISE00InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAp_27b701db396ade01] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getAverageFlux_fd347811007a6ba3] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getDailyFlux_fd347811007a6ba3] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jdouble > NRLMSISE00InputParameters::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_27b701db396ade01], a0.this$));
          }

          jdouble NRLMSISE00InputParameters::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_fd347811007a6ba3], a0.this$);
          }

          jdouble NRLMSISE00InputParameters::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_fd347811007a6ba3], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate NRLMSISE00InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
          }

          ::org::orekit::time::AbsoluteDate NRLMSISE00InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_NRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getAp(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getAverageFlux(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getDailyFlux(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getMaxDate(t_NRLMSISE00InputParameters *self);
          static PyObject *t_NRLMSISE00InputParameters_getMinDate(t_NRLMSISE00InputParameters *self);
          static PyObject *t_NRLMSISE00InputParameters_get__maxDate(t_NRLMSISE00InputParameters *self, void *data);
          static PyObject *t_NRLMSISE00InputParameters_get__minDate(t_NRLMSISE00InputParameters *self, void *data);
          static PyGetSetDef t_NRLMSISE00InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00InputParameters, maxDate),
            DECLARE_GET_FIELD(t_NRLMSISE00InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00InputParameters__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getAp, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getAverageFlux, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getDailyFlux, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getMinDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00InputParameters)[] = {
            { Py_tp_methods, t_NRLMSISE00InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NRLMSISE00InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00InputParameters, t_NRLMSISE00InputParameters, NRLMSISE00InputParameters);

          void t_NRLMSISE00InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00InputParameters), &PY_TYPE_DEF(NRLMSISE00InputParameters), module, "NRLMSISE00InputParameters", 0);
          }

          void t_NRLMSISE00InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "class_", make_descriptor(NRLMSISE00InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "wrapfn_", make_descriptor(t_NRLMSISE00InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00InputParameters::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00InputParameters::wrap_Object(NRLMSISE00InputParameters(((t_NRLMSISE00InputParameters *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NRLMSISE00InputParameters_getAp(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAp(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAp", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getAverageFlux(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAverageFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAverageFlux", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getDailyFlux(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDailyFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDailyFlux", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getMaxDate(t_NRLMSISE00InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00InputParameters_getMinDate(t_NRLMSISE00InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00InputParameters_get__maxDate(t_NRLMSISE00InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_NRLMSISE00InputParameters_get__minDate(t_NRLMSISE00InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
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

        ::java::lang::Class *FieldEventDetector::class$ = NULL;
        jmethodID *FieldEventDetector::mids$ = NULL;
        bool FieldEventDetector::live$ = false;

        jclass FieldEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_3449c57ae1fbceff] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_d0b60c59a7966d59] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_81520b552cb3fa26] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldEventDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldEventDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_3449c57ae1fbceff]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldEventDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_d0b60c59a7966d59]));
        }

        jint FieldEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement FieldEventDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_81520b552cb3fa26]));
        }

        void FieldEventDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventDetector_of_(t_FieldEventDetector *self, PyObject *args);
        static PyObject *t_FieldEventDetector_g(t_FieldEventDetector *self, PyObject *arg);
        static PyObject *t_FieldEventDetector_getHandler(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getMaxCheckInterval(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getMaxIterationCount(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getThreshold(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_init(t_FieldEventDetector *self, PyObject *args);
        static PyObject *t_FieldEventDetector_get__handler(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__maxCheckInterval(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__maxIterationCount(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__threshold(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__parameters_(t_FieldEventDetector *self, void *data);
        static PyGetSetDef t_FieldEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventDetector, handler),
          DECLARE_GET_FIELD(t_FieldEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldEventDetector, threshold),
          DECLARE_GET_FIELD(t_FieldEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventDetector__methods_[] = {
          DECLARE_METHOD(t_FieldEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventDetector, g, METH_O),
          DECLARE_METHOD(t_FieldEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventDetector)[] = {
          { Py_tp_methods, t_FieldEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventDetector, t_FieldEventDetector, FieldEventDetector);
        PyObject *t_FieldEventDetector::wrap_Object(const FieldEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventDetector *self = (t_FieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventDetector *self = (t_FieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventDetector), &PY_TYPE_DEF(FieldEventDetector), module, "FieldEventDetector", 0);
        }

        void t_FieldEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "class_", make_descriptor(FieldEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "wrapfn_", make_descriptor(t_FieldEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventDetector::initializeClass, 1)))
            return NULL;
          return t_FieldEventDetector::wrap_Object(FieldEventDetector(((t_FieldEventDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventDetector_of_(t_FieldEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventDetector_g(t_FieldEventDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldEventDetector_getHandler(t_FieldEventDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventDetector_getMaxCheckInterval(t_FieldEventDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventDetector_getMaxIterationCount(t_FieldEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldEventDetector_getThreshold(t_FieldEventDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEventDetector_init(t_FieldEventDetector *self, PyObject *args)
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
        static PyObject *t_FieldEventDetector_get__parameters_(t_FieldEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventDetector_get__handler(t_FieldEventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldEventDetector_get__maxCheckInterval(t_FieldEventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldEventDetector_get__maxIterationCount(t_FieldEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldEventDetector_get__threshold(t_FieldEventDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbitHermiteInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbitHermiteInterpolator::class$ = NULL;
      jmethodID *FieldOrbitHermiteInterpolator::mids$ = NULL;
      bool FieldOrbitHermiteInterpolator::live$ = false;

      jclass FieldOrbitHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbitHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_92e0516c51076c2f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_5295144d3ac34660] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_7f6d7ca3076fa7fe] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getPVAFilter_63bfdcc4b7a0536c] = env->getMethodID(cls, "getPVAFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_1f8205afa87236ec] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_92e0516c51076c2f, a0, a1.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5295144d3ac34660, a0, a1.this$, a2.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7f6d7ca3076fa7fe, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter FieldOrbitHermiteInterpolator::getPVAFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVAFilter_63bfdcc4b7a0536c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldOrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitHermiteInterpolator_of_(t_FieldOrbitHermiteInterpolator *self, PyObject *args);
      static int t_FieldOrbitHermiteInterpolator_init_(t_FieldOrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldOrbitHermiteInterpolator_getPVAFilter(t_FieldOrbitHermiteInterpolator *self);
      static PyObject *t_FieldOrbitHermiteInterpolator_get__pVAFilter(t_FieldOrbitHermiteInterpolator *self, void *data);
      static PyObject *t_FieldOrbitHermiteInterpolator_get__parameters_(t_FieldOrbitHermiteInterpolator *self, void *data);
      static PyGetSetDef t_FieldOrbitHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbitHermiteInterpolator, pVAFilter),
        DECLARE_GET_FIELD(t_FieldOrbitHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbitHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, getPVAFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbitHermiteInterpolator)[] = {
        { Py_tp_methods, t_FieldOrbitHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldOrbitHermiteInterpolator_init_ },
        { Py_tp_getset, t_FieldOrbitHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbitHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractFieldOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldOrbitHermiteInterpolator, t_FieldOrbitHermiteInterpolator, FieldOrbitHermiteInterpolator);
      PyObject *t_FieldOrbitHermiteInterpolator::wrap_Object(const FieldOrbitHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitHermiteInterpolator *self = (t_FieldOrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbitHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitHermiteInterpolator *self = (t_FieldOrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbitHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbitHermiteInterpolator), &PY_TYPE_DEF(FieldOrbitHermiteInterpolator), module, "FieldOrbitHermiteInterpolator", 0);
      }

      void t_FieldOrbitHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "class_", make_descriptor(FieldOrbitHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldOrbitHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbitHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldOrbitHermiteInterpolator::wrap_Object(FieldOrbitHermiteInterpolator(((t_FieldOrbitHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbitHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_of_(t_FieldOrbitHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldOrbitHermiteInterpolator_init_(t_FieldOrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1, a2, a3));
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

      static PyObject *t_FieldOrbitHermiteInterpolator_getPVAFilter(t_FieldOrbitHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_FieldOrbitHermiteInterpolator_get__parameters_(t_FieldOrbitHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_get__pVAFilter(t_FieldOrbitHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/PythonFieldSDP4.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *PythonFieldSDP4::class$ = NULL;
          jmethodID *PythonFieldSDP4::mids$ = NULL;
          bool PythonFieldSDP4::live$ = false;

          jclass PythonFieldSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/PythonFieldSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5459c6c0c91f1c96] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_f2b4bfa0af1007e8] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepSecularEffects_f2b4bfa0af1007e8] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_luniSolarTermsComputation_a1fa5dae97ea5ed2] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldSDP4::PythonFieldSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_5459c6c0c91f1c96, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          void PythonFieldSDP4::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonFieldSDP4::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonFieldSDP4::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_PythonFieldSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldSDP4_of_(t_PythonFieldSDP4 *self, PyObject *args);
          static int t_PythonFieldSDP4_init_(t_PythonFieldSDP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldSDP4_finalize(t_PythonFieldSDP4 *self);
          static PyObject *t_PythonFieldSDP4_pythonExtension(t_PythonFieldSDP4 *self, PyObject *args);
          static void JNICALL t_PythonFieldSDP4_deepPeriodicEffects0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonFieldSDP4_deepSecularEffects1(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonFieldSDP4_luniSolarTermsComputation2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonFieldSDP4_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonFieldSDP4_get__self(t_PythonFieldSDP4 *self, void *data);
          static PyObject *t_PythonFieldSDP4_get__parameters_(t_PythonFieldSDP4 *self, void *data);
          static PyGetSetDef t_PythonFieldSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldSDP4, self),
            DECLARE_GET_FIELD(t_PythonFieldSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldSDP4__methods_[] = {
            DECLARE_METHOD(t_PythonFieldSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldSDP4, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldSDP4, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldSDP4, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldSDP4)[] = {
            { Py_tp_methods, t_PythonFieldSDP4__methods_ },
            { Py_tp_init, (void *) t_PythonFieldSDP4_init_ },
            { Py_tp_getset, t_PythonFieldSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldSDP4),
            NULL
          };

          DEFINE_TYPE(PythonFieldSDP4, t_PythonFieldSDP4, PythonFieldSDP4);
          PyObject *t_PythonFieldSDP4::wrap_Object(const PythonFieldSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldSDP4 *self = (t_PythonFieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonFieldSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldSDP4 *self = (t_PythonFieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonFieldSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldSDP4), &PY_TYPE_DEF(PythonFieldSDP4), module, "PythonFieldSDP4", 1);
          }

          void t_PythonFieldSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "class_", make_descriptor(PythonFieldSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "wrapfn_", make_descriptor(t_PythonFieldSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldSDP4::initializeClass);
            JNINativeMethod methods[] = {
              { "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldSDP4_deepPeriodicEffects0 },
              { "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldSDP4_deepSecularEffects1 },
              { "luniSolarTermsComputation", "()V", (void *) t_PythonFieldSDP4_luniSolarTermsComputation2 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldSDP4_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonFieldSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldSDP4::initializeClass, 1)))
              return NULL;
            return t_PythonFieldSDP4::wrap_Object(PythonFieldSDP4(((t_PythonFieldSDP4 *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldSDP4_of_(t_PythonFieldSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldSDP4_init_(t_PythonFieldSDP4 *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
            PyTypeObject **p4;
            PythonFieldSDP4 object((jobject) NULL);

            if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = PythonFieldSDP4(a0, a1, a2, a3, a4));
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

          static PyObject *t_PythonFieldSDP4_finalize(t_PythonFieldSDP4 *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldSDP4_pythonExtension(t_PythonFieldSDP4 *self, PyObject *args)
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

          static void JNICALL t_PythonFieldSDP4_deepPeriodicEffects0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "deepPeriodicEffects", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_deepSecularEffects1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "deepSecularEffects", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_luniSolarTermsComputation2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "luniSolarTermsComputation", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonFieldSDP4_get__self(t_PythonFieldSDP4 *self, void *data)
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
          static PyObject *t_PythonFieldSDP4_get__parameters_(t_PythonFieldSDP4 *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegratorFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldGaussIntegratorFactory::class$ = NULL;
          jmethodID *FieldGaussIntegratorFactory::mids$ = NULL;
          bool FieldGaussIntegratorFactory::live$ = false;

          jclass FieldGaussIntegratorFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldGaussIntegratorFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_hermite_59323a8d3768d228] = env->getMethodID(cls, "hermite", "(I)Lorg/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator;");
              mids$[mid_laguerre_870530ab01549db9] = env->getMethodID(cls, "laguerre", "(I)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");
              mids$[mid_legendre_870530ab01549db9] = env->getMethodID(cls, "legendre", "(I)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");
              mids$[mid_legendre_2a386e29451ec796] = env->getMethodID(cls, "legendre", "(ILorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldGaussIntegratorFactory::FieldGaussIntegratorFactory(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

          ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator FieldGaussIntegratorFactory::hermite(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_hermite_59323a8d3768d228], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::laguerre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_laguerre_870530ab01549db9], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::legendre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_870530ab01549db9], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::legendre(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_2a386e29451ec796], a0, a1.this$, a2.this$));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldGaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_of_(t_FieldGaussIntegratorFactory *self, PyObject *args);
          static int t_FieldGaussIntegratorFactory_init_(t_FieldGaussIntegratorFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldGaussIntegratorFactory_hermite(t_FieldGaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_laguerre(t_FieldGaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_legendre(t_FieldGaussIntegratorFactory *self, PyObject *args);
          static PyObject *t_FieldGaussIntegratorFactory_get__parameters_(t_FieldGaussIntegratorFactory *self, void *data);
          static PyGetSetDef t_FieldGaussIntegratorFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldGaussIntegratorFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldGaussIntegratorFactory__methods_[] = {
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, hermite, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, laguerre, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, legendre, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldGaussIntegratorFactory)[] = {
            { Py_tp_methods, t_FieldGaussIntegratorFactory__methods_ },
            { Py_tp_init, (void *) t_FieldGaussIntegratorFactory_init_ },
            { Py_tp_getset, t_FieldGaussIntegratorFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldGaussIntegratorFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldGaussIntegratorFactory, t_FieldGaussIntegratorFactory, FieldGaussIntegratorFactory);
          PyObject *t_FieldGaussIntegratorFactory::wrap_Object(const FieldGaussIntegratorFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegratorFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegratorFactory *self = (t_FieldGaussIntegratorFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldGaussIntegratorFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegratorFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegratorFactory *self = (t_FieldGaussIntegratorFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldGaussIntegratorFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldGaussIntegratorFactory), &PY_TYPE_DEF(FieldGaussIntegratorFactory), module, "FieldGaussIntegratorFactory", 0);
          }

          void t_FieldGaussIntegratorFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "class_", make_descriptor(FieldGaussIntegratorFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "wrapfn_", make_descriptor(t_FieldGaussIntegratorFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldGaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldGaussIntegratorFactory::initializeClass, 1)))
              return NULL;
            return t_FieldGaussIntegratorFactory::wrap_Object(FieldGaussIntegratorFactory(((t_FieldGaussIntegratorFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldGaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldGaussIntegratorFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldGaussIntegratorFactory_of_(t_FieldGaussIntegratorFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldGaussIntegratorFactory_init_(t_FieldGaussIntegratorFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldGaussIntegratorFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldGaussIntegratorFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldGaussIntegratorFactory_hermite(t_FieldGaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.hermite(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_SymmetricFieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "hermite", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegratorFactory_laguerre(t_FieldGaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.laguerre(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "laguerre", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegratorFactory_legendre(t_FieldGaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendre(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 3:
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.legendre(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendre", args);
            return NULL;
          }
          static PyObject *t_FieldGaussIntegratorFactory_get__parameters_(t_FieldGaussIntegratorFactory *self, void *data)
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
#include "org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/util/List.h"
#include "org/orekit/data/DataSource.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *GlobalIonosphereMapModel::class$ = NULL;
          jmethodID *GlobalIonosphereMapModel::mids$ = NULL;
          bool GlobalIonosphereMapModel::live$ = false;

          jclass GlobalIonosphereMapModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_da507b2a8ca38fd6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;[Lorg/orekit/data/DataSource;)V");
              mids$[mid_init$_41d9572e040b2cb7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_5e4bace87c721642] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_0c51f26f37c66719] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::org::orekit::time::TimeScale & a0, const JArray< ::org::orekit::data::DataSource > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_da507b2a8ca38fd6, a0.this$, a1.this$)) {}

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_41d9572e040b2cb7, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List GlobalIonosphereMapModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          jdouble GlobalIonosphereMapModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_5e4bace87c721642], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement GlobalIonosphereMapModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0c51f26f37c66719], a0.this$, a1.this$, a2, a3.this$));
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
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_GlobalIonosphereMapModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalIonosphereMapModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalIonosphereMapModel_init_(t_GlobalIonosphereMapModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalIonosphereMapModel_getParametersDrivers(t_GlobalIonosphereMapModel *self);
          static PyObject *t_GlobalIonosphereMapModel_pathDelay(t_GlobalIonosphereMapModel *self, PyObject *args);
          static PyObject *t_GlobalIonosphereMapModel_get__parametersDrivers(t_GlobalIonosphereMapModel *self, void *data);
          static PyGetSetDef t_GlobalIonosphereMapModel__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalIonosphereMapModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalIonosphereMapModel__methods_[] = {
            DECLARE_METHOD(t_GlobalIonosphereMapModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalIonosphereMapModel)[] = {
            { Py_tp_methods, t_GlobalIonosphereMapModel__methods_ },
            { Py_tp_init, (void *) t_GlobalIonosphereMapModel_init_ },
            { Py_tp_getset, t_GlobalIonosphereMapModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalIonosphereMapModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalIonosphereMapModel, t_GlobalIonosphereMapModel, GlobalIonosphereMapModel);

          void t_GlobalIonosphereMapModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalIonosphereMapModel), &PY_TYPE_DEF(GlobalIonosphereMapModel), module, "GlobalIonosphereMapModel", 0);
          }

          void t_GlobalIonosphereMapModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "class_", make_descriptor(GlobalIonosphereMapModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "wrapfn_", make_descriptor(t_GlobalIonosphereMapModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalIonosphereMapModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalIonosphereMapModel::initializeClass, 1)))
              return NULL;
            return t_GlobalIonosphereMapModel::wrap_Object(GlobalIonosphereMapModel(((t_GlobalIonosphereMapModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalIonosphereMapModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalIonosphereMapModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalIonosphereMapModel_init_(t_GlobalIonosphereMapModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                JArray< ::org::orekit::data::DataSource > a1((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "k[k", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::data::DataSource::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0, a1, a2));
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

          static PyObject *t_GlobalIonosphereMapModel_getParametersDrivers(t_GlobalIonosphereMapModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_GlobalIonosphereMapModel_pathDelay(t_GlobalIonosphereMapModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_GlobalIonosphereMapModel_get__parametersDrivers(t_GlobalIonosphereMapModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *SatelliteAntenna::class$ = NULL;
        jmethodID *SatelliteAntenna::mids$ = NULL;
        bool SatelliteAntenna::live$ = false;

        jclass SatelliteAntenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/SatelliteAntenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_012ca6d350718374] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/antenna/SatelliteType;ILjava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getCosparID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCosparID", "()Ljava/lang/String;");
            mids$[mid_getPrnNumber_55546ef6a647f39b] = env->getMethodID(cls, "getPrnNumber", "()I");
            mids$[mid_getSatelliteCode_55546ef6a647f39b] = env->getMethodID(cls, "getSatelliteCode", "()I");
            mids$[mid_getSatelliteSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSatelliteType_0385bced532642ea] = env->getMethodID(cls, "getSatelliteType", "()Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_getValidFrom_c325492395d89b24] = env->getMethodID(cls, "getValidFrom", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getValidUntil_c325492395d89b24] = env->getMethodID(cls, "getValidUntil", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SatelliteAntenna::SatelliteAntenna(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::util::Map & a2, const ::org::orekit::gnss::SatelliteSystem & a3, jint a4, const ::org::orekit::gnss::antenna::SatelliteType & a5, jint a6, const ::java::lang::String & a7, const ::org::orekit::time::AbsoluteDate & a8, const ::org::orekit::time::AbsoluteDate & a9) : ::org::orekit::gnss::antenna::Antenna(env->newObject(initializeClass, &mids$, mid_init$_012ca6d350718374, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6, a7.this$, a8.this$, a9.this$)) {}

        ::java::lang::String SatelliteAntenna::getCosparID() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCosparID_1c1fa1e935d6cdcf]));
        }

        jint SatelliteAntenna::getPrnNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getPrnNumber_55546ef6a647f39b]);
        }

        jint SatelliteAntenna::getSatelliteCode() const
        {
          return env->callIntMethod(this$, mids$[mid_getSatelliteCode_55546ef6a647f39b]);
        }

        ::org::orekit::gnss::SatelliteSystem SatelliteAntenna::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_21bd759cc4a81606]));
        }

        ::org::orekit::gnss::antenna::SatelliteType SatelliteAntenna::getSatelliteType() const
        {
          return ::org::orekit::gnss::antenna::SatelliteType(env->callObjectMethod(this$, mids$[mid_getSatelliteType_0385bced532642ea]));
        }

        ::org::orekit::time::AbsoluteDate SatelliteAntenna::getValidFrom() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidFrom_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate SatelliteAntenna::getValidUntil() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidUntil_c325492395d89b24]));
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
      namespace antenna {
        static PyObject *t_SatelliteAntenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteAntenna_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SatelliteAntenna_init_(t_SatelliteAntenna *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SatelliteAntenna_getCosparID(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getPrnNumber(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteCode(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteSystem(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteType(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getValidFrom(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getValidUntil(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_get__cosparID(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__prnNumber(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteCode(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteSystem(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteType(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__validFrom(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__validUntil(t_SatelliteAntenna *self, void *data);
        static PyGetSetDef t_SatelliteAntenna__fields_[] = {
          DECLARE_GET_FIELD(t_SatelliteAntenna, cosparID),
          DECLARE_GET_FIELD(t_SatelliteAntenna, prnNumber),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteCode),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteSystem),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteType),
          DECLARE_GET_FIELD(t_SatelliteAntenna, validFrom),
          DECLARE_GET_FIELD(t_SatelliteAntenna, validUntil),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SatelliteAntenna__methods_[] = {
          DECLARE_METHOD(t_SatelliteAntenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteAntenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteAntenna, getCosparID, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getPrnNumber, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteCode, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteType, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getValidFrom, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getValidUntil, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SatelliteAntenna)[] = {
          { Py_tp_methods, t_SatelliteAntenna__methods_ },
          { Py_tp_init, (void *) t_SatelliteAntenna_init_ },
          { Py_tp_getset, t_SatelliteAntenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SatelliteAntenna)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::antenna::Antenna),
          NULL
        };

        DEFINE_TYPE(SatelliteAntenna, t_SatelliteAntenna, SatelliteAntenna);

        void t_SatelliteAntenna::install(PyObject *module)
        {
          installType(&PY_TYPE(SatelliteAntenna), &PY_TYPE_DEF(SatelliteAntenna), module, "SatelliteAntenna", 0);
        }

        void t_SatelliteAntenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "class_", make_descriptor(SatelliteAntenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "wrapfn_", make_descriptor(t_SatelliteAntenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SatelliteAntenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SatelliteAntenna::initializeClass, 1)))
            return NULL;
          return t_SatelliteAntenna::wrap_Object(SatelliteAntenna(((t_SatelliteAntenna *) arg)->object.this$));
        }
        static PyObject *t_SatelliteAntenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SatelliteAntenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SatelliteAntenna_init_(t_SatelliteAntenna *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::util::Map a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
          PyTypeObject **p3;
          jint a4;
          ::org::orekit::gnss::antenna::SatelliteType a5((jobject) NULL);
          PyTypeObject **p5;
          jint a6;
          ::java::lang::String a7((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
          SatelliteAntenna object((jobject) NULL);

          if (!parseArgs(args, "ssKKIKIskk", ::java::util::Map::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::antenna::SatelliteType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Map::parameters_, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a4, &a5, &p5, ::org::orekit::gnss::antenna::t_SatelliteType::parameters_, &a6, &a7, &a8, &a9))
          {
            INT_CALL(object = SatelliteAntenna(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SatelliteAntenna_getCosparID(t_SatelliteAntenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getCosparID());
          return j2p(result);
        }

        static PyObject *t_SatelliteAntenna_getPrnNumber(t_SatelliteAntenna *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPrnNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteCode(t_SatelliteAntenna *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSatelliteCode());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteSystem(t_SatelliteAntenna *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteType(t_SatelliteAntenna *self)
        {
          ::org::orekit::gnss::antenna::SatelliteType result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteType());
          return ::org::orekit::gnss::antenna::t_SatelliteType::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getValidFrom(t_SatelliteAntenna *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getValidUntil(t_SatelliteAntenna *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_get__cosparID(t_SatelliteAntenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getCosparID());
          return j2p(value);
        }

        static PyObject *t_SatelliteAntenna_get__prnNumber(t_SatelliteAntenna *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPrnNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteCode(t_SatelliteAntenna *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSatelliteCode());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteSystem(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteType(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::gnss::antenna::SatelliteType value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteType());
          return ::org::orekit::gnss::antenna::t_SatelliteType::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__validFrom(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__validUntil(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/PythonTimeDerivativesEquations.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonTimeDerivativesEquations::class$ = NULL;
        jmethodID *PythonTimeDerivativesEquations::mids$ = NULL;
        bool PythonTimeDerivativesEquations::live$ = false;

        jclass PythonTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addKeplerContribution_8ba9fe7a847cecad] = env->getMethodID(cls, "addKeplerContribution", "(D)V");
            mids$[mid_addMassDerivative_8ba9fe7a847cecad] = env->getMethodID(cls, "addMassDerivative", "(D)V");
            mids$[mid_addNonKeplerianAcceleration_1844f891addbac57] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonTimeDerivativesEquations::PythonTimeDerivativesEquations() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonTimeDerivativesEquations::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonTimeDerivativesEquations::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonTimeDerivativesEquations::pythonExtension(jlong a0) const
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
      namespace numerical {
        static PyObject *t_PythonTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonTimeDerivativesEquations_init_(t_PythonTimeDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonTimeDerivativesEquations_finalize(t_PythonTimeDerivativesEquations *self);
        static PyObject *t_PythonTimeDerivativesEquations_pythonExtension(t_PythonTimeDerivativesEquations *self, PyObject *args);
        static void JNICALL t_PythonTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonTimeDerivativesEquations_get__self(t_PythonTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_PythonTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_PythonTimeDerivativesEquations, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_PythonTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_PythonTimeDerivativesEquations_init_ },
          { Py_tp_getset, t_PythonTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonTimeDerivativesEquations, t_PythonTimeDerivativesEquations, PythonTimeDerivativesEquations);

        void t_PythonTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonTimeDerivativesEquations), &PY_TYPE_DEF(PythonTimeDerivativesEquations), module, "PythonTimeDerivativesEquations", 1);
        }

        void t_PythonTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "class_", make_descriptor(PythonTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "wrapfn_", make_descriptor(t_PythonTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonTimeDerivativesEquations::initializeClass);
          JNINativeMethod methods[] = {
            { "addKeplerContribution", "(D)V", (void *) t_PythonTimeDerivativesEquations_addKeplerContribution0 },
            { "addMassDerivative", "(D)V", (void *) t_PythonTimeDerivativesEquations_addMassDerivative1 },
            { "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V", (void *) t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2 },
            { "pythonDecRef", "()V", (void *) t_PythonTimeDerivativesEquations_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_PythonTimeDerivativesEquations::wrap_Object(PythonTimeDerivativesEquations(((t_PythonTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_PythonTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonTimeDerivativesEquations_init_(t_PythonTimeDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          PythonTimeDerivativesEquations object((jobject) NULL);

          INT_CALL(object = PythonTimeDerivativesEquations());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonTimeDerivativesEquations_finalize(t_PythonTimeDerivativesEquations *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonTimeDerivativesEquations_pythonExtension(t_PythonTimeDerivativesEquations *self, PyObject *args)
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

        static void JNICALL t_PythonTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "d", (double) a0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "addMassDerivative", "d", (double) a0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "addNonKeplerianAcceleration", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonTimeDerivativesEquations_get__self(t_PythonTimeDerivativesEquations *self, void *data)
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

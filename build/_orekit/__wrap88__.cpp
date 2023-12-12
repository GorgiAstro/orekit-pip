#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "org/orekit/gnss/metric/ntrip/StreamedMessage.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *DataStreamRecord::class$ = NULL;
          jmethodID *DataStreamRecord::mids$ = NULL;
          bool DataStreamRecord::live$ = false;

          jclass DataStreamRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/DataStreamRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_areFeesRequired_89b302893bdbe1f1] = env->getMethodID(cls, "areFeesRequired", "()Z");
              mids$[mid_getAuthentication_c5e2d1332c099f0d] = env->getMethodID(cls, "getAuthentication", "()Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_getBitRate_412668abc8d889e9] = env->getMethodID(cls, "getBitRate", "()I");
              mids$[mid_getCarrierPhase_599f6ea2a23b069a] = env->getMethodID(cls, "getCarrierPhase", "()Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_getCompressionEncryption_3cffd47377eca18a] = env->getMethodID(cls, "getCompressionEncryption", "()Ljava/lang/String;");
              mids$[mid_getCountry_3cffd47377eca18a] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
              mids$[mid_getFormat_bb02fb13bbd4a601] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_getFormatDetails_0d9551367f7ecdef] = env->getMethodID(cls, "getFormatDetails", "()Ljava/util/List;");
              mids$[mid_getGenerator_3cffd47377eca18a] = env->getMethodID(cls, "getGenerator", "()Ljava/lang/String;");
              mids$[mid_getLatitude_557b8123390d8d0c] = env->getMethodID(cls, "getLatitude", "()D");
              mids$[mid_getLongitude_557b8123390d8d0c] = env->getMethodID(cls, "getLongitude", "()D");
              mids$[mid_getMountPoint_3cffd47377eca18a] = env->getMethodID(cls, "getMountPoint", "()Ljava/lang/String;");
              mids$[mid_getNavigationSystems_0d9551367f7ecdef] = env->getMethodID(cls, "getNavigationSystems", "()Ljava/util/List;");
              mids$[mid_getNetwork_3cffd47377eca18a] = env->getMethodID(cls, "getNetwork", "()Ljava/lang/String;");
              mids$[mid_getRecordType_2923d5139aa846c0] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getSourceIdentifier_3cffd47377eca18a] = env->getMethodID(cls, "getSourceIdentifier", "()Ljava/lang/String;");
              mids$[mid_isNMEARequired_89b302893bdbe1f1] = env->getMethodID(cls, "isNMEARequired", "()Z");
              mids$[mid_isNetworked_89b302893bdbe1f1] = env->getMethodID(cls, "isNetworked", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DataStreamRecord::DataStreamRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

          jboolean DataStreamRecord::areFeesRequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_areFeesRequired_89b302893bdbe1f1]);
          }

          ::org::orekit::gnss::metric::ntrip::Authentication DataStreamRecord::getAuthentication() const
          {
            return ::org::orekit::gnss::metric::ntrip::Authentication(env->callObjectMethod(this$, mids$[mid_getAuthentication_c5e2d1332c099f0d]));
          }

          jint DataStreamRecord::getBitRate() const
          {
            return env->callIntMethod(this$, mids$[mid_getBitRate_412668abc8d889e9]);
          }

          ::org::orekit::gnss::metric::ntrip::CarrierPhase DataStreamRecord::getCarrierPhase() const
          {
            return ::org::orekit::gnss::metric::ntrip::CarrierPhase(env->callObjectMethod(this$, mids$[mid_getCarrierPhase_599f6ea2a23b069a]));
          }

          ::java::lang::String DataStreamRecord::getCompressionEncryption() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCompressionEncryption_3cffd47377eca18a]));
          }

          ::java::lang::String DataStreamRecord::getCountry() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_3cffd47377eca18a]));
          }

          ::org::orekit::gnss::metric::ntrip::DataFormat DataStreamRecord::getFormat() const
          {
            return ::org::orekit::gnss::metric::ntrip::DataFormat(env->callObjectMethod(this$, mids$[mid_getFormat_bb02fb13bbd4a601]));
          }

          ::java::util::List DataStreamRecord::getFormatDetails() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFormatDetails_0d9551367f7ecdef]));
          }

          ::java::lang::String DataStreamRecord::getGenerator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGenerator_3cffd47377eca18a]));
          }

          jdouble DataStreamRecord::getLatitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLatitude_557b8123390d8d0c]);
          }

          jdouble DataStreamRecord::getLongitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLongitude_557b8123390d8d0c]);
          }

          ::java::lang::String DataStreamRecord::getMountPoint() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMountPoint_3cffd47377eca18a]));
          }

          ::java::util::List DataStreamRecord::getNavigationSystems() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNavigationSystems_0d9551367f7ecdef]));
          }

          ::java::lang::String DataStreamRecord::getNetwork() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetwork_3cffd47377eca18a]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType DataStreamRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_2923d5139aa846c0]));
          }

          ::java::lang::String DataStreamRecord::getSourceIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceIdentifier_3cffd47377eca18a]));
          }

          jboolean DataStreamRecord::isNMEARequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNMEARequired_89b302893bdbe1f1]);
          }

          jboolean DataStreamRecord::isNetworked() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNetworked_89b302893bdbe1f1]);
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
          static PyObject *t_DataStreamRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataStreamRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DataStreamRecord_init_(t_DataStreamRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DataStreamRecord_areFeesRequired(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getAuthentication(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getBitRate(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCarrierPhase(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCompressionEncryption(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCountry(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getFormat(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getFormatDetails(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getGenerator(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getLatitude(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getLongitude(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getMountPoint(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getNavigationSystems(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getNetwork(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getRecordType(t_DataStreamRecord *self, PyObject *args);
          static PyObject *t_DataStreamRecord_getSourceIdentifier(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_isNMEARequired(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_isNetworked(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_get__authentication(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__bitRate(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__carrierPhase(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__compressionEncryption(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__country(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__format(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__formatDetails(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__generator(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__latitude(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__longitude(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__mountPoint(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__nMEARequired(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__navigationSystems(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__network(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__networked(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__recordType(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__sourceIdentifier(t_DataStreamRecord *self, void *data);
          static PyGetSetDef t_DataStreamRecord__fields_[] = {
            DECLARE_GET_FIELD(t_DataStreamRecord, authentication),
            DECLARE_GET_FIELD(t_DataStreamRecord, bitRate),
            DECLARE_GET_FIELD(t_DataStreamRecord, carrierPhase),
            DECLARE_GET_FIELD(t_DataStreamRecord, compressionEncryption),
            DECLARE_GET_FIELD(t_DataStreamRecord, country),
            DECLARE_GET_FIELD(t_DataStreamRecord, format),
            DECLARE_GET_FIELD(t_DataStreamRecord, formatDetails),
            DECLARE_GET_FIELD(t_DataStreamRecord, generator),
            DECLARE_GET_FIELD(t_DataStreamRecord, latitude),
            DECLARE_GET_FIELD(t_DataStreamRecord, longitude),
            DECLARE_GET_FIELD(t_DataStreamRecord, mountPoint),
            DECLARE_GET_FIELD(t_DataStreamRecord, nMEARequired),
            DECLARE_GET_FIELD(t_DataStreamRecord, navigationSystems),
            DECLARE_GET_FIELD(t_DataStreamRecord, network),
            DECLARE_GET_FIELD(t_DataStreamRecord, networked),
            DECLARE_GET_FIELD(t_DataStreamRecord, recordType),
            DECLARE_GET_FIELD(t_DataStreamRecord, sourceIdentifier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataStreamRecord__methods_[] = {
            DECLARE_METHOD(t_DataStreamRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataStreamRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataStreamRecord, areFeesRequired, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getAuthentication, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getBitRate, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCarrierPhase, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCompressionEncryption, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCountry, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getFormat, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getFormatDetails, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getGenerator, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getLatitude, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getLongitude, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getMountPoint, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getNavigationSystems, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getNetwork, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_DataStreamRecord, getSourceIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, isNMEARequired, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, isNetworked, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataStreamRecord)[] = {
            { Py_tp_methods, t_DataStreamRecord__methods_ },
            { Py_tp_init, (void *) t_DataStreamRecord_init_ },
            { Py_tp_getset, t_DataStreamRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataStreamRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(DataStreamRecord, t_DataStreamRecord, DataStreamRecord);

          void t_DataStreamRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(DataStreamRecord), &PY_TYPE_DEF(DataStreamRecord), module, "DataStreamRecord", 0);
          }

          void t_DataStreamRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "class_", make_descriptor(DataStreamRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "wrapfn_", make_descriptor(t_DataStreamRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DataStreamRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataStreamRecord::initializeClass, 1)))
              return NULL;
            return t_DataStreamRecord::wrap_Object(DataStreamRecord(((t_DataStreamRecord *) arg)->object.this$));
          }
          static PyObject *t_DataStreamRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataStreamRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DataStreamRecord_init_(t_DataStreamRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            DataStreamRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = DataStreamRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DataStreamRecord_areFeesRequired(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.areFeesRequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_getAuthentication(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication result((jobject) NULL);
            OBJ_CALL(result = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getBitRate(t_DataStreamRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getBitRate());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_DataStreamRecord_getCarrierPhase(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::CarrierPhase result((jobject) NULL);
            OBJ_CALL(result = self->object.getCarrierPhase());
            return ::org::orekit::gnss::metric::ntrip::t_CarrierPhase::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getCompressionEncryption(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCompressionEncryption());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getCountry(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCountry());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getFormat(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::DataFormat result((jobject) NULL);
            OBJ_CALL(result = self->object.getFormat());
            return ::org::orekit::gnss::metric::ntrip::t_DataFormat::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getFormatDetails(t_DataStreamRecord *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getFormatDetails());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(StreamedMessage));
          }

          static PyObject *t_DataStreamRecord_getGenerator(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getGenerator());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getLatitude(t_DataStreamRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLatitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DataStreamRecord_getLongitude(t_DataStreamRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DataStreamRecord_getMountPoint(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMountPoint());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getNavigationSystems(t_DataStreamRecord *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNavigationSystems());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(NavigationSystem));
          }

          static PyObject *t_DataStreamRecord_getNetwork(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetwork());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getRecordType(t_DataStreamRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DataStreamRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_DataStreamRecord_getSourceIdentifier(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceIdentifier());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_isNMEARequired(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNMEARequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_isNetworked(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNetworked());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_get__authentication(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication value((jobject) NULL);
            OBJ_CALL(value = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__bitRate(t_DataStreamRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getBitRate());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_DataStreamRecord_get__carrierPhase(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::CarrierPhase value((jobject) NULL);
            OBJ_CALL(value = self->object.getCarrierPhase());
            return ::org::orekit::gnss::metric::ntrip::t_CarrierPhase::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__compressionEncryption(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCompressionEncryption());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__country(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCountry());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__format(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::DataFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getFormat());
            return ::org::orekit::gnss::metric::ntrip::t_DataFormat::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__formatDetails(t_DataStreamRecord *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getFormatDetails());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__generator(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getGenerator());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__latitude(t_DataStreamRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLatitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DataStreamRecord_get__longitude(t_DataStreamRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLongitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DataStreamRecord_get__mountPoint(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMountPoint());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__nMEARequired(t_DataStreamRecord *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNMEARequired());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DataStreamRecord_get__navigationSystems(t_DataStreamRecord *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNavigationSystems());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__network(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetwork());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__networked(t_DataStreamRecord *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNetworked());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DataStreamRecord_get__recordType(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__sourceIdentifier(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceIdentifier());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonAbstractFrames.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonAbstractFrames::class$ = NULL;
      jmethodID *PythonAbstractFrames::mids$ = NULL;
      bool PythonAbstractFrames::live$ = false;

      jclass PythonAbstractFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonAbstractFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_079a6d283d35a519] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEOPHistory_9cf4a1ec2e53bbd3] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractFrames::PythonAbstractFrames(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1) : ::org::orekit::frames::AbstractFrames(env->newObject(initializeClass, &mids$, mid_init$_079a6d283d35a519, a0.this$, a1.this$)) {}

      void PythonAbstractFrames::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAbstractFrames::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAbstractFrames::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PythonAbstractFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractFrames_init_(t_PythonAbstractFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractFrames_finalize(t_PythonAbstractFrames *self);
      static PyObject *t_PythonAbstractFrames_pythonExtension(t_PythonAbstractFrames *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractFrames_getEOPHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static void JNICALL t_PythonAbstractFrames_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractFrames_get__self(t_PythonAbstractFrames *self, void *data);
      static PyGetSetDef t_PythonAbstractFrames__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractFrames, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractFrames__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractFrames, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractFrames, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractFrames)[] = {
        { Py_tp_methods, t_PythonAbstractFrames__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractFrames_init_ },
        { Py_tp_getset, t_PythonAbstractFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractFrames)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractFrames),
        NULL
      };

      DEFINE_TYPE(PythonAbstractFrames, t_PythonAbstractFrames, PythonAbstractFrames);

      void t_PythonAbstractFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractFrames), &PY_TYPE_DEF(PythonAbstractFrames), module, "PythonAbstractFrames", 1);
      }

      void t_PythonAbstractFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "class_", make_descriptor(PythonAbstractFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "wrapfn_", make_descriptor(t_PythonAbstractFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractFrames::initializeClass);
        JNINativeMethod methods[] = {
          { "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonAbstractFrames_getEOPHistory0 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractFrames_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAbstractFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractFrames::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractFrames::wrap_Object(PythonAbstractFrames(((t_PythonAbstractFrames *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractFrames_init_(t_PythonAbstractFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::java::util::function::Supplier a1((jobject) NULL);
        PyTypeObject **p1;
        PythonAbstractFrames object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = PythonAbstractFrames(a0, a1));
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

      static PyObject *t_PythonAbstractFrames_finalize(t_PythonAbstractFrames *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractFrames_pythonExtension(t_PythonAbstractFrames *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractFrames_getEOPHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static void JNICALL t_PythonAbstractFrames_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractFrames_get__self(t_PythonAbstractFrames *self, void *data)
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
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3OrbitType::class$ = NULL;
        jmethodID *SP3OrbitType::mids$ = NULL;
        bool SP3OrbitType::live$ = false;
        SP3OrbitType *SP3OrbitType::BCT = NULL;
        SP3OrbitType *SP3OrbitType::EXT = NULL;
        SP3OrbitType *SP3OrbitType::FIT = NULL;
        SP3OrbitType *SP3OrbitType::HLM = NULL;
        SP3OrbitType *SP3OrbitType::OTHER = NULL;

        jclass SP3OrbitType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3OrbitType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parseType_54af8278b88966fe] = env->getStaticMethodID(cls, "parseType", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_valueOf_54af8278b88966fe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_values_1167d283c3e98cda] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/SP3OrbitType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BCT = new SP3OrbitType(env->getStaticObjectField(cls, "BCT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            EXT = new SP3OrbitType(env->getStaticObjectField(cls, "EXT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            FIT = new SP3OrbitType(env->getStaticObjectField(cls, "FIT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            HLM = new SP3OrbitType(env->getStaticObjectField(cls, "HLM", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            OTHER = new SP3OrbitType(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3OrbitType SP3OrbitType::parseType(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3OrbitType(env->callStaticObjectMethod(cls, mids$[mid_parseType_54af8278b88966fe], a0.this$));
        }

        SP3OrbitType SP3OrbitType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3OrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_54af8278b88966fe], a0.this$));
        }

        JArray< SP3OrbitType > SP3OrbitType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SP3OrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_1167d283c3e98cda]));
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
        static PyObject *t_SP3OrbitType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_of_(t_SP3OrbitType *self, PyObject *args);
        static PyObject *t_SP3OrbitType_parseType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3OrbitType_values(PyTypeObject *type);
        static PyObject *t_SP3OrbitType_get__parameters_(t_SP3OrbitType *self, void *data);
        static PyGetSetDef t_SP3OrbitType__fields_[] = {
          DECLARE_GET_FIELD(t_SP3OrbitType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3OrbitType__methods_[] = {
          DECLARE_METHOD(t_SP3OrbitType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SP3OrbitType, parseType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3OrbitType)[] = {
          { Py_tp_methods, t_SP3OrbitType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SP3OrbitType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3OrbitType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SP3OrbitType, t_SP3OrbitType, SP3OrbitType);
        PyObject *t_SP3OrbitType::wrap_Object(const SP3OrbitType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3OrbitType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3OrbitType *self = (t_SP3OrbitType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3OrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3OrbitType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3OrbitType *self = (t_SP3OrbitType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3OrbitType::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3OrbitType), &PY_TYPE_DEF(SP3OrbitType), module, "SP3OrbitType", 0);
        }

        void t_SP3OrbitType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "class_", make_descriptor(SP3OrbitType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "wrapfn_", make_descriptor(t_SP3OrbitType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3OrbitType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "BCT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::BCT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "EXT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::EXT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "FIT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::FIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "HLM", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::HLM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "OTHER", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::OTHER)));
        }

        static PyObject *t_SP3OrbitType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3OrbitType::initializeClass, 1)))
            return NULL;
          return t_SP3OrbitType::wrap_Object(SP3OrbitType(((t_SP3OrbitType *) arg)->object.this$));
        }
        static PyObject *t_SP3OrbitType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3OrbitType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3OrbitType_of_(t_SP3OrbitType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SP3OrbitType_parseType(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3OrbitType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::parseType(a0));
            return t_SP3OrbitType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parseType", arg);
          return NULL;
        }

        static PyObject *t_SP3OrbitType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3OrbitType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::valueOf(a0));
            return t_SP3OrbitType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SP3OrbitType_values(PyTypeObject *type)
        {
          JArray< SP3OrbitType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::values());
          return JArray<jobject>(result.this$).wrap(t_SP3OrbitType::wrap_jobject);
        }
        static PyObject *t_SP3OrbitType_get__parameters_(t_SP3OrbitType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DSSTPropagatorBuilder::class$ = NULL;
        jmethodID *DSSTPropagatorBuilder::mids$ = NULL;
        bool DSSTPropagatorBuilder::live$ = false;

        jclass DSSTPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DSSTPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b9ccae616b531dbe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;DLorg/orekit/propagation/PropagationType;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_195606cc9d74c2f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;DLorg/orekit/propagation/PropagationType;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_2a559dedc6480c51] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
            mids$[mid_buildLeastSquaresModel_3446f8fef52f0814] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/DSSTBatchLSModel;");
            mids$[mid_buildPropagator_7f447239921efd7c] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_copy_e4730451f9f3afed] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;");
            mids$[mid_getAllForceModels_0d9551367f7ecdef] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getIntegratorBuilder_4785d50855609363] = env->getMethodID(cls, "getIntegratorBuilder", "()Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;");
            mids$[mid_getMass_557b8123390d8d0c] = env->getMethodID(cls, "getMass", "()D");
            mids$[mid_getPropagationType_81e4bfcfa9059f10] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getStateType_81e4bfcfa9059f10] = env->getMethodID(cls, "getStateType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_resetOrbit_ec22b2fd6dbaa1ee] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_setMass_10f281d777284cea] = env->getMethodID(cls, "setMass", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSSTPropagatorBuilder::DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, jdouble a2, const ::org::orekit::propagation::PropagationType & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_b9ccae616b531dbe, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        DSSTPropagatorBuilder::DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, jdouble a2, const ::org::orekit::propagation::PropagationType & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::orekit::attitudes::AttitudeProvider & a5) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_195606cc9d74c2f4, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$)) {}

        void DSSTPropagatorBuilder::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_2a559dedc6480c51], a0.this$);
        }

        ::org::orekit::estimation::leastsquares::DSSTBatchLSModel DSSTPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::DSSTBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_3446f8fef52f0814], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator DSSTPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_7f447239921efd7c], a0.this$));
        }

        DSSTPropagatorBuilder DSSTPropagatorBuilder::copy() const
        {
          return DSSTPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_e4730451f9f3afed]));
        }

        ::java::util::List DSSTPropagatorBuilder::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_0d9551367f7ecdef]));
        }

        ::org::orekit::propagation::conversion::ODEIntegratorBuilder DSSTPropagatorBuilder::getIntegratorBuilder() const
        {
          return ::org::orekit::propagation::conversion::ODEIntegratorBuilder(env->callObjectMethod(this$, mids$[mid_getIntegratorBuilder_4785d50855609363]));
        }

        jdouble DSSTPropagatorBuilder::getMass() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMass_557b8123390d8d0c]);
        }

        ::org::orekit::propagation::PropagationType DSSTPropagatorBuilder::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_81e4bfcfa9059f10]));
        }

        ::org::orekit::propagation::PropagationType DSSTPropagatorBuilder::getStateType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getStateType_81e4bfcfa9059f10]));
        }

        void DSSTPropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_ec22b2fd6dbaa1ee], a0.this$, a1.this$);
        }

        void DSSTPropagatorBuilder::setMass(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMass_10f281d777284cea], a0);
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
        static PyObject *t_DSSTPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSSTPropagatorBuilder_init_(t_DSSTPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DSSTPropagatorBuilder_addForceModel(t_DSSTPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_buildLeastSquaresModel(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_buildPropagator(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_copy(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_getAllForceModels(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getIntegratorBuilder(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getMass(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getPropagationType(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getStateType(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_resetOrbit(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_setMass(t_DSSTPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_get__allForceModels(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__integratorBuilder(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__mass(t_DSSTPropagatorBuilder *self, void *data);
        static int t_DSSTPropagatorBuilder_set__mass(t_DSSTPropagatorBuilder *self, PyObject *arg, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__propagationType(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__stateType(t_DSSTPropagatorBuilder *self, void *data);
        static PyGetSetDef t_DSSTPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, allForceModels),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, integratorBuilder),
          DECLARE_GETSET_FIELD(t_DSSTPropagatorBuilder, mass),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, propagationType),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, stateType),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSSTPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_DSSTPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, addForceModel, METH_O),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getIntegratorBuilder, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getMass, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getStateType, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, resetOrbit, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, setMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSSTPropagatorBuilder)[] = {
          { Py_tp_methods, t_DSSTPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_DSSTPropagatorBuilder_init_ },
          { Py_tp_getset, t_DSSTPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSSTPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(DSSTPropagatorBuilder, t_DSSTPropagatorBuilder, DSSTPropagatorBuilder);

        void t_DSSTPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DSSTPropagatorBuilder), &PY_TYPE_DEF(DSSTPropagatorBuilder), module, "DSSTPropagatorBuilder", 0);
        }

        void t_DSSTPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "class_", make_descriptor(DSSTPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "wrapfn_", make_descriptor(t_DSSTPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSSTPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSSTPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_DSSTPropagatorBuilder::wrap_Object(DSSTPropagatorBuilder(((t_DSSTPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DSSTPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSSTPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSSTPropagatorBuilder_init_(t_DSSTPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              DSSTPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkDKK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = DSSTPropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::attitudes::AttitudeProvider a5((jobject) NULL);
              DSSTPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkDKKk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = DSSTPropagatorBuilder(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_DSSTPropagatorBuilder_addForceModel(t_DSSTPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_DSSTPropagatorBuilder_buildLeastSquaresModel(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::DSSTBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_DSSTBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_buildPropagator(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_copy(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          DSSTPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_DSSTPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_getAllForceModels(t_DSSTPropagatorBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
        }

        static PyObject *t_DSSTPropagatorBuilder_getIntegratorBuilder(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getMass(t_DSSTPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMass());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getPropagationType(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getStateType(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_resetOrbit(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::propagation::PropagationType a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            OBJ_CALL(self->object.resetOrbit(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "resetOrbit", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_setMass(t_DSSTPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMass", arg);
          return NULL;
        }

        static PyObject *t_DSSTPropagatorBuilder_get__allForceModels(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__integratorBuilder(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__mass(t_DSSTPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMass());
          return PyFloat_FromDouble((double) value);
        }
        static int t_DSSTPropagatorBuilder_set__mass(t_DSSTPropagatorBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return -1;
        }

        static PyObject *t_DSSTPropagatorBuilder_get__propagationType(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__stateType(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *SubHyperplane::class$ = NULL;
        jmethodID *SubHyperplane::mids$ = NULL;
        bool SubHyperplane::live$ = false;

        jclass SubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/SubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copySelf_0629297ff6ae927a] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getHyperplane_db5d0f7cdc937b69] = env->getMethodID(cls, "getHyperplane", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_getSize_557b8123390d8d0c] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_reunite_90bd3924ff8382db] = env->getMethodID(cls, "reunite", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_split_ae8e2bbf2389e86e] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SubHyperplane SubHyperplane::copySelf() const
        {
          return SubHyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_0629297ff6ae927a]));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane SubHyperplane::getHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_getHyperplane_db5d0f7cdc937b69]));
        }

        jdouble SubHyperplane::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_557b8123390d8d0c]);
        }

        jboolean SubHyperplane::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
        }

        SubHyperplane SubHyperplane::reunite(const SubHyperplane & a0) const
        {
          return SubHyperplane(env->callObjectMethod(this$, mids$[mid_reunite_90bd3924ff8382db], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubHyperplane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_ae8e2bbf2389e86e], a0.this$));
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
        static PyObject *t_SubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane_of_(t_SubHyperplane *self, PyObject *args);
        static PyObject *t_SubHyperplane_copySelf(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_getHyperplane(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_getSize(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_isEmpty(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_reunite(t_SubHyperplane *self, PyObject *arg);
        static PyObject *t_SubHyperplane_split(t_SubHyperplane *self, PyObject *arg);
        static PyObject *t_SubHyperplane_get__empty(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__hyperplane(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__size(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__parameters_(t_SubHyperplane *self, void *data);
        static PyGetSetDef t_SubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_SubHyperplane, empty),
          DECLARE_GET_FIELD(t_SubHyperplane, hyperplane),
          DECLARE_GET_FIELD(t_SubHyperplane, size),
          DECLARE_GET_FIELD(t_SubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SubHyperplane__methods_[] = {
          DECLARE_METHOD(t_SubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_SubHyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, getHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, getSize, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, isEmpty, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, reunite, METH_O),
          DECLARE_METHOD(t_SubHyperplane, split, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SubHyperplane)[] = {
          { Py_tp_methods, t_SubHyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SubHyperplane, t_SubHyperplane, SubHyperplane);
        PyObject *t_SubHyperplane::wrap_Object(const SubHyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane *self = (t_SubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane *self = (t_SubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(SubHyperplane), &PY_TYPE_DEF(SubHyperplane), module, "SubHyperplane", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "SplitSubHyperplane", make_descriptor(&PY_TYPE_DEF(SubHyperplane$SplitSubHyperplane)));
        }

        void t_SubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "class_", make_descriptor(SubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "wrapfn_", make_descriptor(t_SubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SubHyperplane::initializeClass, 1)))
            return NULL;
          return t_SubHyperplane::wrap_Object(SubHyperplane(((t_SubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_SubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SubHyperplane_of_(t_SubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SubHyperplane_copySelf(t_SubHyperplane *self)
        {
          SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane_getHyperplane(t_SubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane_getSize(t_SubHyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SubHyperplane_isEmpty(t_SubHyperplane *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEmpty());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SubHyperplane_reunite(t_SubHyperplane *self, PyObject *arg)
        {
          SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", SubHyperplane::initializeClass, &a0, &p0, t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.reunite(a0));
            return t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "reunite", arg);
          return NULL;
        }

        static PyObject *t_SubHyperplane_split(t_SubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }
        static PyObject *t_SubHyperplane_get__parameters_(t_SubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SubHyperplane_get__empty(t_SubHyperplane *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_SubHyperplane_get__hyperplane(t_SubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane_get__size(t_SubHyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersRangeModifier::class$ = NULL;
          jmethodID *PhaseCentersRangeModifier::mids$ = NULL;
          bool PhaseCentersRangeModifier::live$ = false;

          jclass PhaseCentersRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_59cfeb08e5a13ccd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersRangeModifier::PhaseCentersRangeModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_59cfeb08e5a13ccd, a0.this$, a1.this$)) {}

          ::java::util::List PhaseCentersRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void PhaseCentersRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_PhaseCentersRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersRangeModifier_init_(t_PhaseCentersRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersRangeModifier_getParametersDrivers(t_PhaseCentersRangeModifier *self);
          static PyObject *t_PhaseCentersRangeModifier_modifyWithoutDerivatives(t_PhaseCentersRangeModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersRangeModifier_get__parametersDrivers(t_PhaseCentersRangeModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersRangeModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersRangeModifier)[] = {
            { Py_tp_methods, t_PhaseCentersRangeModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersRangeModifier_init_ },
            { Py_tp_getset, t_PhaseCentersRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersRangeModifier, t_PhaseCentersRangeModifier, PhaseCentersRangeModifier);

          void t_PhaseCentersRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersRangeModifier), &PY_TYPE_DEF(PhaseCentersRangeModifier), module, "PhaseCentersRangeModifier", 0);
          }

          void t_PhaseCentersRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "class_", make_descriptor(PhaseCentersRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "wrapfn_", make_descriptor(t_PhaseCentersRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersRangeModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersRangeModifier::wrap_Object(PhaseCentersRangeModifier(((t_PhaseCentersRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersRangeModifier_init_(t_PhaseCentersRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersRangeModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersRangeModifier_getParametersDrivers(t_PhaseCentersRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseCentersRangeModifier_modifyWithoutDerivatives(t_PhaseCentersRangeModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseCentersRangeModifier_get__parametersDrivers(t_PhaseCentersRangeModifier *self, void *data)
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
#include "org/orekit/propagation/events/FieldAdapterDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAdapterDetector::class$ = NULL;
        jmethodID *FieldAdapterDetector::mids$ = NULL;
        bool FieldAdapterDetector::live$ = false;

        jclass FieldAdapterDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAdapterDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2ffeff0ffaf1deef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_07d9256595c42b86] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getHandler_ae75cc14adc9e750] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_24041a63d01af092] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_613c8f46c659f636] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldAdapterDetector::FieldAdapterDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ffeff0ffaf1deef, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldAdapterDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldAdapterDetector::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_07d9256595c42b86]));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldAdapterDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_ae75cc14adc9e750]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldAdapterDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_24041a63d01af092]));
        }

        jint FieldAdapterDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement FieldAdapterDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_613c8f46c659f636]));
        }

        void FieldAdapterDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
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
        static PyObject *t_FieldAdapterDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_of_(t_FieldAdapterDetector *self, PyObject *args);
        static int t_FieldAdapterDetector_init_(t_FieldAdapterDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldAdapterDetector_g(t_FieldAdapterDetector *self, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_getDetector(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getHandler(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getMaxCheckInterval(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getMaxIterationCount(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getThreshold(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_init(t_FieldAdapterDetector *self, PyObject *args);
        static PyObject *t_FieldAdapterDetector_get__detector(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__handler(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__maxCheckInterval(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__maxIterationCount(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__threshold(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__parameters_(t_FieldAdapterDetector *self, void *data);
        static PyGetSetDef t_FieldAdapterDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdapterDetector, detector),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, handler),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, threshold),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdapterDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAdapterDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdapterDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdapterDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, g, METH_O),
          DECLARE_METHOD(t_FieldAdapterDetector, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdapterDetector)[] = {
          { Py_tp_methods, t_FieldAdapterDetector__methods_ },
          { Py_tp_init, (void *) t_FieldAdapterDetector_init_ },
          { Py_tp_getset, t_FieldAdapterDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdapterDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdapterDetector, t_FieldAdapterDetector, FieldAdapterDetector);
        PyObject *t_FieldAdapterDetector::wrap_Object(const FieldAdapterDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdapterDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdapterDetector *self = (t_FieldAdapterDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdapterDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdapterDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdapterDetector *self = (t_FieldAdapterDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdapterDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdapterDetector), &PY_TYPE_DEF(FieldAdapterDetector), module, "FieldAdapterDetector", 0);
        }

        void t_FieldAdapterDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "class_", make_descriptor(FieldAdapterDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "wrapfn_", make_descriptor(t_FieldAdapterDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdapterDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdapterDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAdapterDetector::wrap_Object(FieldAdapterDetector(((t_FieldAdapterDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAdapterDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdapterDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdapterDetector_of_(t_FieldAdapterDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldAdapterDetector_init_(t_FieldAdapterDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAdapterDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldAdapterDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldAdapterDetector_g(t_FieldAdapterDetector *self, PyObject *arg)
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

        static PyObject *t_FieldAdapterDetector_getDetector(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getHandler(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getMaxCheckInterval(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getMaxIterationCount(t_FieldAdapterDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAdapterDetector_getThreshold(t_FieldAdapterDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAdapterDetector_init(t_FieldAdapterDetector *self, PyObject *args)
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
        static PyObject *t_FieldAdapterDetector_get__parameters_(t_FieldAdapterDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAdapterDetector_get__detector(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__handler(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__maxCheckInterval(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__maxIterationCount(t_FieldAdapterDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAdapterDetector_get__threshold(t_FieldAdapterDetector *self, void *data)
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
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AngularCoordinates::class$ = NULL;
      jmethodID *AngularCoordinates::mids$ = NULL;
      bool AngularCoordinates::live$ = false;
      AngularCoordinates *AngularCoordinates::IDENTITY = NULL;

      jclass AngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_52b7e4a71c1f5acc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_cffe2196131a8abb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_cacf1e806efac37c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_ef872cbae0d10840] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_4fdcd85b0c7929aa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_adb68a911ef752b9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_addOffset_c0f86b964fece7aa] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_applyTo_f6b3fdf5ec92a07f] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_fc4b100c90055253] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_applyTo_5954fda0d828683a] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_applyTo_c0d29187a28e22fc] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_createFromModifiedRodrigues_e4f621c772dd618e] = env->getStaticMethodID(cls, "createFromModifiedRodrigues", "([[D)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_estimateRate_d6616c6d64635c33] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Rotation;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getModifiedRodrigues_575a099fc2492a12] = env->getMethodID(cls, "getModifiedRodrigues", "(D)[[D");
          mids$[mid_getRotation_1e0dc1a6788897b9] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_f88961cca75a2c0a] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRotationRate_f88961cca75a2c0a] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_revert_f385f7a363d6ca27] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_rotationShiftedBy_72e0d732f56c88d5] = env->getMethodID(cls, "rotationShiftedBy", "(D)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_shiftedBy_2dc3d2110b20141c] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_subtractOffset_c0f86b964fece7aa] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_toDerivativeStructureRotation_787de7775c059c73] = env->getMethodID(cls, "toDerivativeStructureRotation", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative1Rotation_73da4eeccf2b7e14] = env->getMethodID(cls, "toUnivariateDerivative1Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative2Rotation_73da4eeccf2b7e14] = env->getMethodID(cls, "toUnivariateDerivative2Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY = new AngularCoordinates(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/utils/AngularCoordinates;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AngularCoordinates::AngularCoordinates() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_52b7e4a71c1f5acc, a0.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cffe2196131a8abb, a0.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cacf1e806efac37c, a0.this$, a1.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ef872cbae0d10840, a0.this$, a1.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4fdcd85b0c7929aa, a0.this$, a1.this$, a2.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::orekit::utils::PVCoordinates & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_adb68a911ef752b9, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

      AngularCoordinates AngularCoordinates::addOffset(const AngularCoordinates & a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_c0f86b964fece7aa], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_f6b3fdf5ec92a07f], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_fc4b100c90055253], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_5954fda0d828683a], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_c0d29187a28e22fc], a0.this$));
      }

      AngularCoordinates AngularCoordinates::createFromModifiedRodrigues(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_createFromModifiedRodrigues_e4f621c772dd618e], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_d6616c6d64635c33], a0.this$, a1.this$, a2));
      }

      JArray< JArray< jdouble > > AngularCoordinates::getModifiedRodrigues(jdouble a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getModifiedRodrigues_575a099fc2492a12], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AngularCoordinates::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_1e0dc1a6788897b9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_f88961cca75a2c0a]));
      }

      AngularCoordinates AngularCoordinates::revert() const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_f385f7a363d6ca27]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AngularCoordinates::rotationShiftedBy(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationShiftedBy_72e0d732f56c88d5], a0));
      }

      AngularCoordinates AngularCoordinates::shiftedBy(jdouble a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_2dc3d2110b20141c], a0));
      }

      AngularCoordinates AngularCoordinates::subtractOffset(const AngularCoordinates & a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_c0f86b964fece7aa], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toDerivativeStructureRotation(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureRotation_787de7775c059c73], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toUnivariateDerivative1Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Rotation_73da4eeccf2b7e14]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toUnivariateDerivative2Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Rotation_73da4eeccf2b7e14]));
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
      static PyObject *t_AngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AngularCoordinates_init_(t_AngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AngularCoordinates_addOffset(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_applyTo(t_AngularCoordinates *self, PyObject *args);
      static PyObject *t_AngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AngularCoordinates_getModifiedRodrigues(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_getRotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_getRotationAcceleration(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_getRotationRate(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_revert(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_rotationShiftedBy(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_shiftedBy(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_subtractOffset(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_toDerivativeStructureRotation(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_toUnivariateDerivative1Rotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_toUnivariateDerivative2Rotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_get__rotation(t_AngularCoordinates *self, void *data);
      static PyObject *t_AngularCoordinates_get__rotationAcceleration(t_AngularCoordinates *self, void *data);
      static PyObject *t_AngularCoordinates_get__rotationRate(t_AngularCoordinates *self, void *data);
      static PyGetSetDef t_AngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_AngularCoordinates, rotation),
        DECLARE_GET_FIELD(t_AngularCoordinates, rotationAcceleration),
        DECLARE_GET_FIELD(t_AngularCoordinates, rotationRate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_AngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, addOffset, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, applyTo, METH_VARARGS),
        DECLARE_METHOD(t_AngularCoordinates, createFromModifiedRodrigues, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, estimateRate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, getModifiedRodrigues, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, revert, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, rotationShiftedBy, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, shiftedBy, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, subtractOffset, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, toDerivativeStructureRotation, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, toUnivariateDerivative1Rotation, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, toUnivariateDerivative2Rotation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AngularCoordinates)[] = {
        { Py_tp_methods, t_AngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_AngularCoordinates_init_ },
        { Py_tp_getset, t_AngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AngularCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AngularCoordinates, t_AngularCoordinates, AngularCoordinates);

      void t_AngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(AngularCoordinates), &PY_TYPE_DEF(AngularCoordinates), module, "AngularCoordinates", 0);
      }

      void t_AngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "class_", make_descriptor(AngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "wrapfn_", make_descriptor(t_AngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "boxfn_", make_descriptor(boxObject));
        env->getClass(AngularCoordinates::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "IDENTITY", make_descriptor(t_AngularCoordinates::wrap_Object(*AngularCoordinates::IDENTITY)));
      }

      static PyObject *t_AngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_AngularCoordinates::wrap_Object(AngularCoordinates(((t_AngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_AngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AngularCoordinates_init_(t_AngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AngularCoordinates object((jobject) NULL);

            INT_CALL(object = AngularCoordinates());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = AngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              INT_CALL(object = AngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            jdouble a4;
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AngularCoordinates(a0, a1, a2, a3, a4));
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

      static PyObject *t_AngularCoordinates_addOffset(t_AngularCoordinates *self, PyObject *arg)
      {
        AngularCoordinates a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "k", AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addOffset", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_applyTo(t_AngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyTo", args);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularCoordinates::createFromModifiedRodrigues(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularCoordinates::estimateRate(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateRate", args);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_getModifiedRodrigues(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getModifiedRodrigues(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "getModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_getRotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_getRotationAcceleration(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_getRotationRate(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_revert(t_AngularCoordinates *self)
      {
        AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.revert());
        return t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_rotationShiftedBy(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.rotationShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rotationShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_shiftedBy(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_subtractOffset(t_AngularCoordinates *self, PyObject *arg)
      {
        AngularCoordinates a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "k", AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtractOffset", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_toDerivativeStructureRotation(t_AngularCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureRotation(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureRotation", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_toUnivariateDerivative1Rotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_AngularCoordinates_toUnivariateDerivative2Rotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_AngularCoordinates_get__rotation(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_AngularCoordinates_get__rotationAcceleration(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_AngularCoordinates_get__rotationRate(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/RtcmMessage.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            ::java::lang::Class *RtcmMessage::class$ = NULL;
            jmethodID *RtcmMessage::mids$ = NULL;
            bool RtcmMessage::live$ = false;

            jclass RtcmMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/RtcmMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f6c1c7b1dc8e1344] = env->getMethodID(cls, "<init>", "(ILjava/util/List;)V");
                mids$[mid_getData_0d9551367f7ecdef] = env->getMethodID(cls, "getData", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RtcmMessage::RtcmMessage(jint a0, const ::java::util::List & a1) : ::org::orekit::gnss::metric::messages::ParsedMessage(env->newObject(initializeClass, &mids$, mid_init$_f6c1c7b1dc8e1344, a0, a1.this$)) {}

            ::java::util::List RtcmMessage::getData() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_0d9551367f7ecdef]));
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
          namespace rtcm {
            static PyObject *t_RtcmMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmMessage_of_(t_RtcmMessage *self, PyObject *args);
            static int t_RtcmMessage_init_(t_RtcmMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RtcmMessage_getData(t_RtcmMessage *self);
            static PyObject *t_RtcmMessage_get__data(t_RtcmMessage *self, void *data);
            static PyObject *t_RtcmMessage_get__parameters_(t_RtcmMessage *self, void *data);
            static PyGetSetDef t_RtcmMessage__fields_[] = {
              DECLARE_GET_FIELD(t_RtcmMessage, data),
              DECLARE_GET_FIELD(t_RtcmMessage, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RtcmMessage__methods_[] = {
              DECLARE_METHOD(t_RtcmMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmMessage, of_, METH_VARARGS),
              DECLARE_METHOD(t_RtcmMessage, getData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RtcmMessage)[] = {
              { Py_tp_methods, t_RtcmMessage__methods_ },
              { Py_tp_init, (void *) t_RtcmMessage_init_ },
              { Py_tp_getset, t_RtcmMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RtcmMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ParsedMessage),
              NULL
            };

            DEFINE_TYPE(RtcmMessage, t_RtcmMessage, RtcmMessage);
            PyObject *t_RtcmMessage::wrap_Object(const RtcmMessage& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RtcmMessage::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RtcmMessage *self = (t_RtcmMessage *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RtcmMessage::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RtcmMessage::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RtcmMessage *self = (t_RtcmMessage *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RtcmMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(RtcmMessage), &PY_TYPE_DEF(RtcmMessage), module, "RtcmMessage", 0);
            }

            void t_RtcmMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "class_", make_descriptor(RtcmMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "wrapfn_", make_descriptor(t_RtcmMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RtcmMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RtcmMessage::initializeClass, 1)))
                return NULL;
              return t_RtcmMessage::wrap_Object(RtcmMessage(((t_RtcmMessage *) arg)->object.this$));
            }
            static PyObject *t_RtcmMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RtcmMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RtcmMessage_of_(t_RtcmMessage *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_RtcmMessage_init_(t_RtcmMessage *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              RtcmMessage object((jobject) NULL);

              if (!parseArgs(args, "IK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = RtcmMessage(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_RtcmMessage_getData(t_RtcmMessage *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getData());
              return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
            }
            static PyObject *t_RtcmMessage_get__parameters_(t_RtcmMessage *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_RtcmMessage_get__data(t_RtcmMessage *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getData());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/StateFunction.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *StateFunction::class$ = NULL;
      jmethodID *StateFunction::mids$ = NULL;
      bool StateFunction::live$ = false;

      jclass StateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/StateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_2a145999b8c9a41d] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > StateFunction::value(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_2a145999b8c9a41d], a0.this$));
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
      static PyObject *t_StateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateFunction_value(t_StateFunction *self, PyObject *arg);

      static PyMethodDef t_StateFunction__methods_[] = {
        DECLARE_METHOD(t_StateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateFunction)[] = {
        { Py_tp_methods, t_StateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateFunction, t_StateFunction, StateFunction);

      void t_StateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(StateFunction), &PY_TYPE_DEF(StateFunction), module, "StateFunction", 0);
      }

      void t_StateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "class_", make_descriptor(StateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "wrapfn_", make_descriptor(t_StateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateFunction::initializeClass, 1)))
          return NULL;
        return t_StateFunction::wrap_Object(StateFunction(((t_StateFunction *) arg)->object.this$));
      }
      static PyObject *t_StateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateFunction_value(t_StateFunction *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "java/util/List.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF$CPFEphemeris::class$ = NULL;
        jmethodID *CPF$CPFEphemeris::mids$ = NULL;
        bool CPF$CPFEphemeris::live$ = false;

        jclass CPF$CPFEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF$CPFEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fa27d74d51a8d629] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPF;Ljava/lang/String;)V");
            mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getEphemeridesDataLines_0d9551367f7ecdef] = env->getMethodID(cls, "getEphemeridesDataLines", "()Ljava/util/List;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_fa108fc36df3791a] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_587eea156586204f] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF$CPFEphemeris::CPF$CPFEphemeris(const ::org::orekit::files::ilrs::CPF & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa27d74d51a8d629, a0.this$, a1.this$)) {}

        ::org::orekit::utils::CartesianDerivativesFilter CPF$CPFEphemeris::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837]));
        }

        ::java::util::List CPF$CPFEphemeris::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_0d9551367f7ecdef]));
        }

        ::java::util::List CPF$CPFEphemeris::getEphemeridesDataLines() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEphemeridesDataLines_0d9551367f7ecdef]));
        }

        ::org::orekit::frames::Frame CPF$CPFEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        ::java::lang::String CPF$CPFEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
        }

        jint CPF$CPFEphemeris::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
        }

        jdouble CPF$CPFEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::org::orekit::propagation::BoundedPropagator CPF$CPFEphemeris::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_fa108fc36df3791a]));
        }

        ::org::orekit::propagation::BoundedPropagator CPF$CPFEphemeris::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_587eea156586204f], a0.this$));
        }

        ::java::util::List CPF$CPFEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
        }

        ::org::orekit::time::AbsoluteDate CPF$CPFEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate CPF$CPFEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
      namespace ilrs {
        static PyObject *t_CPF$CPFEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF$CPFEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF$CPFEphemeris_init_(t_CPF$CPFEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF$CPFEphemeris_getAvailableDerivatives(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getCoordinates(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getEphemeridesDataLines(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getFrame(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getId(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getInterpolationSamples(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getMu(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getPropagator(t_CPF$CPFEphemeris *self, PyObject *args);
        static PyObject *t_CPF$CPFEphemeris_getSegments(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getStart(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getStop(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_get__availableDerivatives(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__coordinates(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__ephemeridesDataLines(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__frame(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__id(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__interpolationSamples(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__mu(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__propagator(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__segments(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__start(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__stop(t_CPF$CPFEphemeris *self, void *data);
        static PyGetSetDef t_CPF$CPFEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, availableDerivatives),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, coordinates),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, ephemeridesDataLines),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, frame),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, id),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, interpolationSamples),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, mu),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, propagator),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, segments),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, start),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF$CPFEphemeris__methods_[] = {
          DECLARE_METHOD(t_CPF$CPFEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getEphemeridesDataLines, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF$CPFEphemeris)[] = {
          { Py_tp_methods, t_CPF$CPFEphemeris__methods_ },
          { Py_tp_init, (void *) t_CPF$CPFEphemeris_init_ },
          { Py_tp_getset, t_CPF$CPFEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF$CPFEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPF$CPFEphemeris, t_CPF$CPFEphemeris, CPF$CPFEphemeris);

        void t_CPF$CPFEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF$CPFEphemeris), &PY_TYPE_DEF(CPF$CPFEphemeris), module, "CPF$CPFEphemeris", 0);
        }

        void t_CPF$CPFEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "class_", make_descriptor(CPF$CPFEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "wrapfn_", make_descriptor(t_CPF$CPFEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPF$CPFEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF$CPFEphemeris::initializeClass, 1)))
            return NULL;
          return t_CPF$CPFEphemeris::wrap_Object(CPF$CPFEphemeris(((t_CPF$CPFEphemeris *) arg)->object.this$));
        }
        static PyObject *t_CPF$CPFEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF$CPFEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF$CPFEphemeris_init_(t_CPF$CPFEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::files::ilrs::CPF a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          CPF$CPFEphemeris object((jobject) NULL);

          if (!parseArgs(args, "ks", ::org::orekit::files::ilrs::CPF::initializeClass, &a0, &a1))
          {
            INT_CALL(object = CPF$CPFEphemeris(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CPF$CPFEphemeris_getAvailableDerivatives(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getCoordinates(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFCoordinate));
        }

        static PyObject *t_CPF$CPFEphemeris_getEphemeridesDataLines(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEphemeridesDataLines());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFCoordinate));
        }

        static PyObject *t_CPF$CPFEphemeris_getFrame(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getId(t_CPF$CPFEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getInterpolationSamples(t_CPF$CPFEphemeris *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPF$CPFEphemeris_getMu(t_CPF$CPFEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPF$CPFEphemeris_getPropagator(t_CPF$CPFEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_CPF$CPFEphemeris_getSegments(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFEphemeris));
        }

        static PyObject *t_CPF$CPFEphemeris_getStart(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getStop(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_get__availableDerivatives(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__coordinates(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__ephemeridesDataLines(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemeridesDataLines());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__frame(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__id(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__interpolationSamples(t_CPF$CPFEphemeris *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__mu(t_CPF$CPFEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__propagator(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__segments(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__start(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__stop(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/StringWriter.h"
#include "java/io/StringWriter.h"
#include "java/io/IOException.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *StringWriter::class$ = NULL;
    jmethodID *StringWriter::mids$ = NULL;
    bool StringWriter::live$ = false;

    jclass StringWriter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/StringWriter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_append_3fe6ca893e43779c] = env->getMethodID(cls, "append", "(C)Ljava/io/StringWriter;");
        mids$[mid_append_854f9de13a7975d8] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/StringWriter;");
        mids$[mid_append_928c9018f85fa8fb] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0640e6acf969ed28] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_getBuffer_94bc674fec0d7bbe] = env->getMethodID(cls, "getBuffer", "()Ljava/lang/StringBuffer;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_write_f5ffdf29129ef90a] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_a3da1a935cb37f7b] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_5421d1c1f03cf945] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_96097c5e4aacac76] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringWriter::StringWriter() : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    StringWriter::StringWriter(jint a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    StringWriter StringWriter::append(jchar a0) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_3fe6ca893e43779c], a0));
    }

    StringWriter StringWriter::append(const ::java::lang::CharSequence & a0) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_854f9de13a7975d8], a0.this$));
    }

    StringWriter StringWriter::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_928c9018f85fa8fb], a0.this$, a1, a2));
    }

    void StringWriter::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void StringWriter::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0640e6acf969ed28]);
    }

    ::java::lang::StringBuffer StringWriter::getBuffer() const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_getBuffer_94bc674fec0d7bbe]));
    }

    ::java::lang::String StringWriter::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    void StringWriter::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_f5ffdf29129ef90a], a0.this$);
    }

    void StringWriter::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a3da1a935cb37f7b], a0);
    }

    void StringWriter::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_5421d1c1f03cf945], a0.this$, a1, a2);
    }

    void StringWriter::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_96097c5e4aacac76], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_StringWriter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringWriter_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringWriter_init_(t_StringWriter *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringWriter_append(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_close(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_flush(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_getBuffer(t_StringWriter *self);
    static PyObject *t_StringWriter_toString(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_write(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_get__buffer(t_StringWriter *self, void *data);
    static PyGetSetDef t_StringWriter__fields_[] = {
      DECLARE_GET_FIELD(t_StringWriter, buffer),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_StringWriter__methods_[] = {
      DECLARE_METHOD(t_StringWriter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringWriter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringWriter, append, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, close, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, flush, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, getBuffer, METH_NOARGS),
      DECLARE_METHOD(t_StringWriter, toString, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringWriter)[] = {
      { Py_tp_methods, t_StringWriter__methods_ },
      { Py_tp_init, (void *) t_StringWriter_init_ },
      { Py_tp_getset, t_StringWriter__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringWriter)[] = {
      &PY_TYPE_DEF(::java::io::Writer),
      NULL
    };

    DEFINE_TYPE(StringWriter, t_StringWriter, StringWriter);

    void t_StringWriter::install(PyObject *module)
    {
      installType(&PY_TYPE(StringWriter), &PY_TYPE_DEF(StringWriter), module, "StringWriter", 0);
    }

    void t_StringWriter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "class_", make_descriptor(StringWriter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "wrapfn_", make_descriptor(t_StringWriter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringWriter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringWriter::initializeClass, 1)))
        return NULL;
      return t_StringWriter::wrap_Object(StringWriter(((t_StringWriter *) arg)->object.this$));
    }
    static PyObject *t_StringWriter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringWriter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringWriter_init_(t_StringWriter *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          StringWriter object((jobject) NULL);

          INT_CALL(object = StringWriter());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          StringWriter object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = StringWriter(a0));
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

    static PyObject *t_StringWriter_append(t_StringWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringWriter::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringWriter::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_StringWriter_close(t_StringWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_StringWriter_flush(t_StringWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_StringWriter_getBuffer(t_StringWriter *self)
    {
      ::java::lang::StringBuffer result((jobject) NULL);
      OBJ_CALL(result = self->object.getBuffer());
      return ::java::lang::t_StringBuffer::wrap_Object(result);
    }

    static PyObject *t_StringWriter_toString(t_StringWriter *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_StringWriter_write(t_StringWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_StringWriter_get__buffer(t_StringWriter *self, void *data)
    {
      ::java::lang::StringBuffer value((jobject) NULL);
      OBJ_CALL(value = self->object.getBuffer());
      return ::java::lang::t_StringBuffer::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/HighamHall54IntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *HighamHall54IntegratorBuilder::class$ = NULL;
        jmethodID *HighamHall54IntegratorBuilder::mids$ = NULL;
        bool HighamHall54IntegratorBuilder::live$ = false;

        jclass HighamHall54IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/HighamHall54IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54IntegratorBuilder::HighamHall54IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator HighamHall54IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_f50d555477b898d8], a0.this$, a1.this$));
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
        static PyObject *t_HighamHall54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HighamHall54IntegratorBuilder_init_(t_HighamHall54IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54IntegratorBuilder_buildIntegrator(t_HighamHall54IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_HighamHall54IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54IntegratorBuilder)[] = {
          { Py_tp_methods, t_HighamHall54IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_HighamHall54IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HighamHall54IntegratorBuilder, t_HighamHall54IntegratorBuilder, HighamHall54IntegratorBuilder);

        void t_HighamHall54IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54IntegratorBuilder), &PY_TYPE_DEF(HighamHall54IntegratorBuilder), module, "HighamHall54IntegratorBuilder", 0);
        }

        void t_HighamHall54IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "class_", make_descriptor(HighamHall54IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "wrapfn_", make_descriptor(t_HighamHall54IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_HighamHall54IntegratorBuilder::wrap_Object(HighamHall54IntegratorBuilder(((t_HighamHall54IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HighamHall54IntegratorBuilder_init_(t_HighamHall54IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HighamHall54IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HighamHall54IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54IntegratorBuilder_buildIntegrator(t_HighamHall54IntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/orbits/OrbitBlender.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitBlender::class$ = NULL;
      jmethodID *OrbitBlender::mids$ = NULL;
      bool OrbitBlender::live$ = false;

      jclass OrbitBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4ca5c927f45b7b66] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/propagation/Propagator;Lorg/orekit/frames/Frame;)V");
          mids$[mid_interpolate_633c02f6304af1cb] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrbitBlender::OrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::propagation::Propagator & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4ca5c927f45b7b66, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_OrbitBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitBlender_of_(t_OrbitBlender *self, PyObject *args);
      static int t_OrbitBlender_init_(t_OrbitBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrbitBlender_get__parameters_(t_OrbitBlender *self, void *data);
      static PyGetSetDef t_OrbitBlender__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitBlender__methods_[] = {
        DECLARE_METHOD(t_OrbitBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitBlender, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitBlender)[] = {
        { Py_tp_methods, t_OrbitBlender__methods_ },
        { Py_tp_init, (void *) t_OrbitBlender_init_ },
        { Py_tp_getset, t_OrbitBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(OrbitBlender, t_OrbitBlender, OrbitBlender);
      PyObject *t_OrbitBlender::wrap_Object(const OrbitBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitBlender *self = (t_OrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitBlender *self = (t_OrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitBlender), &PY_TYPE_DEF(OrbitBlender), module, "OrbitBlender", 0);
      }

      void t_OrbitBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "class_", make_descriptor(OrbitBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "wrapfn_", make_descriptor(t_OrbitBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrbitBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitBlender::initializeClass, 1)))
          return NULL;
        return t_OrbitBlender::wrap_Object(OrbitBlender(((t_OrbitBlender *) arg)->object.this$));
      }
      static PyObject *t_OrbitBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitBlender_of_(t_OrbitBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrbitBlender_init_(t_OrbitBlender *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction a0((jobject) NULL);
        ::org::orekit::propagation::Propagator a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        OrbitBlender object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OrbitBlender(a0, a1, a2));
          self->object = object;
          self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
      static PyObject *t_OrbitBlender_get__parameters_(t_OrbitBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *SecondaryODE::class$ = NULL;
      jmethodID *SecondaryODE::mids$ = NULL;
      bool SecondaryODE::live$ = false;

      jclass SecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/SecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_6fd4242fb5dae63c] = env->getMethodID(cls, "computeDerivatives", "(D[D[D[D)[D");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_2e25eaf0e03aa89f] = env->getMethodID(cls, "init", "(D[D[DD)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > SecondaryODE::computeDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_6fd4242fb5dae63c], a0, a1.this$, a2.this$, a3.this$));
      }

      jint SecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      void SecondaryODE::init(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_2e25eaf0e03aa89f], a0, a1.this$, a2.this$, a3);
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
      static PyObject *t_SecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondaryODE_computeDerivatives(t_SecondaryODE *self, PyObject *args);
      static PyObject *t_SecondaryODE_getDimension(t_SecondaryODE *self);
      static PyObject *t_SecondaryODE_init(t_SecondaryODE *self, PyObject *args);
      static PyObject *t_SecondaryODE_get__dimension(t_SecondaryODE *self, void *data);
      static PyGetSetDef t_SecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_SecondaryODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecondaryODE__methods_[] = {
        DECLARE_METHOD(t_SecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_SecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_SecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecondaryODE)[] = {
        { Py_tp_methods, t_SecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecondaryODE, t_SecondaryODE, SecondaryODE);

      void t_SecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(SecondaryODE), &PY_TYPE_DEF(SecondaryODE), module, "SecondaryODE", 0);
      }

      void t_SecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "class_", make_descriptor(SecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "wrapfn_", make_descriptor(t_SecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecondaryODE::initializeClass, 1)))
          return NULL;
        return t_SecondaryODE::wrap_Object(SecondaryODE(((t_SecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_SecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SecondaryODE_computeDerivatives(t_SecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< jdouble > a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D[D", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_SecondaryODE_getDimension(t_SecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecondaryODE_init(t_SecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        jdouble a3;

        if (!parseArgs(args, "D[D[DD", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_SecondaryODE_get__dimension(t_SecondaryODE *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractPropagatorBuilder::class$ = NULL;
        jmethodID *AbstractPropagatorBuilder::mids$ = NULL;
        bool AbstractPropagatorBuilder::live$ = false;

        jclass AbstractPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_34784b387edde43d] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/AdditionalDerivativesProvider;)V");
            mids$[mid_deselectDynamicParameters_0640e6acf969ed28] = env->getMethodID(cls, "deselectDynamicParameters", "()V");
            mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_7a97f7e149e79afb] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_467d574a7997e53a] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPositionScale_557b8123390d8d0c] = env->getMethodID(cls, "getPositionScale", "()D");
            mids$[mid_getPropagationParametersDrivers_467d574a7997e53a] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_a53a7513ecedada2] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_resetOrbit_a9af82a1647a21f3] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_getAdditionalDerivativesProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_addSupportedParameters_4ccaedadb068bdeb] = env->getMethodID(cls, "addSupportedParameters", "(Ljava/util/List;)V");
            mids$[mid_setParameters_cc18240f4a737f14] = env->getMethodID(cls, "setParameters", "([D)V");
            mids$[mid_createInitialOrbit_71f9c54b5f482a59] = env->getMethodID(cls, "createInitialOrbit", "()Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractPropagatorBuilder::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_34784b387edde43d], a0.this$);
        }

        void AbstractPropagatorBuilder::deselectDynamicParameters() const
        {
          env->callVoidMethod(this$, mids$[mid_deselectDynamicParameters_0640e6acf969ed28]);
        }

        ::org::orekit::attitudes::AttitudeProvider AbstractPropagatorBuilder::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_6df6b78ab9377151]));
        }

        ::org::orekit::frames::Frame AbstractPropagatorBuilder::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::time::AbsoluteDate AbstractPropagatorBuilder::getInitialOrbitDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInitialOrbitDate_7a97f7e149e79afb]));
        }

        jdouble AbstractPropagatorBuilder::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::org::orekit::orbits::OrbitType AbstractPropagatorBuilder::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractPropagatorBuilder::getOrbitalParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_467d574a7997e53a]));
        }

        ::org::orekit::orbits::PositionAngleType AbstractPropagatorBuilder::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
        }

        jdouble AbstractPropagatorBuilder::getPositionScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPositionScale_557b8123390d8d0c]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractPropagatorBuilder::getPropagationParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_467d574a7997e53a]));
        }

        JArray< jdouble > AbstractPropagatorBuilder::getSelectedNormalizedParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSelectedNormalizedParameters_a53a7513ecedada2]));
        }

        void AbstractPropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_a9af82a1647a21f3], a0.this$);
        }

        void AbstractPropagatorBuilder::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
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
        static PyObject *t_AbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_addAdditionalDerivativesProvider(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_deselectDynamicParameters(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getAttitudeProvider(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getFrame(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getInitialOrbitDate(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getMu(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getOrbitType(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getOrbitalParametersDrivers(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPositionAngleType(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPositionScale(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPropagationParametersDrivers(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getSelectedNormalizedParameters(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_resetOrbit(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_setAttitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_get__attitudeProvider(t_AbstractPropagatorBuilder *self, void *data);
        static int t_AbstractPropagatorBuilder_set__attitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__frame(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__initialOrbitDate(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__mu(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__orbitType(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__orbitalParametersDrivers(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__positionAngleType(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__positionScale(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__propagationParametersDrivers(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__selectedNormalizedParameters(t_AbstractPropagatorBuilder *self, void *data);
        static PyGetSetDef t_AbstractPropagatorBuilder__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractPropagatorBuilder, attitudeProvider),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, frame),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, initialOrbitDate),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, mu),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, orbitType),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, orbitalParametersDrivers),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, positionAngleType),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, positionScale),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, propagationParametersDrivers),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, selectedNormalizedParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, deselectDynamicParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getInitialOrbitDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getMu, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getOrbitalParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPositionScale, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPropagationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getSelectedNormalizedParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, resetOrbit, METH_O),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, setAttitudeProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPropagatorBuilder)[] = {
          { Py_tp_methods, t_AbstractPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractPropagatorBuilder, t_AbstractPropagatorBuilder, AbstractPropagatorBuilder);

        void t_AbstractPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPropagatorBuilder), &PY_TYPE_DEF(AbstractPropagatorBuilder), module, "AbstractPropagatorBuilder", 0);
        }

        void t_AbstractPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "class_", make_descriptor(AbstractPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "wrapfn_", make_descriptor(t_AbstractPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractPropagatorBuilder::wrap_Object(AbstractPropagatorBuilder(((t_AbstractPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPropagatorBuilder_addAdditionalDerivativesProvider(t_AbstractPropagatorBuilder *self, PyObject *arg)
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

        static PyObject *t_AbstractPropagatorBuilder_deselectDynamicParameters(t_AbstractPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.deselectDynamicParameters());
          Py_RETURN_NONE;
        }

        static PyObject *t_AbstractPropagatorBuilder_getAttitudeProvider(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getFrame(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getInitialOrbitDate(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getMu(t_AbstractPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getOrbitType(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getOrbitalParametersDrivers(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPositionAngleType(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPositionScale(t_AbstractPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPositionScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPropagationParametersDrivers(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getSelectedNormalizedParameters(t_AbstractPropagatorBuilder *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelectedNormalizedParameters());
          return result.wrap();
        }

        static PyObject *t_AbstractPropagatorBuilder_resetOrbit(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetOrbit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "resetOrbit", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_setAttitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_get__attitudeProvider(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }
        static int t_AbstractPropagatorBuilder_set__attitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg, void *data)
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

        static PyObject *t_AbstractPropagatorBuilder_get__frame(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__initialOrbitDate(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__mu(t_AbstractPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__orbitType(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__orbitalParametersDrivers(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__positionAngleType(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__positionScale(t_AbstractPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPositionScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__propagationParametersDrivers(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__selectedNormalizedParameters(t_AbstractPropagatorBuilder *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelectedNormalizedParameters());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataProvider::class$ = NULL;
      jmethodID *DataProvider::mids$ = NULL;
      bool DataProvider::live$ = false;

      jclass DataProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataProvider");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_DataProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataProvider_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DataProvider__methods_[] = {
        DECLARE_METHOD(t_DataProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvider, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataProvider)[] = {
        { Py_tp_methods, t_DataProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataProvider, t_DataProvider, DataProvider);

      void t_DataProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(DataProvider), &PY_TYPE_DEF(DataProvider), module, "DataProvider", 0);
      }

      void t_DataProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "class_", make_descriptor(DataProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "wrapfn_", make_descriptor(t_DataProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataProvider::initializeClass, 1)))
          return NULL;
        return t_DataProvider::wrap_Object(DataProvider(((t_DataProvider *) arg)->object.this$));
      }
      static PyObject *t_DataProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoublyIndexedDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$DoublyIndexedDoubleConsumer::mids$ = NULL;
            bool ParseToken$DoublyIndexedDoubleConsumer::live$ = false;

            jclass ParseToken$DoublyIndexedDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_754312f3734d6e2f] = env->getMethodID(cls, "accept", "(IID)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoublyIndexedDoubleConsumer::accept(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_754312f3734d6e2f], a0, a1, a2);
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
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_accept(t_ParseToken$DoublyIndexedDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$DoublyIndexedDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoublyIndexedDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoublyIndexedDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoublyIndexedDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoublyIndexedDoubleConsumer, t_ParseToken$DoublyIndexedDoubleConsumer, ParseToken$DoublyIndexedDoubleConsumer);

            void t_ParseToken$DoublyIndexedDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), &PY_TYPE_DEF(ParseToken$DoublyIndexedDoubleConsumer), module, "ParseToken$DoublyIndexedDoubleConsumer", 0);
            }

            void t_ParseToken$DoublyIndexedDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "class_", make_descriptor(ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoublyIndexedDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoublyIndexedDoubleConsumer::wrap_Object(ParseToken$DoublyIndexedDoubleConsumer(((t_ParseToken$DoublyIndexedDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_accept(t_ParseToken$DoublyIndexedDoubleConsumer *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.accept(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/propagation/events/FieldApsideDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldApsideDetector::class$ = NULL;
        jmethodID *FieldApsideDetector::mids$ = NULL;
        bool FieldApsideDetector::live$ = false;

        jclass FieldApsideDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldApsideDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8c98afebb6212490] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_init$_aaab803ef8769023] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_create_9a8291c9838e8605] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldApsideDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldApsideDetector::FieldApsideDetector(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8c98afebb6212490, a0.this$)) {}

        FieldApsideDetector::FieldApsideDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_aaab803ef8769023, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldApsideDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
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
        static PyObject *t_FieldApsideDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldApsideDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldApsideDetector_of_(t_FieldApsideDetector *self, PyObject *args);
        static int t_FieldApsideDetector_init_(t_FieldApsideDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldApsideDetector_g(t_FieldApsideDetector *self, PyObject *args);
        static PyObject *t_FieldApsideDetector_get__parameters_(t_FieldApsideDetector *self, void *data);
        static PyGetSetDef t_FieldApsideDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldApsideDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldApsideDetector__methods_[] = {
          DECLARE_METHOD(t_FieldApsideDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldApsideDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldApsideDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldApsideDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldApsideDetector)[] = {
          { Py_tp_methods, t_FieldApsideDetector__methods_ },
          { Py_tp_init, (void *) t_FieldApsideDetector_init_ },
          { Py_tp_getset, t_FieldApsideDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldApsideDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldApsideDetector, t_FieldApsideDetector, FieldApsideDetector);
        PyObject *t_FieldApsideDetector::wrap_Object(const FieldApsideDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldApsideDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldApsideDetector *self = (t_FieldApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldApsideDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldApsideDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldApsideDetector *self = (t_FieldApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldApsideDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldApsideDetector), &PY_TYPE_DEF(FieldApsideDetector), module, "FieldApsideDetector", 0);
        }

        void t_FieldApsideDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "class_", make_descriptor(FieldApsideDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "wrapfn_", make_descriptor(t_FieldApsideDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldApsideDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldApsideDetector::initializeClass, 1)))
            return NULL;
          return t_FieldApsideDetector::wrap_Object(FieldApsideDetector(((t_FieldApsideDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldApsideDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldApsideDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldApsideDetector_of_(t_FieldApsideDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldApsideDetector_init_(t_FieldApsideDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              FieldApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldApsideDetector(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              FieldApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldApsideDetector(a0, a1));
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

        static PyObject *t_FieldApsideDetector_g(t_FieldApsideDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldApsideDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FieldApsideDetector_get__parameters_(t_FieldApsideDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays::class$ = NULL;
      jmethodID *MathArrays::mids$ = NULL;
      bool MathArrays::live$ = false;

      jclass MathArrays::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays");

          mids$ = new jmethodID[max_mid];
          mids$[mid_buildArray_cc1a24bbd64f47d6] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_buildArray_918e914ae6927f78] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;II)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_buildArray_bf02a5b7b48e23fe] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;III)[[[Lorg/hipparchus/FieldElement;");
          mids$[mid_checkEqualLength_ab4840ba016ef1da] = env->getStaticMethodID(cls, "checkEqualLength", "([D[D)V");
          mids$[mid_checkEqualLength_2f87d6c2a43180ff] = env->getStaticMethodID(cls, "checkEqualLength", "([I[I)V");
          mids$[mid_checkEqualLength_2c0fd42a693364fa] = env->getStaticMethodID(cls, "checkEqualLength", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_checkEqualLength_e4da1fc662513bd0] = env->getStaticMethodID(cls, "checkEqualLength", "([D[DZ)Z");
          mids$[mid_checkEqualLength_698c1440c3cd002e] = env->getStaticMethodID(cls, "checkEqualLength", "([I[IZ)Z");
          mids$[mid_checkEqualLength_ea2ade9a62eeb9ec] = env->getStaticMethodID(cls, "checkEqualLength", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Z)Z");
          mids$[mid_checkNonNegative_b8d088127dcc34ef] = env->getStaticMethodID(cls, "checkNonNegative", "([J)V");
          mids$[mid_checkNonNegative_f40ad1a354d03b89] = env->getStaticMethodID(cls, "checkNonNegative", "([[J)V");
          mids$[mid_checkNotNaN_cc18240f4a737f14] = env->getStaticMethodID(cls, "checkNotNaN", "([D)V");
          mids$[mid_checkOrder_cc18240f4a737f14] = env->getStaticMethodID(cls, "checkOrder", "([D)V");
          mids$[mid_checkOrder_5d9c9afaca2e497c] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_checkOrder_89ee3544b02ad6f9] = env->getStaticMethodID(cls, "checkOrder", "([DLorg/hipparchus/util/MathArrays$OrderDirection;Z)V");
          mids$[mid_checkOrder_e5501a88db9bc72b] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/util/MathArrays$OrderDirection;Z)V");
          mids$[mid_checkOrder_bf1fab8415688b27] = env->getStaticMethodID(cls, "checkOrder", "([DLorg/hipparchus/util/MathArrays$OrderDirection;ZZ)Z");
          mids$[mid_checkOrder_f13890a7012c8e1c] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/util/MathArrays$OrderDirection;ZZ)Z");
          mids$[mid_checkPositive_cc18240f4a737f14] = env->getStaticMethodID(cls, "checkPositive", "([D)V");
          mids$[mid_checkRectangular_f40ad1a354d03b89] = env->getStaticMethodID(cls, "checkRectangular", "([[J)V");
          mids$[mid_concatenate_f19c0141146dd11b] = env->getStaticMethodID(cls, "concatenate", "([[D)[D");
          mids$[mid_convolve_d2593442847fe350] = env->getStaticMethodID(cls, "convolve", "([D[D)[D");
          mids$[mid_cosAngle_628a76297e217f13] = env->getStaticMethodID(cls, "cosAngle", "([D[D)D");
          mids$[mid_distance_628a76297e217f13] = env->getStaticMethodID(cls, "distance", "([D[D)D");
          mids$[mid_distance_e49dbe74159ed118] = env->getStaticMethodID(cls, "distance", "([I[I)D");
          mids$[mid_distance1_628a76297e217f13] = env->getStaticMethodID(cls, "distance1", "([D[D)D");
          mids$[mid_distance1_f60ba2e14f6d8c9c] = env->getStaticMethodID(cls, "distance1", "([I[I)I");
          mids$[mid_distanceInf_628a76297e217f13] = env->getStaticMethodID(cls, "distanceInf", "([D[D)D");
          mids$[mid_distanceInf_f60ba2e14f6d8c9c] = env->getStaticMethodID(cls, "distanceInf", "([I[I)I");
          mids$[mid_ebeAdd_d2593442847fe350] = env->getStaticMethodID(cls, "ebeAdd", "([D[D)[D");
          mids$[mid_ebeDivide_d2593442847fe350] = env->getStaticMethodID(cls, "ebeDivide", "([D[D)[D");
          mids$[mid_ebeMultiply_d2593442847fe350] = env->getStaticMethodID(cls, "ebeMultiply", "([D[D)[D");
          mids$[mid_ebeSubtract_d2593442847fe350] = env->getStaticMethodID(cls, "ebeSubtract", "([D[D)[D");
          mids$[mid_equals_d5b882f16e78e133] = env->getStaticMethodID(cls, "equals", "([B[B)Z");
          mids$[mid_equals_3c9cd66399ef44d7] = env->getStaticMethodID(cls, "equals", "([D[D)Z");
          mids$[mid_equals_3a3ed4baa87ab62d] = env->getStaticMethodID(cls, "equals", "([F[F)Z");
          mids$[mid_equals_3a89abee8ad1e7d2] = env->getStaticMethodID(cls, "equals", "([I[I)Z");
          mids$[mid_equals_9f3fe168122d3e43] = env->getStaticMethodID(cls, "equals", "([J[J)Z");
          mids$[mid_equals_b788c922a3ed1ff3] = env->getStaticMethodID(cls, "equals", "([S[S)Z");
          mids$[mid_equalsIncludingNaN_3c9cd66399ef44d7] = env->getStaticMethodID(cls, "equalsIncludingNaN", "([D[D)Z");
          mids$[mid_equalsIncludingNaN_3a3ed4baa87ab62d] = env->getStaticMethodID(cls, "equalsIncludingNaN", "([F[F)Z");
          mids$[mid_isMonotonic_0362324c8a2e5805] = env->getStaticMethodID(cls, "isMonotonic", "([DLorg/hipparchus/util/MathArrays$OrderDirection;Z)Z");
          mids$[mid_isMonotonic_de3cbaea4121081e] = env->getStaticMethodID(cls, "isMonotonic", "([Ljava/lang/Comparable;Lorg/hipparchus/util/MathArrays$OrderDirection;Z)Z");
          mids$[mid_linearCombination_628a76297e217f13] = env->getStaticMethodID(cls, "linearCombination", "([D[D)D");
          mids$[mid_linearCombination_79d60f5d1a9d8623] = env->getStaticMethodID(cls, "linearCombination", "(DDDD)D");
          mids$[mid_linearCombination_9f42b6fd9d0f2606] = env->getStaticMethodID(cls, "linearCombination", "(DDDDDD)D");
          mids$[mid_linearCombination_34decd667cde93a3] = env->getStaticMethodID(cls, "linearCombination", "(DDDDDDDD)D");
          mids$[mid_natural_014107aa2fd99303] = env->getStaticMethodID(cls, "natural", "(I)[I");
          mids$[mid_normalizeArray_59ea33beffed37b5] = env->getStaticMethodID(cls, "normalizeArray", "([DD)[D");
          mids$[mid_safeNorm_86c4a0582e0747ce] = env->getStaticMethodID(cls, "safeNorm", "([D)D");
          mids$[mid_scale_31b9a2982d73e37a] = env->getStaticMethodID(cls, "scale", "(D[D)[D");
          mids$[mid_scaleInPlace_092013acd44a9e63] = env->getStaticMethodID(cls, "scaleInPlace", "(D[D)V");
          mids$[mid_sequence_ebc3194797d38989] = env->getStaticMethodID(cls, "sequence", "(III)[I");
          mids$[mid_shuffle_ec63cb8a58ef5a54] = env->getStaticMethodID(cls, "shuffle", "([I)V");
          mids$[mid_shuffle_7d86656f508ee25c] = env->getStaticMethodID(cls, "shuffle", "([ILorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_shuffle_c4ed6b04af6788e3] = env->getStaticMethodID(cls, "shuffle", "([IILorg/hipparchus/util/MathArrays$Position;)V");
          mids$[mid_shuffle_272558de9fb3be98] = env->getStaticMethodID(cls, "shuffle", "([IILorg/hipparchus/util/MathArrays$Position;Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_sortInPlace_d28c10701e55f94c] = env->getStaticMethodID(cls, "sortInPlace", "([D[[D)V");
          mids$[mid_sortInPlace_33ef5b09ab6b2ec9] = env->getStaticMethodID(cls, "sortInPlace", "([DLorg/hipparchus/util/MathArrays$OrderDirection;[[D)V");
          mids$[mid_unique_1db7c087750eaffe] = env->getStaticMethodID(cls, "unique", "([D)[D");
          mids$[mid_verifyValues_8ceff153711ac571] = env->getStaticMethodID(cls, "verifyValues", "([DII)Z");
          mids$[mid_verifyValues_8f9a240c089e2ce0] = env->getStaticMethodID(cls, "verifyValues", "([D[DII)Z");
          mids$[mid_verifyValues_ec609308d4860815] = env->getStaticMethodID(cls, "verifyValues", "([DIIZ)Z");
          mids$[mid_verifyValues_eac1096da7fabd15] = env->getStaticMethodID(cls, "verifyValues", "([D[DIIZ)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::FieldElement > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::org::hipparchus::FieldElement >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_cc1a24bbd64f47d6], a0.this$, a1));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_918e914ae6927f78], a0.this$, a1, a2));
      }

      JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< JArray< ::org::hipparchus::FieldElement > > >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_bf02a5b7b48e23fe], a0.this$, a1, a2, a3));
      }

      void MathArrays::checkEqualLength(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_ab4840ba016ef1da], a0.this$, a1.this$);
      }

      void MathArrays::checkEqualLength(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_2f87d6c2a43180ff], a0.this$, a1.this$);
      }

      void MathArrays::checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_2c0fd42a693364fa], a0.this$, a1.this$);
      }

      jboolean MathArrays::checkEqualLength(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_e4da1fc662513bd0], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkEqualLength(const JArray< jint > & a0, const JArray< jint > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_698c1440c3cd002e], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_ea2ade9a62eeb9ec], a0.this$, a1.this$, a2);
      }

      void MathArrays::checkNonNegative(const JArray< jlong > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNonNegative_b8d088127dcc34ef], a0.this$);
      }

      void MathArrays::checkNonNegative(const JArray< JArray< jlong > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNonNegative_f40ad1a354d03b89], a0.this$);
      }

      void MathArrays::checkNotNaN(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNaN_cc18240f4a737f14], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_cc18240f4a737f14], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_5d9c9afaca2e497c], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_89ee3544b02ad6f9], a0.this$, a1.this$, a2);
      }

      void MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_e5501a88db9bc72b], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkOrder(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkOrder_bf1fab8415688b27], a0.this$, a1.this$, a2, a3);
      }

      jboolean MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkOrder_f13890a7012c8e1c], a0.this$, a1.this$, a2, a3);
      }

      void MathArrays::checkPositive(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkPositive_cc18240f4a737f14], a0.this$);
      }

      void MathArrays::checkRectangular(const JArray< JArray< jlong > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRectangular_f40ad1a354d03b89], a0.this$);
      }

      JArray< jdouble > MathArrays::concatenate(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_concatenate_f19c0141146dd11b], a0.this$));
      }

      JArray< jdouble > MathArrays::convolve(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_convolve_d2593442847fe350], a0.this$, a1.this$));
      }

      jdouble MathArrays::cosAngle(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cosAngle_628a76297e217f13], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance_628a76297e217f13], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance_e49dbe74159ed118], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance1(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance1_628a76297e217f13], a0.this$, a1.this$);
      }

      jint MathArrays::distance1(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_distance1_f60ba2e14f6d8c9c], a0.this$, a1.this$);
      }

      jdouble MathArrays::distanceInf(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_628a76297e217f13], a0.this$, a1.this$);
      }

      jint MathArrays::distanceInf(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_distanceInf_f60ba2e14f6d8c9c], a0.this$, a1.this$);
      }

      JArray< jdouble > MathArrays::ebeAdd(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeAdd_d2593442847fe350], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeDivide(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeDivide_d2593442847fe350], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeMultiply(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeMultiply_d2593442847fe350], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeSubtract(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeSubtract_d2593442847fe350], a0.this$, a1.this$));
      }

      jboolean MathArrays::equals(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_d5b882f16e78e133], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_3c9cd66399ef44d7], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_3a3ed4baa87ab62d], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_3a89abee8ad1e7d2], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jlong > & a0, const JArray< jlong > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_9f3fe168122d3e43], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jshort > & a0, const JArray< jshort > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_b788c922a3ed1ff3], a0.this$, a1.this$);
      }

      jboolean MathArrays::equalsIncludingNaN(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_3c9cd66399ef44d7], a0.this$, a1.this$);
      }

      jboolean MathArrays::equalsIncludingNaN(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_3a3ed4baa87ab62d], a0.this$, a1.this$);
      }

      jboolean MathArrays::isMonotonic(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMonotonic_0362324c8a2e5805], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::isMonotonic(const JArray< ::java::lang::Comparable > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMonotonic_de3cbaea4121081e], a0.this$, a1.this$, a2);
      }

      jdouble MathArrays::linearCombination(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_628a76297e217f13], a0.this$, a1.this$);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_79d60f5d1a9d8623], a0, a1, a2, a3);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_9f42b6fd9d0f2606], a0, a1, a2, a3, a4, a5);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_34decd667cde93a3], a0, a1, a2, a3, a4, a5, a6, a7);
      }

      JArray< jint > MathArrays::natural(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_natural_014107aa2fd99303], a0));
      }

      JArray< jdouble > MathArrays::normalizeArray(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_normalizeArray_59ea33beffed37b5], a0.this$, a1));
      }

      jdouble MathArrays::safeNorm(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_safeNorm_86c4a0582e0747ce], a0.this$);
      }

      JArray< jdouble > MathArrays::scale(jdouble a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_scale_31b9a2982d73e37a], a0, a1.this$));
      }

      void MathArrays::scaleInPlace(jdouble a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_scaleInPlace_092013acd44a9e63], a0, a1.this$);
      }

      JArray< jint > MathArrays::sequence(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_sequence_ebc3194797d38989], a0, a1, a2));
      }

      void MathArrays::shuffle(const JArray< jint > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_ec63cb8a58ef5a54], a0.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, const ::org::hipparchus::random::RandomGenerator & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_7d86656f508ee25c], a0.this$, a1.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, jint a1, const ::org::hipparchus::util::MathArrays$Position & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_c4ed6b04af6788e3], a0.this$, a1, a2.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, jint a1, const ::org::hipparchus::util::MathArrays$Position & a2, const ::org::hipparchus::random::RandomGenerator & a3)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_272558de9fb3be98], a0.this$, a1, a2.this$, a3.this$);
      }

      void MathArrays::sortInPlace(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_sortInPlace_d28c10701e55f94c], a0.this$, a1.this$);
      }

      void MathArrays::sortInPlace(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, const JArray< JArray< jdouble > > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_sortInPlace_33ef5b09ab6b2ec9], a0.this$, a1.this$, a2.this$);
      }

      JArray< jdouble > MathArrays::unique(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_unique_1db7c087750eaffe], a0.this$));
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_8ceff153711ac571], a0.this$, a1, a2);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_8f9a240c089e2ce0], a0.this$, a1.this$, a2, a3);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, jint a1, jint a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_ec609308d4860815], a0.this$, a1, a2, a3);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3, jboolean a4)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_eac1096da7fabd15], a0.this$, a1.this$, a2, a3, a4);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/util/MathArrays$Function.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathArrays_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_buildArray(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkEqualLength(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkNonNegative(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkNotNaN(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_checkOrder(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkPositive(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_checkRectangular(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_concatenate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_convolve(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_cosAngle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distance(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distance1(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distanceInf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeAdd(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeDivide(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeMultiply(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeSubtract(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_equalsIncludingNaN(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_isMonotonic(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_linearCombination(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_natural(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_normalizeArray(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_safeNorm(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_scale(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_scaleInPlace(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_sequence(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_shuffle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_sortInPlace(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_unique(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_verifyValues(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MathArrays__methods_[] = {
        DECLARE_METHOD(t_MathArrays, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, buildArray, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkEqualLength, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkNonNegative, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkNotNaN, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkOrder, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkPositive, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkRectangular, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, concatenate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, convolve, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, cosAngle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distance1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distanceInf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeAdd, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeDivide, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeMultiply, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeSubtract, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, equalsIncludingNaN, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, isMonotonic, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, linearCombination, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, natural, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, normalizeArray, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, safeNorm, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, scale, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, scaleInPlace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, sequence, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, shuffle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, sortInPlace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, unique, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, verifyValues, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays)[] = {
        { Py_tp_methods, t_MathArrays__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathArrays, t_MathArrays, MathArrays);

      void t_MathArrays::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays), &PY_TYPE_DEF(MathArrays), module, "MathArrays", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "Position", make_descriptor(&PY_TYPE_DEF(MathArrays$Position)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "OrderDirection", make_descriptor(&PY_TYPE_DEF(MathArrays$OrderDirection)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "Function", make_descriptor(&PY_TYPE_DEF(MathArrays$Function)));
      }

      void t_MathArrays::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "class_", make_descriptor(MathArrays::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "wrapfn_", make_descriptor(t_MathArrays::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathArrays_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays::initializeClass, 1)))
          return NULL;
        return t_MathArrays::wrap_Object(MathArrays(((t_MathArrays *) arg)->object.this$));
      }
      static PyObject *t_MathArrays_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays_buildArray(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > result((jobject) NULL);

            if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
        }

        PyErr_SetArgsError(type, "buildArray", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkEqualLength(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[I[IZ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[K[KZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "checkEqualLength", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkNonNegative(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jlong > a0((jobject) NULL);

            if (!parseArgs(args, "[J", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkNonNegative(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< JArray< jlong > > a0((jobject) NULL);

            if (!parseArgs(args, "[[J", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkNonNegative(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkNonNegative", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkNotNaN(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkNotNaN(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkNotNaN", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_checkOrder(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;

            if (!parseArgs(args, "[DKZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;

            if (!parseArgs(args, "[KKZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[DKZZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[KKZZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "checkOrder", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkPositive(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkPositive(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkPositive", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_checkRectangular(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jlong > > a0((jobject) NULL);

        if (!parseArg(arg, "[[J", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkRectangular(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkRectangular", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_concatenate(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::concatenate(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "concatenate", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_convolve(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::convolve(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "convolve", args);
        return NULL;
      }

      static PyObject *t_MathArrays_cosAngle(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::cosAngle(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "cosAngle", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distance", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distance1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance1(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distance1", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distanceInf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distanceInf(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distanceInf", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeAdd(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeAdd(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeAdd", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeDivide(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeDivide(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeDivide", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeMultiply(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeMultiply(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeMultiply", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeSubtract(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeSubtract(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeSubtract", args);
        return NULL;
      }

      static PyObject *t_MathArrays_equals(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jbyte > a0((jobject) NULL);
            JArray< jbyte > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[B[B", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jfloat > a0((jobject) NULL);
            JArray< jfloat > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[F[F", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jlong > a0((jobject) NULL);
            JArray< jlong > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[J[J", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jshort > a0((jobject) NULL);
            JArray< jshort > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[S[S", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_MathArrays_equalsIncludingNaN(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jfloat > a0((jobject) NULL);
            JArray< jfloat > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[F[F", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equalsIncludingNaN", args);
        return NULL;
      }

      static PyObject *t_MathArrays_isMonotonic(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[DKZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::isMonotonic(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::java::lang::Comparable > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[KKZ", ::java::lang::Comparable::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::isMonotonic(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "isMonotonic", args);
        return NULL;
      }

      static PyObject *t_MathArrays_linearCombination(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 6:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble result;

            if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3, a4, a5));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 8:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble result;

            if (!parseArgs(args, "DDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_MathArrays_natural(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        JArray< jint > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::natural(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "natural", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_normalizeArray(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble a1;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::normalizeArray(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "normalizeArray", args);
        return NULL;
      }

      static PyObject *t_MathArrays_safeNorm(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::safeNorm(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "safeNorm", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_scale(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::scale(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "scale", args);
        return NULL;
      }

      static PyObject *t_MathArrays_scaleInPlace(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::scaleInPlace(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "scaleInPlace", args);
        return NULL;
      }

      static PyObject *t_MathArrays_sequence(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::sequence(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "sequence", args);
        return NULL;
      }

      static PyObject *t_MathArrays_shuffle(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);

            if (!parseArgs(args, "[Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::util::MathArrays$Position a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[IIK", ::org::hipparchus::util::MathArrays$Position::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::util::t_MathArrays$Position::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 4:
          {
            JArray< jint > a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::util::MathArrays$Position a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::random::RandomGenerator a3((jobject) NULL);

            if (!parseArgs(args, "[IIKk", ::org::hipparchus::util::MathArrays$Position::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::util::t_MathArrays$Position::parameters_, &a3))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "shuffle", args);
        return NULL;
      }

      static PyObject *t_MathArrays_sortInPlace(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< JArray< jdouble > > a1((jobject) NULL);

            if (!parseArgs(args, "[D[[D", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::sortInPlace(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[DK[[D", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::sortInPlace(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "sortInPlace", args);
        return NULL;
      }

      static PyObject *t_MathArrays_unique(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::unique(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "unique", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_verifyValues(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jint a2;
            jint a3;
            jboolean result;

            if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[DIIZ", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 5:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jint a2;
            jint a3;
            jboolean a4;
            jboolean result;

            if (!parseArgs(args, "[D[DIIZ", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3, a4));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "verifyValues", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ObservationDataSet::class$ = NULL;
          jmethodID *ObservationDataSet::mids$ = NULL;
          bool ObservationDataSet::live$ = false;

          jclass ObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_19dd1c22de000ada] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatInSystem;Lorg/orekit/time/AbsoluteDate;IDLjava/util/List;)V");
              mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEventFlag_412668abc8d889e9] = env->getMethodID(cls, "getEventFlag", "()I");
              mids$[mid_getObservationData_0d9551367f7ecdef] = env->getMethodID(cls, "getObservationData", "()Ljava/util/List;");
              mids$[mid_getRcvrClkOffset_557b8123390d8d0c] = env->getMethodID(cls, "getRcvrClkOffset", "()D");
              mids$[mid_getSatellite_c5291c85b38fda6b] = env->getMethodID(cls, "getSatellite", "()Lorg/orekit/gnss/SatInSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObservationDataSet::ObservationDataSet(const ::org::orekit::gnss::SatInSystem & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_19dd1c22de000ada, a0.this$, a1.this$, a2, a3, a4.this$)) {}

          ::org::orekit::time::AbsoluteDate ObservationDataSet::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
          }

          jint ObservationDataSet::getEventFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getEventFlag_412668abc8d889e9]);
          }

          ::java::util::List ObservationDataSet::getObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationData_0d9551367f7ecdef]));
          }

          jdouble ObservationDataSet::getRcvrClkOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcvrClkOffset_557b8123390d8d0c]);
          }

          ::org::orekit::gnss::SatInSystem ObservationDataSet::getSatellite() const
          {
            return ::org::orekit::gnss::SatInSystem(env->callObjectMethod(this$, mids$[mid_getSatellite_c5291c85b38fda6b]));
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
      namespace rinex {
        namespace observation {
          static PyObject *t_ObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObservationDataSet_init_(t_ObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObservationDataSet_getDate(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getEventFlag(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getObservationData(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getRcvrClkOffset(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getSatellite(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_get__date(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__eventFlag(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__observationData(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__rcvrClkOffset(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__satellite(t_ObservationDataSet *self, void *data);
          static PyGetSetDef t_ObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_ObservationDataSet, date),
            DECLARE_GET_FIELD(t_ObservationDataSet, eventFlag),
            DECLARE_GET_FIELD(t_ObservationDataSet, observationData),
            DECLARE_GET_FIELD(t_ObservationDataSet, rcvrClkOffset),
            DECLARE_GET_FIELD(t_ObservationDataSet, satellite),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_ObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationDataSet, getDate, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getEventFlag, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getObservationData, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getRcvrClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getSatellite, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObservationDataSet)[] = {
            { Py_tp_methods, t_ObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_ObservationDataSet_init_ },
            { Py_tp_getset, t_ObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObservationDataSet, t_ObservationDataSet, ObservationDataSet);

          void t_ObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ObservationDataSet), &PY_TYPE_DEF(ObservationDataSet), module, "ObservationDataSet", 0);
          }

          void t_ObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "class_", make_descriptor(ObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "wrapfn_", make_descriptor(t_ObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_ObservationDataSet::wrap_Object(ObservationDataSet(((t_ObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_ObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObservationDataSet_init_(t_ObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jint a2;
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            ObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "kkIDK", ::org::orekit::gnss::SatInSystem::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = ObservationDataSet(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObservationDataSet_getDate(t_ObservationDataSet *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_ObservationDataSet_getEventFlag(t_ObservationDataSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEventFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationDataSet_getObservationData(t_ObservationDataSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationData));
          }

          static PyObject *t_ObservationDataSet_getRcvrClkOffset(t_ObservationDataSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ObservationDataSet_getSatellite(t_ObservationDataSet *self)
          {
            ::org::orekit::gnss::SatInSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(result);
          }

          static PyObject *t_ObservationDataSet_get__date(t_ObservationDataSet *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_ObservationDataSet_get__eventFlag(t_ObservationDataSet *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEventFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationDataSet_get__observationData(t_ObservationDataSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ObservationDataSet_get__rcvrClkOffset(t_ObservationDataSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ObservationDataSet_get__satellite(t_ObservationDataSet *self, void *data)
          {
            ::org::orekit::gnss::SatInSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/SobolSequenceGenerator.h"
#include "java/io/IOException.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/InputStream.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *SobolSequenceGenerator::class$ = NULL;
      jmethodID *SobolSequenceGenerator::mids$ = NULL;
      bool SobolSequenceGenerator::live$ = false;

      jclass SobolSequenceGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/SobolSequenceGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f9ea0f24af142461] = env->getMethodID(cls, "<init>", "(ILjava/io/InputStream;)V");
          mids$[mid_getNextIndex_412668abc8d889e9] = env->getMethodID(cls, "getNextIndex", "()I");
          mids$[mid_nextVector_a53a7513ecedada2] = env->getMethodID(cls, "nextVector", "()[D");
          mids$[mid_skipTo_1da5c9e77f24f269] = env->getMethodID(cls, "skipTo", "(I)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SobolSequenceGenerator::SobolSequenceGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      SobolSequenceGenerator::SobolSequenceGenerator(jint a0, const ::java::io::InputStream & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f9ea0f24af142461, a0, a1.this$)) {}

      jint SobolSequenceGenerator::getNextIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getNextIndex_412668abc8d889e9]);
      }

      JArray< jdouble > SobolSequenceGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_a53a7513ecedada2]));
      }

      JArray< jdouble > SobolSequenceGenerator::skipTo(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_skipTo_1da5c9e77f24f269], a0));
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
      static PyObject *t_SobolSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SobolSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SobolSequenceGenerator_init_(t_SobolSequenceGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SobolSequenceGenerator_getNextIndex(t_SobolSequenceGenerator *self);
      static PyObject *t_SobolSequenceGenerator_nextVector(t_SobolSequenceGenerator *self);
      static PyObject *t_SobolSequenceGenerator_skipTo(t_SobolSequenceGenerator *self, PyObject *arg);
      static PyObject *t_SobolSequenceGenerator_get__nextIndex(t_SobolSequenceGenerator *self, void *data);
      static PyGetSetDef t_SobolSequenceGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_SobolSequenceGenerator, nextIndex),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SobolSequenceGenerator__methods_[] = {
        DECLARE_METHOD(t_SobolSequenceGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SobolSequenceGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SobolSequenceGenerator, getNextIndex, METH_NOARGS),
        DECLARE_METHOD(t_SobolSequenceGenerator, nextVector, METH_NOARGS),
        DECLARE_METHOD(t_SobolSequenceGenerator, skipTo, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SobolSequenceGenerator)[] = {
        { Py_tp_methods, t_SobolSequenceGenerator__methods_ },
        { Py_tp_init, (void *) t_SobolSequenceGenerator_init_ },
        { Py_tp_getset, t_SobolSequenceGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SobolSequenceGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SobolSequenceGenerator, t_SobolSequenceGenerator, SobolSequenceGenerator);

      void t_SobolSequenceGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(SobolSequenceGenerator), &PY_TYPE_DEF(SobolSequenceGenerator), module, "SobolSequenceGenerator", 0);
      }

      void t_SobolSequenceGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "class_", make_descriptor(SobolSequenceGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "wrapfn_", make_descriptor(t_SobolSequenceGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SobolSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SobolSequenceGenerator::initializeClass, 1)))
          return NULL;
        return t_SobolSequenceGenerator::wrap_Object(SobolSequenceGenerator(((t_SobolSequenceGenerator *) arg)->object.this$));
      }
      static PyObject *t_SobolSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SobolSequenceGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SobolSequenceGenerator_init_(t_SobolSequenceGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            SobolSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = SobolSequenceGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::java::io::InputStream a1((jobject) NULL);
            SobolSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SobolSequenceGenerator(a0, a1));
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

      static PyObject *t_SobolSequenceGenerator_getNextIndex(t_SobolSequenceGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNextIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SobolSequenceGenerator_nextVector(t_SobolSequenceGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_SobolSequenceGenerator_skipTo(t_SobolSequenceGenerator *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.skipTo(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "skipTo", arg);
        return NULL;
      }

      static PyObject *t_SobolSequenceGenerator_get__nextIndex(t_SobolSequenceGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNextIndex());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileFilter.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileFilter::class$ = NULL;
    jmethodID *FileFilter::mids$ = NULL;
    bool FileFilter::live$ = false;

    jclass FileFilter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileFilter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_accept_af02963481b9f0fd] = env->getMethodID(cls, "accept", "(Ljava/io/File;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean FileFilter::accept(const ::java::io::File & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_accept_af02963481b9f0fd], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileFilter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileFilter_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileFilter_accept(t_FileFilter *self, PyObject *arg);

    static PyMethodDef t_FileFilter__methods_[] = {
      DECLARE_METHOD(t_FileFilter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileFilter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileFilter, accept, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileFilter)[] = {
      { Py_tp_methods, t_FileFilter__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileFilter)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FileFilter, t_FileFilter, FileFilter);

    void t_FileFilter::install(PyObject *module)
    {
      installType(&PY_TYPE(FileFilter), &PY_TYPE_DEF(FileFilter), module, "FileFilter", 0);
    }

    void t_FileFilter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "class_", make_descriptor(FileFilter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "wrapfn_", make_descriptor(t_FileFilter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileFilter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileFilter::initializeClass, 1)))
        return NULL;
      return t_FileFilter::wrap_Object(FileFilter(((t_FileFilter *) arg)->object.this$));
    }
    static PyObject *t_FileFilter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileFilter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FileFilter_accept(t_FileFilter *self, PyObject *arg)
    {
      ::java::io::File a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.accept(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "accept", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *UnsupportedOperationException::class$ = NULL;
    jmethodID *UnsupportedOperationException::mids$ = NULL;
    bool UnsupportedOperationException::live$ = false;

    jclass UnsupportedOperationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/UnsupportedOperationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    UnsupportedOperationException::UnsupportedOperationException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_UnsupportedOperationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_UnsupportedOperationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_UnsupportedOperationException_init_(t_UnsupportedOperationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_UnsupportedOperationException__methods_[] = {
      DECLARE_METHOD(t_UnsupportedOperationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_UnsupportedOperationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(UnsupportedOperationException)[] = {
      { Py_tp_methods, t_UnsupportedOperationException__methods_ },
      { Py_tp_init, (void *) t_UnsupportedOperationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(UnsupportedOperationException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(UnsupportedOperationException, t_UnsupportedOperationException, UnsupportedOperationException);

    void t_UnsupportedOperationException::install(PyObject *module)
    {
      installType(&PY_TYPE(UnsupportedOperationException), &PY_TYPE_DEF(UnsupportedOperationException), module, "UnsupportedOperationException", 0);
    }

    void t_UnsupportedOperationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedOperationException), "class_", make_descriptor(UnsupportedOperationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedOperationException), "wrapfn_", make_descriptor(t_UnsupportedOperationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedOperationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_UnsupportedOperationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, UnsupportedOperationException::initializeClass, 1)))
        return NULL;
      return t_UnsupportedOperationException::wrap_Object(UnsupportedOperationException(((t_UnsupportedOperationException *) arg)->object.this$));
    }
    static PyObject *t_UnsupportedOperationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, UnsupportedOperationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_UnsupportedOperationException_init_(t_UnsupportedOperationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          UnsupportedOperationException object((jobject) NULL);

          INT_CALL(object = UnsupportedOperationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          UnsupportedOperationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = UnsupportedOperationException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          UnsupportedOperationException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = UnsupportedOperationException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          UnsupportedOperationException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = UnsupportedOperationException(a0, a1));
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
#include "java/lang/NamedPackage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NamedPackage::class$ = NULL;
    jmethodID *NamedPackage::mids$ = NULL;
    bool NamedPackage::live$ = false;

    jclass NamedPackage::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NamedPackage");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NamedPackage_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NamedPackage_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_NamedPackage__methods_[] = {
      DECLARE_METHOD(t_NamedPackage, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NamedPackage, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NamedPackage)[] = {
      { Py_tp_methods, t_NamedPackage__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NamedPackage)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(NamedPackage, t_NamedPackage, NamedPackage);

    void t_NamedPackage::install(PyObject *module)
    {
      installType(&PY_TYPE(NamedPackage), &PY_TYPE_DEF(NamedPackage), module, "NamedPackage", 0);
    }

    void t_NamedPackage::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "class_", make_descriptor(NamedPackage::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "wrapfn_", make_descriptor(t_NamedPackage::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NamedPackage_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NamedPackage::initializeClass, 1)))
        return NULL;
      return t_NamedPackage::wrap_Object(NamedPackage(((t_NamedPackage *) arg)->object.this$));
    }
    static PyObject *t_NamedPackage_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NamedPackage::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ReflectiveOperationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ReflectiveOperationException::class$ = NULL;
    jmethodID *ReflectiveOperationException::mids$ = NULL;
    bool ReflectiveOperationException::live$ = false;

    jclass ReflectiveOperationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ReflectiveOperationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ReflectiveOperationException::ReflectiveOperationException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ReflectiveOperationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ReflectiveOperationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ReflectiveOperationException_init_(t_ReflectiveOperationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_ReflectiveOperationException__methods_[] = {
      DECLARE_METHOD(t_ReflectiveOperationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ReflectiveOperationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ReflectiveOperationException)[] = {
      { Py_tp_methods, t_ReflectiveOperationException__methods_ },
      { Py_tp_init, (void *) t_ReflectiveOperationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ReflectiveOperationException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(ReflectiveOperationException, t_ReflectiveOperationException, ReflectiveOperationException);

    void t_ReflectiveOperationException::install(PyObject *module)
    {
      installType(&PY_TYPE(ReflectiveOperationException), &PY_TYPE_DEF(ReflectiveOperationException), module, "ReflectiveOperationException", 0);
    }

    void t_ReflectiveOperationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ReflectiveOperationException), "class_", make_descriptor(ReflectiveOperationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ReflectiveOperationException), "wrapfn_", make_descriptor(t_ReflectiveOperationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ReflectiveOperationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ReflectiveOperationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ReflectiveOperationException::initializeClass, 1)))
        return NULL;
      return t_ReflectiveOperationException::wrap_Object(ReflectiveOperationException(((t_ReflectiveOperationException *) arg)->object.this$));
    }
    static PyObject *t_ReflectiveOperationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ReflectiveOperationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ReflectiveOperationException_init_(t_ReflectiveOperationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ReflectiveOperationException object((jobject) NULL);

          INT_CALL(object = ReflectiveOperationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ReflectiveOperationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ReflectiveOperationException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          ReflectiveOperationException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = ReflectiveOperationException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          ReflectiveOperationException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ReflectiveOperationException(a0, a1));
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
#include "java/lang/InstantiationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *InstantiationException::class$ = NULL;
    jmethodID *InstantiationException::mids$ = NULL;
    bool InstantiationException::live$ = false;

    jclass InstantiationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/InstantiationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InstantiationException::InstantiationException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    InstantiationException::InstantiationException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_InstantiationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InstantiationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InstantiationException_init_(t_InstantiationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_InstantiationException__methods_[] = {
      DECLARE_METHOD(t_InstantiationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InstantiationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InstantiationException)[] = {
      { Py_tp_methods, t_InstantiationException__methods_ },
      { Py_tp_init, (void *) t_InstantiationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InstantiationException)[] = {
      &PY_TYPE_DEF(::java::lang::ReflectiveOperationException),
      NULL
    };

    DEFINE_TYPE(InstantiationException, t_InstantiationException, InstantiationException);

    void t_InstantiationException::install(PyObject *module)
    {
      installType(&PY_TYPE(InstantiationException), &PY_TYPE_DEF(InstantiationException), module, "InstantiationException", 0);
    }

    void t_InstantiationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InstantiationException), "class_", make_descriptor(InstantiationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InstantiationException), "wrapfn_", make_descriptor(t_InstantiationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InstantiationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InstantiationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InstantiationException::initializeClass, 1)))
        return NULL;
      return t_InstantiationException::wrap_Object(InstantiationException(((t_InstantiationException *) arg)->object.this$));
    }
    static PyObject *t_InstantiationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InstantiationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InstantiationException_init_(t_InstantiationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          InstantiationException object((jobject) NULL);

          INT_CALL(object = InstantiationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          InstantiationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = InstantiationException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/InvalidObjectException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InvalidObjectException::class$ = NULL;
    jmethodID *InvalidObjectException::mids$ = NULL;
    bool InvalidObjectException::live$ = false;

    jclass InvalidObjectException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InvalidObjectException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InvalidObjectException::InvalidObjectException(const ::java::lang::String & a0) : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InvalidObjectException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InvalidObjectException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InvalidObjectException_init_(t_InvalidObjectException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_InvalidObjectException__methods_[] = {
      DECLARE_METHOD(t_InvalidObjectException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InvalidObjectException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InvalidObjectException)[] = {
      { Py_tp_methods, t_InvalidObjectException__methods_ },
      { Py_tp_init, (void *) t_InvalidObjectException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InvalidObjectException)[] = {
      &PY_TYPE_DEF(::java::io::ObjectStreamException),
      NULL
    };

    DEFINE_TYPE(InvalidObjectException, t_InvalidObjectException, InvalidObjectException);

    void t_InvalidObjectException::install(PyObject *module)
    {
      installType(&PY_TYPE(InvalidObjectException), &PY_TYPE_DEF(InvalidObjectException), module, "InvalidObjectException", 0);
    }

    void t_InvalidObjectException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidObjectException), "class_", make_descriptor(InvalidObjectException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidObjectException), "wrapfn_", make_descriptor(t_InvalidObjectException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidObjectException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InvalidObjectException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InvalidObjectException::initializeClass, 1)))
        return NULL;
      return t_InvalidObjectException::wrap_Object(InvalidObjectException(((t_InvalidObjectException *) arg)->object.this$));
    }
    static PyObject *t_InvalidObjectException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InvalidObjectException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InvalidObjectException_init_(t_InvalidObjectException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      InvalidObjectException object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = InvalidObjectException(a0));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *ParsePosition::class$ = NULL;
    jmethodID *ParsePosition::mids$ = NULL;
    bool ParsePosition::live$ = false;

    jclass ParsePosition::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/ParsePosition");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getErrorIndex_412668abc8d889e9] = env->getMethodID(cls, "getErrorIndex", "()I");
        mids$[mid_getIndex_412668abc8d889e9] = env->getMethodID(cls, "getIndex", "()I");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setErrorIndex_a3da1a935cb37f7b] = env->getMethodID(cls, "setErrorIndex", "(I)V");
        mids$[mid_setIndex_a3da1a935cb37f7b] = env->getMethodID(cls, "setIndex", "(I)V");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ParsePosition::ParsePosition(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    jboolean ParsePosition::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jint ParsePosition::getErrorIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getErrorIndex_412668abc8d889e9]);
    }

    jint ParsePosition::getIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getIndex_412668abc8d889e9]);
    }

    jint ParsePosition::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    void ParsePosition::setErrorIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setErrorIndex_a3da1a935cb37f7b], a0);
    }

    void ParsePosition::setIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setIndex_a3da1a935cb37f7b], a0);
    }

    ::java::lang::String ParsePosition::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_ParsePosition_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ParsePosition_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ParsePosition_init_(t_ParsePosition *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ParsePosition_equals(t_ParsePosition *self, PyObject *args);
    static PyObject *t_ParsePosition_getErrorIndex(t_ParsePosition *self);
    static PyObject *t_ParsePosition_getIndex(t_ParsePosition *self);
    static PyObject *t_ParsePosition_hashCode(t_ParsePosition *self, PyObject *args);
    static PyObject *t_ParsePosition_setErrorIndex(t_ParsePosition *self, PyObject *arg);
    static PyObject *t_ParsePosition_setIndex(t_ParsePosition *self, PyObject *arg);
    static PyObject *t_ParsePosition_toString(t_ParsePosition *self, PyObject *args);
    static PyObject *t_ParsePosition_get__errorIndex(t_ParsePosition *self, void *data);
    static int t_ParsePosition_set__errorIndex(t_ParsePosition *self, PyObject *arg, void *data);
    static PyObject *t_ParsePosition_get__index(t_ParsePosition *self, void *data);
    static int t_ParsePosition_set__index(t_ParsePosition *self, PyObject *arg, void *data);
    static PyGetSetDef t_ParsePosition__fields_[] = {
      DECLARE_GETSET_FIELD(t_ParsePosition, errorIndex),
      DECLARE_GETSET_FIELD(t_ParsePosition, index),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ParsePosition__methods_[] = {
      DECLARE_METHOD(t_ParsePosition, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParsePosition, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParsePosition, equals, METH_VARARGS),
      DECLARE_METHOD(t_ParsePosition, getErrorIndex, METH_NOARGS),
      DECLARE_METHOD(t_ParsePosition, getIndex, METH_NOARGS),
      DECLARE_METHOD(t_ParsePosition, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_ParsePosition, setErrorIndex, METH_O),
      DECLARE_METHOD(t_ParsePosition, setIndex, METH_O),
      DECLARE_METHOD(t_ParsePosition, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ParsePosition)[] = {
      { Py_tp_methods, t_ParsePosition__methods_ },
      { Py_tp_init, (void *) t_ParsePosition_init_ },
      { Py_tp_getset, t_ParsePosition__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ParsePosition)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ParsePosition, t_ParsePosition, ParsePosition);

    void t_ParsePosition::install(PyObject *module)
    {
      installType(&PY_TYPE(ParsePosition), &PY_TYPE_DEF(ParsePosition), module, "ParsePosition", 0);
    }

    void t_ParsePosition::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParsePosition), "class_", make_descriptor(ParsePosition::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParsePosition), "wrapfn_", make_descriptor(t_ParsePosition::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParsePosition), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ParsePosition_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ParsePosition::initializeClass, 1)))
        return NULL;
      return t_ParsePosition::wrap_Object(ParsePosition(((t_ParsePosition *) arg)->object.this$));
    }
    static PyObject *t_ParsePosition_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ParsePosition::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ParsePosition_init_(t_ParsePosition *self, PyObject *args, PyObject *kwds)
    {
      jint a0;
      ParsePosition object((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        INT_CALL(object = ParsePosition(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ParsePosition_equals(t_ParsePosition *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ParsePosition), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_ParsePosition_getErrorIndex(t_ParsePosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getErrorIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParsePosition_getIndex(t_ParsePosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParsePosition_hashCode(t_ParsePosition *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ParsePosition), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_ParsePosition_setErrorIndex(t_ParsePosition *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setErrorIndex(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setErrorIndex", arg);
      return NULL;
    }

    static PyObject *t_ParsePosition_setIndex(t_ParsePosition *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setIndex(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setIndex", arg);
      return NULL;
    }

    static PyObject *t_ParsePosition_toString(t_ParsePosition *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(ParsePosition), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_ParsePosition_get__errorIndex(t_ParsePosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getErrorIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_ParsePosition_set__errorIndex(t_ParsePosition *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setErrorIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "errorIndex", arg);
      return -1;
    }

    static PyObject *t_ParsePosition_get__index(t_ParsePosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_ParsePosition_set__index(t_ParsePosition *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "index", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Spliterator::class$ = NULL;
    jmethodID *Spliterator::mids$ = NULL;
    bool Spliterator::live$ = false;
    jint Spliterator::CONCURRENT = (jint) 0;
    jint Spliterator::DISTINCT = (jint) 0;
    jint Spliterator::IMMUTABLE = (jint) 0;
    jint Spliterator::NONNULL = (jint) 0;
    jint Spliterator::ORDERED = (jint) 0;
    jint Spliterator::SIZED = (jint) 0;
    jint Spliterator::SORTED = (jint) 0;
    jint Spliterator::SUBSIZED = (jint) 0;

    jclass Spliterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Spliterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_characteristics_412668abc8d889e9] = env->getMethodID(cls, "characteristics", "()I");
        mids$[mid_estimateSize_9e26256fb0d384a2] = env->getMethodID(cls, "estimateSize", "()J");
        mids$[mid_getComparator_b0b551d4a54c7150] = env->getMethodID(cls, "getComparator", "()Ljava/util/Comparator;");
        mids$[mid_getExactSizeIfKnown_9e26256fb0d384a2] = env->getMethodID(cls, "getExactSizeIfKnown", "()J");
        mids$[mid_hasCharacteristics_e034cac2b514bb09] = env->getMethodID(cls, "hasCharacteristics", "(I)Z");
        mids$[mid_trySplit_0a89e3b18808f850] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CONCURRENT = env->getStaticIntField(cls, "CONCURRENT");
        DISTINCT = env->getStaticIntField(cls, "DISTINCT");
        IMMUTABLE = env->getStaticIntField(cls, "IMMUTABLE");
        NONNULL = env->getStaticIntField(cls, "NONNULL");
        ORDERED = env->getStaticIntField(cls, "ORDERED");
        SIZED = env->getStaticIntField(cls, "SIZED");
        SORTED = env->getStaticIntField(cls, "SORTED");
        SUBSIZED = env->getStaticIntField(cls, "SUBSIZED");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Spliterator::characteristics() const
    {
      return env->callIntMethod(this$, mids$[mid_characteristics_412668abc8d889e9]);
    }

    jlong Spliterator::estimateSize() const
    {
      return env->callLongMethod(this$, mids$[mid_estimateSize_9e26256fb0d384a2]);
    }

    ::java::util::Comparator Spliterator::getComparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_getComparator_b0b551d4a54c7150]));
    }

    jlong Spliterator::getExactSizeIfKnown() const
    {
      return env->callLongMethod(this$, mids$[mid_getExactSizeIfKnown_9e26256fb0d384a2]);
    }

    jboolean Spliterator::hasCharacteristics(jint a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasCharacteristics_e034cac2b514bb09], a0);
    }

    Spliterator Spliterator::trySplit() const
    {
      return Spliterator(env->callObjectMethod(this$, mids$[mid_trySplit_0a89e3b18808f850]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/Spliterator$OfInt.h"

namespace java {
  namespace util {
    static PyObject *t_Spliterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator_of_(t_Spliterator *self, PyObject *args);
    static PyObject *t_Spliterator_characteristics(t_Spliterator *self);
    static PyObject *t_Spliterator_estimateSize(t_Spliterator *self);
    static PyObject *t_Spliterator_getComparator(t_Spliterator *self);
    static PyObject *t_Spliterator_getExactSizeIfKnown(t_Spliterator *self);
    static PyObject *t_Spliterator_hasCharacteristics(t_Spliterator *self, PyObject *arg);
    static PyObject *t_Spliterator_trySplit(t_Spliterator *self);
    static PyObject *t_Spliterator_get__comparator(t_Spliterator *self, void *data);
    static PyObject *t_Spliterator_get__exactSizeIfKnown(t_Spliterator *self, void *data);
    static PyObject *t_Spliterator_get__parameters_(t_Spliterator *self, void *data);
    static PyGetSetDef t_Spliterator__fields_[] = {
      DECLARE_GET_FIELD(t_Spliterator, comparator),
      DECLARE_GET_FIELD(t_Spliterator, exactSizeIfKnown),
      DECLARE_GET_FIELD(t_Spliterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Spliterator__methods_[] = {
      DECLARE_METHOD(t_Spliterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator, characteristics, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, estimateSize, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, getComparator, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, getExactSizeIfKnown, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, hasCharacteristics, METH_O),
      DECLARE_METHOD(t_Spliterator, trySplit, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Spliterator)[] = {
      { Py_tp_methods, t_Spliterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Spliterator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Spliterator)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Spliterator, t_Spliterator, Spliterator);
    PyObject *t_Spliterator::wrap_Object(const Spliterator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator *self = (t_Spliterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Spliterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator *self = (t_Spliterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Spliterator::install(PyObject *module)
    {
      installType(&PY_TYPE(Spliterator), &PY_TYPE_DEF(Spliterator), module, "Spliterator", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "OfDouble", make_descriptor(&PY_TYPE_DEF(Spliterator$OfDouble)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "OfLong", make_descriptor(&PY_TYPE_DEF(Spliterator$OfLong)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "OfInt", make_descriptor(&PY_TYPE_DEF(Spliterator$OfInt)));
    }

    void t_Spliterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "class_", make_descriptor(Spliterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "wrapfn_", make_descriptor(t_Spliterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "boxfn_", make_descriptor(boxObject));
      env->getClass(Spliterator::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "CONCURRENT", make_descriptor(Spliterator::CONCURRENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "DISTINCT", make_descriptor(Spliterator::DISTINCT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "IMMUTABLE", make_descriptor(Spliterator::IMMUTABLE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "NONNULL", make_descriptor(Spliterator::NONNULL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "ORDERED", make_descriptor(Spliterator::ORDERED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "SIZED", make_descriptor(Spliterator::SIZED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "SORTED", make_descriptor(Spliterator::SORTED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "SUBSIZED", make_descriptor(Spliterator::SUBSIZED));
    }

    static PyObject *t_Spliterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Spliterator::initializeClass, 1)))
        return NULL;
      return t_Spliterator::wrap_Object(Spliterator(((t_Spliterator *) arg)->object.this$));
    }
    static PyObject *t_Spliterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Spliterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Spliterator_of_(t_Spliterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Spliterator_characteristics(t_Spliterator *self)
    {
      jint result;
      OBJ_CALL(result = self->object.characteristics());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Spliterator_estimateSize(t_Spliterator *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.estimateSize());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Spliterator_getComparator(t_Spliterator *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.getComparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_Spliterator_getExactSizeIfKnown(t_Spliterator *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getExactSizeIfKnown());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Spliterator_hasCharacteristics(t_Spliterator *self, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.hasCharacteristics(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hasCharacteristics", arg);
      return NULL;
    }

    static PyObject *t_Spliterator_trySplit(t_Spliterator *self)
    {
      Spliterator result((jobject) NULL);
      OBJ_CALL(result = self->object.trySplit());
      return t_Spliterator::wrap_Object(result, self->parameters[0]);
    }
    static PyObject *t_Spliterator_get__parameters_(t_Spliterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Spliterator_get__comparator(t_Spliterator *self, void *data)
    {
      ::java::util::Comparator value((jobject) NULL);
      OBJ_CALL(value = self->object.getComparator());
      return ::java::util::t_Comparator::wrap_Object(value);
    }

    static PyObject *t_Spliterator_get__exactSizeIfKnown(t_Spliterator *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getExactSizeIfKnown());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Flushable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Flushable::class$ = NULL;
    jmethodID *Flushable::mids$ = NULL;
    bool Flushable::live$ = false;

    jclass Flushable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Flushable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_flush_0640e6acf969ed28] = env->getMethodID(cls, "flush", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Flushable::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0640e6acf969ed28]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Flushable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Flushable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Flushable_flush(t_Flushable *self);

    static PyMethodDef t_Flushable__methods_[] = {
      DECLARE_METHOD(t_Flushable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Flushable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Flushable, flush, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Flushable)[] = {
      { Py_tp_methods, t_Flushable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Flushable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Flushable, t_Flushable, Flushable);

    void t_Flushable::install(PyObject *module)
    {
      installType(&PY_TYPE(Flushable), &PY_TYPE_DEF(Flushable), module, "Flushable", 0);
    }

    void t_Flushable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "class_", make_descriptor(Flushable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "wrapfn_", make_descriptor(t_Flushable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Flushable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Flushable::initializeClass, 1)))
        return NULL;
      return t_Flushable::wrap_Object(Flushable(((t_Flushable *) arg)->object.this$));
    }
    static PyObject *t_Flushable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Flushable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Flushable_flush(t_Flushable *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *DoubleSummaryStatistics::class$ = NULL;
    jmethodID *DoubleSummaryStatistics::mids$ = NULL;
    bool DoubleSummaryStatistics::live$ = false;

    jclass DoubleSummaryStatistics::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/DoubleSummaryStatistics");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_c5227966293c74be] = env->getMethodID(cls, "<init>", "(JDDD)V");
        mids$[mid_accept_10f281d777284cea] = env->getMethodID(cls, "accept", "(D)V");
        mids$[mid_combine_c9a194a4ddbf0293] = env->getMethodID(cls, "combine", "(Ljava/util/DoubleSummaryStatistics;)V");
        mids$[mid_getAverage_557b8123390d8d0c] = env->getMethodID(cls, "getAverage", "()D");
        mids$[mid_getCount_9e26256fb0d384a2] = env->getMethodID(cls, "getCount", "()J");
        mids$[mid_getMax_557b8123390d8d0c] = env->getMethodID(cls, "getMax", "()D");
        mids$[mid_getMin_557b8123390d8d0c] = env->getMethodID(cls, "getMin", "()D");
        mids$[mid_getSum_557b8123390d8d0c] = env->getMethodID(cls, "getSum", "()D");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DoubleSummaryStatistics::DoubleSummaryStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    DoubleSummaryStatistics::DoubleSummaryStatistics(jlong a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5227966293c74be, a0, a1, a2, a3)) {}

    void DoubleSummaryStatistics::accept(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_accept_10f281d777284cea], a0);
    }

    void DoubleSummaryStatistics::combine(const DoubleSummaryStatistics & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_combine_c9a194a4ddbf0293], a0.this$);
    }

    jdouble DoubleSummaryStatistics::getAverage() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getAverage_557b8123390d8d0c]);
    }

    jlong DoubleSummaryStatistics::getCount() const
    {
      return env->callLongMethod(this$, mids$[mid_getCount_9e26256fb0d384a2]);
    }

    jdouble DoubleSummaryStatistics::getMax() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getMax_557b8123390d8d0c]);
    }

    jdouble DoubleSummaryStatistics::getMin() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getMin_557b8123390d8d0c]);
    }

    jdouble DoubleSummaryStatistics::getSum() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getSum_557b8123390d8d0c]);
    }

    ::java::lang::String DoubleSummaryStatistics::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_DoubleSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DoubleSummaryStatistics_init_(t_DoubleSummaryStatistics *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DoubleSummaryStatistics_accept(t_DoubleSummaryStatistics *self, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_combine(t_DoubleSummaryStatistics *self, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_getAverage(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getCount(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getMax(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getMin(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getSum(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_toString(t_DoubleSummaryStatistics *self, PyObject *args);
    static PyObject *t_DoubleSummaryStatistics_get__average(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__count(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__max(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__min(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__sum(t_DoubleSummaryStatistics *self, void *data);
    static PyGetSetDef t_DoubleSummaryStatistics__fields_[] = {
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, average),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, count),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, max),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, min),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, sum),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DoubleSummaryStatistics__methods_[] = {
      DECLARE_METHOD(t_DoubleSummaryStatistics, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, accept, METH_O),
      DECLARE_METHOD(t_DoubleSummaryStatistics, combine, METH_O),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getAverage, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getCount, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getMax, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getMin, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getSum, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DoubleSummaryStatistics)[] = {
      { Py_tp_methods, t_DoubleSummaryStatistics__methods_ },
      { Py_tp_init, (void *) t_DoubleSummaryStatistics_init_ },
      { Py_tp_getset, t_DoubleSummaryStatistics__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DoubleSummaryStatistics)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DoubleSummaryStatistics, t_DoubleSummaryStatistics, DoubleSummaryStatistics);

    void t_DoubleSummaryStatistics::install(PyObject *module)
    {
      installType(&PY_TYPE(DoubleSummaryStatistics), &PY_TYPE_DEF(DoubleSummaryStatistics), module, "DoubleSummaryStatistics", 0);
    }

    void t_DoubleSummaryStatistics::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "class_", make_descriptor(DoubleSummaryStatistics::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "wrapfn_", make_descriptor(t_DoubleSummaryStatistics::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DoubleSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DoubleSummaryStatistics::initializeClass, 1)))
        return NULL;
      return t_DoubleSummaryStatistics::wrap_Object(DoubleSummaryStatistics(((t_DoubleSummaryStatistics *) arg)->object.this$));
    }
    static PyObject *t_DoubleSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DoubleSummaryStatistics::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DoubleSummaryStatistics_init_(t_DoubleSummaryStatistics *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DoubleSummaryStatistics object((jobject) NULL);

          INT_CALL(object = DoubleSummaryStatistics());
          self->object = object;
          break;
        }
       case 4:
        {
          jlong a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          DoubleSummaryStatistics object((jobject) NULL);

          if (!parseArgs(args, "JDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = DoubleSummaryStatistics(a0, a1, a2, a3));
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

    static PyObject *t_DoubleSummaryStatistics_accept(t_DoubleSummaryStatistics *self, PyObject *arg)
    {
      jdouble a0;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(self->object.accept(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "accept", arg);
      return NULL;
    }

    static PyObject *t_DoubleSummaryStatistics_combine(t_DoubleSummaryStatistics *self, PyObject *arg)
    {
      DoubleSummaryStatistics a0((jobject) NULL);

      if (!parseArg(arg, "k", DoubleSummaryStatistics::initializeClass, &a0))
      {
        OBJ_CALL(self->object.combine(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "combine", arg);
      return NULL;
    }

    static PyObject *t_DoubleSummaryStatistics_getAverage(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getAverage());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getCount(t_DoubleSummaryStatistics *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getCount());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getMax(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getMax());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getMin(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getMin());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getSum(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getSum());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_toString(t_DoubleSummaryStatistics *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(DoubleSummaryStatistics), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_DoubleSummaryStatistics_get__average(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getAverage());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__count(t_DoubleSummaryStatistics *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getCount());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__max(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getMax());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__min(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getMin());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__sum(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getSum());
      return PyFloat_FromDouble((double) value);
    }
  }
}

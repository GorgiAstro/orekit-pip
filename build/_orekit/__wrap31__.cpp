#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Date.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "java/util/TimeZone.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/Month.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbsoluteDate::class$ = NULL;
      jmethodID *AbsoluteDate::mids$ = NULL;
      bool AbsoluteDate::live$ = false;
      AbsoluteDate *AbsoluteDate::ARBITRARY_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::BEIDOU_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::CCSDS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::FIFTIES_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::FUTURE_INFINITY = NULL;
      AbsoluteDate *AbsoluteDate::GALILEO_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::GLONASS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::GPS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::IRNSS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::J2000_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::JAVA_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::JULIAN_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::MODIFIED_JULIAN_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::PAST_INFINITY = NULL;
      AbsoluteDate *AbsoluteDate::QZSS_EPOCH = NULL;

      jclass AbsoluteDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbsoluteDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_6ed2c1cd7b0b1c75] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_cd893bf7ce63395f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_d5834c87a5a3544e] = env->getMethodID(cls, "<init>", "(Ljava/util/Date;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_60fa8bd5489a8c63] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_c23f650143a3c277] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateTimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_9092159e84dd71b7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_afee9a73b21976b9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_68c54ee576452cb6] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;ILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_c51d54f829a0f4e3] = env->getMethodID(cls, "<init>", "(IIILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_91854a4053b74756] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;IIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_ef360efc04cd8a23] = env->getMethodID(cls, "<init>", "(IIIIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_compareTo_94772beff3ac8a91] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_createBesselianEpoch_d2854c25a21df51f] = env->getStaticMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJDDate_30cdaa3feb824afa] = env->getStaticMethodID(cls, "createJDDate", "(IDLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_d2854c25a21df51f] = env->getStaticMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createMJDDate_30cdaa3feb824afa] = env->getStaticMethodID(cls, "createMJDDate", "(IDLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_durationFrom_209f08246d708042] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getComponents_2fdd961225d82a4c] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_25a98438943eaa69] = env->getMethodID(cls, "getComponents", "(I)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_b13d0c91d0170882] = env->getMethodID(cls, "getComponents", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_d96f0e789f74ae85] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_5ffda85291c2dfbf] = env->getMethodID(cls, "getComponents", "(ILorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isAfter_0c6aaa062653caeb] = env->getMethodID(cls, "isAfter", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isAfterOrEqualTo_0c6aaa062653caeb] = env->getMethodID(cls, "isAfterOrEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBefore_0c6aaa062653caeb] = env->getMethodID(cls, "isBefore", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBeforeOrEqualTo_0c6aaa062653caeb] = env->getMethodID(cls, "isBeforeOrEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBetween_7f89cd9ec90d050f] = env->getMethodID(cls, "isBetween", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBetweenOrEqualTo_7f89cd9ec90d050f] = env->getMethodID(cls, "isBetweenOrEqualTo", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isCloseTo_7997f81ce0846dd1] = env->getMethodID(cls, "isCloseTo", "(Lorg/orekit/time/TimeStamped;D)Z");
          mids$[mid_isEqualTo_0c6aaa062653caeb] = env->getMethodID(cls, "isEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_offsetFrom_5168f1ade9606d8a] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_531c4a68f7385772] = env->getStaticMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[B)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_3823428296f8e7be] = env->getStaticMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[BLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_23eee6c4ecc7e94c] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(B[BLorg/orekit/time/DateComponents;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_9af66f6b94891ed9] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(B[BLorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_b67c08f71bf51dc0] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(BB[BLorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_5fe83c202d6ccb1a] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(BB[BLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_shiftedBy_d2854c25a21df51f] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_timeScalesOffset_383941efa838d5cd] = env->getMethodID(cls, "timeScalesOffset", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)D");
          mids$[mid_toDate_d32c3ee19e93b5d7] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/TimeScale;)Ljava/util/Date;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_bccddd047a056900] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;)Ljava/lang/String;");
          mids$[mid_toString_c81987d6b0e2977a] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_244ea083ab9940d6] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_37e3c4b01d3d6d8c] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_cf32da3deabe563d] = env->getMethodID(cls, "toString", "(ILorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toStringRfc3339_244ea083ab9940d6] = env->getMethodID(cls, "toStringRfc3339", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_4b49368216da3f34] = env->getMethodID(cls, "toStringWithoutUtcOffset", "(Lorg/orekit/time/TimeScale;I)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARBITRARY_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "ARBITRARY_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          BEIDOU_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "BEIDOU_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          CCSDS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "CCSDS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          FIFTIES_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "FIFTIES_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          FUTURE_INFINITY = new AbsoluteDate(env->getStaticObjectField(cls, "FUTURE_INFINITY", "Lorg/orekit/time/AbsoluteDate;"));
          GALILEO_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GALILEO_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          GLONASS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GLONASS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          GPS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GPS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          IRNSS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "IRNSS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          J2000_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "J2000_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          JAVA_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "JAVA_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          JULIAN_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          MODIFIED_JULIAN_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "MODIFIED_JULIAN_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          PAST_INFINITY = new AbsoluteDate(env->getStaticObjectField(cls, "PAST_INFINITY", "Lorg/orekit/time/AbsoluteDate;"));
          QZSS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "QZSS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsoluteDate::AbsoluteDate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      AbsoluteDate::AbsoluteDate(const AbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ed2c1cd7b0b1c75, a0.this$, a1)) {}

      AbsoluteDate::AbsoluteDate(const ::java::lang::String & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd893bf7ce63395f, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::java::util::Date & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5834c87a5a3544e, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_60fa8bd5489a8c63, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateTimeComponents & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c23f650143a3c277, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9092159e84dd71b7, a0.this$, a1.this$, a2.this$)) {}

      AbsoluteDate::AbsoluteDate(const AbsoluteDate & a0, jdouble a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_afee9a73b21976b9, a0.this$, a1, a2.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, const ::org::orekit::time::Month & a1, jint a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_68c54ee576452cb6, a0, a1.this$, a2, a3.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, jint a1, jint a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c51d54f829a0f4e3, a0, a1, a2, a3.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, const ::org::orekit::time::Month & a1, jint a2, jint a3, jint a4, jdouble a5, const ::org::orekit::time::TimeScale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91854a4053b74756, a0, a1.this$, a2, a3, a4, a5, a6.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, const ::org::orekit::time::TimeScale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ef360efc04cd8a23, a0, a1, a2, a3, a4, a5, a6.this$)) {}

      jint AbsoluteDate::compareTo(const AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_94772beff3ac8a91], a0.this$);
      }

      AbsoluteDate AbsoluteDate::createBesselianEpoch(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_d2854c25a21df51f], a0));
      }

      AbsoluteDate AbsoluteDate::createJDDate(jint a0, jdouble a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJDDate_30cdaa3feb824afa], a0, a1, a2.this$));
      }

      AbsoluteDate AbsoluteDate::createJulianEpoch(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_d2854c25a21df51f], a0));
      }

      AbsoluteDate AbsoluteDate::createMJDDate(jint a0, jdouble a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createMJDDate_30cdaa3feb824afa], a0, a1, a2.this$));
      }

      jdouble AbsoluteDate::durationFrom(const AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_durationFrom_209f08246d708042], a0.this$);
      }

      jboolean AbsoluteDate::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::java::util::TimeZone & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_2fdd961225d82a4c], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(jint a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_25a98438943eaa69], a0));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_b13d0c91d0170882], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_d96f0e789f74ae85], a0.this$, a1.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_5ffda85291c2dfbf], a0, a1.this$));
      }

      AbsoluteDate AbsoluteDate::getDate() const
      {
        return AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jint AbsoluteDate::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jboolean AbsoluteDate::isAfter(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfter_0c6aaa062653caeb], a0.this$);
      }

      jboolean AbsoluteDate::isAfterOrEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfterOrEqualTo_0c6aaa062653caeb], a0.this$);
      }

      jboolean AbsoluteDate::isBefore(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBefore_0c6aaa062653caeb], a0.this$);
      }

      jboolean AbsoluteDate::isBeforeOrEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBeforeOrEqualTo_0c6aaa062653caeb], a0.this$);
      }

      jboolean AbsoluteDate::isBetween(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetween_7f89cd9ec90d050f], a0.this$, a1.this$);
      }

      jboolean AbsoluteDate::isBetweenOrEqualTo(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetweenOrEqualTo_7f89cd9ec90d050f], a0.this$, a1.this$);
      }

      jboolean AbsoluteDate::isCloseTo(const ::org::orekit::time::TimeStamped & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCloseTo_7997f81ce0846dd1], a0.this$, a1);
      }

      jboolean AbsoluteDate::isEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isEqualTo_0c6aaa062653caeb], a0.this$);
      }

      jdouble AbsoluteDate::offsetFrom(const AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFrom_5168f1ade9606d8a], a0.this$, a1.this$);
      }

      AbsoluteDate AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_531c4a68f7385772], a0, a1.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_3823428296f8e7be], a0, a1.this$, a2.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSDaySegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::DateComponents & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_23eee6c4ecc7e94c], a0, a1.this$, a2.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSDaySegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::DateComponents & a2, const ::org::orekit::time::TimeScale & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_9af66f6b94891ed9], a0, a1.this$, a2.this$, a3.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSUnsegmentedTimeCode(jbyte a0, jbyte a1, const JArray< jbyte > & a2, const AbsoluteDate & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_b67c08f71bf51dc0], a0, a1, a2.this$, a3.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSUnsegmentedTimeCode(jbyte a0, jbyte a1, const JArray< jbyte > & a2, const AbsoluteDate & a3, const AbsoluteDate & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_5fe83c202d6ccb1a], a0, a1, a2.this$, a3.this$, a4.this$));
      }

      AbsoluteDate AbsoluteDate::shiftedBy(jdouble a0) const
      {
        return AbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_d2854c25a21df51f], a0));
      }

      jdouble AbsoluteDate::timeScalesOffset(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_timeScalesOffset_383941efa838d5cd], a0.this$, a1.this$);
      }

      ::java::util::Date AbsoluteDate::toDate(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::util::Date(env->callObjectMethod(this$, mids$[mid_toDate_d32c3ee19e93b5d7], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::java::lang::String AbsoluteDate::toString(const ::java::util::TimeZone & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_bccddd047a056900], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_c81987d6b0e2977a], a0));
      }

      ::java::lang::String AbsoluteDate::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_244ea083ab9940d6], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_37e3c4b01d3d6d8c], a0.this$, a1.this$));
      }

      ::java::lang::String AbsoluteDate::toString(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_cf32da3deabe563d], a0, a1.this$));
      }

      ::java::lang::String AbsoluteDate::toStringRfc3339(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringRfc3339_244ea083ab9940d6], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toStringWithoutUtcOffset(const ::org::orekit::time::TimeScale & a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_4b49368216da3f34], a0.this$, a1));
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
      static PyObject *t_AbsoluteDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbsoluteDate_init_(t_AbsoluteDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsoluteDate_compareTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_durationFrom(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_equals(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_getComponents(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_getDate(t_AbsoluteDate *self);
      static PyObject *t_AbsoluteDate_hashCode(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isAfter(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isAfterOrEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBefore(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBeforeOrEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBetween(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isBetweenOrEqualTo(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isCloseTo(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_offsetFrom(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_shiftedBy(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_timeScalesOffset(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_toDate(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_toString(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_toStringRfc3339(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_toStringWithoutUtcOffset(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_get__date(t_AbsoluteDate *self, void *data);
      static PyGetSetDef t_AbsoluteDate__fields_[] = {
        DECLARE_GET_FIELD(t_AbsoluteDate, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsoluteDate__methods_[] = {
        DECLARE_METHOD(t_AbsoluteDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, compareTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, createBesselianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createMJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, durationFrom, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, getComponents, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_AbsoluteDate, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isAfter, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isAfterOrEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBefore, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBeforeOrEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBetween, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isBetweenOrEqualTo, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isCloseTo, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, offsetFrom, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSCalendarSegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSDaySegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSUnsegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, shiftedBy, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, timeScalesOffset, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, toDate, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, toStringRfc3339, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, toStringWithoutUtcOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsoluteDate)[] = {
        { Py_tp_methods, t_AbsoluteDate__methods_ },
        { Py_tp_init, (void *) t_AbsoluteDate_init_ },
        { Py_tp_getset, t_AbsoluteDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsoluteDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbsoluteDate, t_AbsoluteDate, AbsoluteDate);

      void t_AbsoluteDate::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsoluteDate), &PY_TYPE_DEF(AbsoluteDate), module, "AbsoluteDate", 0);
      }

      void t_AbsoluteDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "class_", make_descriptor(AbsoluteDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "wrapfn_", make_descriptor(t_AbsoluteDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbsoluteDate::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "ARBITRARY_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::ARBITRARY_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "BEIDOU_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::BEIDOU_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "CCSDS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::CCSDS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "FIFTIES_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::FIFTIES_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "FUTURE_INFINITY", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::FUTURE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GALILEO_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GALILEO_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GLONASS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GLONASS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GPS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GPS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "IRNSS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::IRNSS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "J2000_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::J2000_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "JAVA_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::JAVA_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "JULIAN_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "MODIFIED_JULIAN_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::MODIFIED_JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "PAST_INFINITY", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::PAST_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "QZSS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::QZSS_EPOCH)));
      }

      static PyObject *t_AbsoluteDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsoluteDate::initializeClass, 1)))
          return NULL;
        return t_AbsoluteDate::wrap_Object(AbsoluteDate(((t_AbsoluteDate *) arg)->object.this$));
      }
      static PyObject *t_AbsoluteDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsoluteDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbsoluteDate_init_(t_AbsoluteDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AbsoluteDate object((jobject) NULL);

            INT_CALL(object = AbsoluteDate());
            self->object = object;
            break;
          }
         case 2:
          {
            AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kD", AbsoluteDate::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::util::Date a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::Date::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::DateTimeComponents a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateTimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kDk", AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IKIk", ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IIIk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::org::orekit::time::TimeScale a6((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IKIIIDk", ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::org::orekit::time::TimeScale a6((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IIIIIDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_AbsoluteDate_compareTo(t_AbsoluteDate *self, PyObject *arg)
      {
        AbsoluteDate a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createBesselianEpoch(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createJDDate(a0, a1, a2));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJDDate", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createJulianEpoch(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createMJDDate(a0, a1, a2));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createMJDDate", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_durationFrom(t_AbsoluteDate *self, PyObject *arg)
      {
        AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_equals(t_AbsoluteDate *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbsoluteDate_getComponents(t_AbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getComponents", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_getDate(t_AbsoluteDate *self)
      {
        AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbsoluteDate_hashCode(t_AbsoluteDate *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbsoluteDate_isAfter(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isAfter(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfter", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isAfterOrEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isAfterOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfterOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBefore(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isBefore(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBefore", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBeforeOrEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isBeforeOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBeforeOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBetween(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isBetween(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetween", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBetweenOrEqualTo(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isBetweenOrEqualTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetweenOrEqualTo", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isCloseTo(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "kD", ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isCloseTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isCloseTo", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_offsetFrom(t_AbsoluteDate *self, PyObject *args)
      {
        AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[B", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(a0, a1));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(a0, a1, a2));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSCalendarSegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::DateComponents a2((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::DateComponents a2((jobject) NULL);
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bkk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSDaySegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jbyte a0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            AbsoluteDate a3((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "BB[Bk", AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            jbyte a0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            AbsoluteDate a3((jobject) NULL);
            AbsoluteDate a4((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "BB[Bkk", AbsoluteDate::initializeClass, AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSUnsegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_shiftedBy(t_AbsoluteDate *self, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_timeScalesOffset(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.timeScalesOffset(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "timeScalesOffset", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toDate(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::util::Date result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toDate(a0));
          return ::java::util::t_Date::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDate", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toString(t_AbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbsoluteDate_toStringRfc3339(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toStringRfc3339(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toStringRfc3339", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toStringWithoutUtcOffset(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        jint a1;
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.toStringWithoutUtcOffset(a0, a1));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toStringWithoutUtcOffset", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_get__date(t_AbsoluteDate *self, void *data)
      {
        AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "java/text/FieldPosition.h"
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorFormat::class$ = NULL;
      jmethodID *RealVectorFormat::mids$ = NULL;
      bool RealVectorFormat::live$ = false;

      jclass RealVectorFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_327b6d3ae10b544b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_56b987237c71cdbb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_init$_21a024496acf58f0] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_format_6983b1b6aa229619] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealVector;)Ljava/lang/String;");
          mids$[mid_format_78476b49258c2578] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealVector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_faf2576acf90261b] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getFormat_525709eb5c5b5ea6] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_d2c8eb4129821f0e] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getRealVectorFormat_0b282b8ef9359020] = env->getStaticMethodID(cls, "getRealVectorFormat", "()Lorg/hipparchus/linear/RealVectorFormat;");
          mids$[mid_getRealVectorFormat_e891a93af627cd50] = env->getStaticMethodID(cls, "getRealVectorFormat", "(Ljava/util/Locale;)Lorg/hipparchus/linear/RealVectorFormat;");
          mids$[mid_getSeparator_d2c8eb4129821f0e] = env->getMethodID(cls, "getSeparator", "()Ljava/lang/String;");
          mids$[mid_getSuffix_d2c8eb4129821f0e] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_07cb04cf78c83004] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_parse_a81ab6a2d02866ab] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/linear/ArrayRealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVectorFormat::RealVectorFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      RealVectorFormat::RealVectorFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_327b6d3ae10b544b, a0.this$)) {}

      RealVectorFormat::RealVectorFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56b987237c71cdbb, a0.this$, a1.this$, a2.this$)) {}

      RealVectorFormat::RealVectorFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21a024496acf58f0, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::java::lang::String RealVectorFormat::format(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_6983b1b6aa229619], a0.this$));
      }

      ::java::lang::StringBuffer RealVectorFormat::format(const ::org::hipparchus::linear::RealVector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_78476b49258c2578], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > RealVectorFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_faf2576acf90261b]));
      }

      ::java::text::NumberFormat RealVectorFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_525709eb5c5b5ea6]));
      }

      ::java::lang::String RealVectorFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_d2c8eb4129821f0e]));
      }

      RealVectorFormat RealVectorFormat::getRealVectorFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return RealVectorFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealVectorFormat_0b282b8ef9359020]));
      }

      RealVectorFormat RealVectorFormat::getRealVectorFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealVectorFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealVectorFormat_e891a93af627cd50], a0.this$));
      }

      ::java::lang::String RealVectorFormat::getSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSeparator_d2c8eb4129821f0e]));
      }

      ::java::lang::String RealVectorFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_d2c8eb4129821f0e]));
      }

      ::org::hipparchus::linear::ArrayRealVector RealVectorFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::linear::ArrayRealVector(env->callObjectMethod(this$, mids$[mid_parse_07cb04cf78c83004], a0.this$));
      }

      ::org::hipparchus::linear::ArrayRealVector RealVectorFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::linear::ArrayRealVector(env->callObjectMethod(this$, mids$[mid_parse_a81ab6a2d02866ab], a0.this$, a1.this$));
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
      static PyObject *t_RealVectorFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVectorFormat_init_(t_RealVectorFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVectorFormat_format(t_RealVectorFormat *self, PyObject *args);
      static PyObject *t_RealVectorFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_RealVectorFormat_getFormat(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getPrefix(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getRealVectorFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_RealVectorFormat_getSeparator(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getSuffix(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_parse(t_RealVectorFormat *self, PyObject *args);
      static PyObject *t_RealVectorFormat_get__availableLocales(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__prefix(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__realVectorFormat(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__separator(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__suffix(t_RealVectorFormat *self, void *data);
      static PyGetSetDef t_RealVectorFormat__fields_[] = {
        DECLARE_GET_FIELD(t_RealVectorFormat, availableLocales),
        DECLARE_GET_FIELD(t_RealVectorFormat, prefix),
        DECLARE_GET_FIELD(t_RealVectorFormat, realVectorFormat),
        DECLARE_GET_FIELD(t_RealVectorFormat, separator),
        DECLARE_GET_FIELD(t_RealVectorFormat, suffix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVectorFormat__methods_[] = {
        DECLARE_METHOD(t_RealVectorFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getRealVectorFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, getSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorFormat)[] = {
        { Py_tp_methods, t_RealVectorFormat__methods_ },
        { Py_tp_init, (void *) t_RealVectorFormat_init_ },
        { Py_tp_getset, t_RealVectorFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorFormat, t_RealVectorFormat, RealVectorFormat);

      void t_RealVectorFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorFormat), &PY_TYPE_DEF(RealVectorFormat), module, "RealVectorFormat", 0);
      }

      void t_RealVectorFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "class_", make_descriptor(RealVectorFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "wrapfn_", make_descriptor(t_RealVectorFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorFormat::initializeClass, 1)))
          return NULL;
        return t_RealVectorFormat::wrap_Object(RealVectorFormat(((t_RealVectorFormat *) arg)->object.this$));
      }
      static PyObject *t_RealVectorFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVectorFormat_init_(t_RealVectorFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealVectorFormat object((jobject) NULL);

            INT_CALL(object = RealVectorFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = RealVectorFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = RealVectorFormat(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::text::NumberFormat a3((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = RealVectorFormat(a0, a1, a2, a3));
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

      static PyObject *t_RealVectorFormat_format(t_RealVectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealVector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealVectorFormat_getFormat(t_RealVectorFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_RealVectorFormat_getPrefix(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_getRealVectorFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealVectorFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getRealVectorFormat());
            return t_RealVectorFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            RealVectorFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getRealVectorFormat(a0));
              return t_RealVectorFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getRealVectorFormat", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_getSeparator(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparator());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_getSuffix(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_parse(t_RealVectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::linear::ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::linear::t_ArrayRealVector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::linear::ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::linear::t_ArrayRealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_get__availableLocales(t_RealVectorFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealVectorFormat_get__prefix(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_RealVectorFormat_get__realVectorFormat(t_RealVectorFormat *self, void *data)
      {
        RealVectorFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealVectorFormat());
        return t_RealVectorFormat::wrap_Object(value);
      }

      static PyObject *t_RealVectorFormat_get__separator(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparator());
        return j2p(value);
      }

      static PyObject *t_RealVectorFormat_get__suffix(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *MessageWriter::class$ = NULL;
            jmethodID *MessageWriter::mids$ = NULL;
            bool MessageWriter::live$ = false;

            jclass MessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/MessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFormatVersionKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_d2c8eb4129821f0e] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getVersion_9981f74b2d109da6] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_writeFooter_05c6d36d73082fa6] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_df6f5cf94f18077d] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeMessage_d663c14e7d793f18] = env->getMethodID(cls, "writeMessage", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/NdmConstituent;)V");
                mids$[mid_writeSegment_fe05c5cc7a835818] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::String MessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_d2c8eb4129821f0e]));
            }

            ::java::lang::String MessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_d2c8eb4129821f0e]));
            }

            jdouble MessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_9981f74b2d109da6]);
            }

            void MessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_05c6d36d73082fa6], a0.this$);
            }

            void MessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Header & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_df6f5cf94f18077d], a0.this$, a1.this$);
            }

            void MessageWriter::writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::NdmConstituent & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeMessage_d663c14e7d793f18], a0.this$, a1.this$);
            }

            void MessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Segment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_fe05c5cc7a835818], a0.this$, a1.this$);
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
          namespace generation {
            static PyObject *t_MessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageWriter_of_(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_getFormatVersionKey(t_MessageWriter *self);
            static PyObject *t_MessageWriter_getRoot(t_MessageWriter *self);
            static PyObject *t_MessageWriter_getVersion(t_MessageWriter *self);
            static PyObject *t_MessageWriter_writeFooter(t_MessageWriter *self, PyObject *arg);
            static PyObject *t_MessageWriter_writeHeader(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_writeMessage(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_writeSegment(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_get__formatVersionKey(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__root(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__version(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__parameters_(t_MessageWriter *self, void *data);
            static PyGetSetDef t_MessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_MessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_MessageWriter, root),
              DECLARE_GET_FIELD(t_MessageWriter, version),
              DECLARE_GET_FIELD(t_MessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MessageWriter__methods_[] = {
              DECLARE_METHOD(t_MessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_MessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, writeMessage, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, writeSegment, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageWriter)[] = {
              { Py_tp_methods, t_MessageWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageWriter, t_MessageWriter, MessageWriter);
            PyObject *t_MessageWriter::wrap_Object(const MessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_MessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageWriter *self = (t_MessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_MessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_MessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageWriter *self = (t_MessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_MessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageWriter), &PY_TYPE_DEF(MessageWriter), module, "MessageWriter", 0);
            }

            void t_MessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "class_", make_descriptor(MessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "wrapfn_", make_descriptor(t_MessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageWriter::initializeClass, 1)))
                return NULL;
              return t_MessageWriter::wrap_Object(MessageWriter(((t_MessageWriter *) arg)->object.this$));
            }
            static PyObject *t_MessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MessageWriter_of_(t_MessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MessageWriter_getFormatVersionKey(t_MessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_MessageWriter_getRoot(t_MessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_MessageWriter_getVersion(t_MessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MessageWriter_writeFooter(t_MessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeHeader(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Header a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeMessage(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::NdmConstituent a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_NdmConstituent::parameters_))
              {
                OBJ_CALL(self->object.writeMessage(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeMessage", args);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeSegment(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Segment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }
            static PyObject *t_MessageWriter_get__parameters_(t_MessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MessageWriter_get__formatVersionKey(t_MessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_MessageWriter_get__root(t_MessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_MessageWriter_get__version(t_MessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GalileoScale::class$ = NULL;
      jmethodID *GalileoScale::mids$ = NULL;
      bool GalileoScale::live$ = false;

      jclass GalileoScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GalileoScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GalileoScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble GalileoScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GalileoScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble GalileoScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::java::lang::String GalileoScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_GalileoScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GalileoScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GalileoScale_getName(t_GalileoScale *self);
      static PyObject *t_GalileoScale_offsetFromTAI(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_offsetToTAI(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_toString(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_get__name(t_GalileoScale *self, void *data);
      static PyGetSetDef t_GalileoScale__fields_[] = {
        DECLARE_GET_FIELD(t_GalileoScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GalileoScale__methods_[] = {
        DECLARE_METHOD(t_GalileoScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GalileoScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GalileoScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GalileoScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GalileoScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GalileoScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GalileoScale)[] = {
        { Py_tp_methods, t_GalileoScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GalileoScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GalileoScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GalileoScale, t_GalileoScale, GalileoScale);

      void t_GalileoScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GalileoScale), &PY_TYPE_DEF(GalileoScale), module, "GalileoScale", 0);
      }

      void t_GalileoScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "class_", make_descriptor(GalileoScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "wrapfn_", make_descriptor(t_GalileoScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GalileoScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GalileoScale::initializeClass, 1)))
          return NULL;
        return t_GalileoScale::wrap_Object(GalileoScale(((t_GalileoScale *) arg)->object.this$));
      }
      static PyObject *t_GalileoScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GalileoScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GalileoScale_getName(t_GalileoScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GalileoScale_offsetFromTAI(t_GalileoScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GalileoScale_offsetToTAI(t_GalileoScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GalileoScale_toString(t_GalileoScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GalileoScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GalileoScale_get__name(t_GalileoScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ZipJarCrawler$Archive$EntryStream.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ZipJarCrawler$Archive$EntryStream::class$ = NULL;
      jmethodID *ZipJarCrawler$Archive$EntryStream::mids$ = NULL;
      bool ZipJarCrawler$Archive$EntryStream::live$ = false;

      jclass ZipJarCrawler$Archive$EntryStream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ZipJarCrawler$Archive$EntryStream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_available_d6ab429752e7c267] = env->getMethodID(cls, "available", "()I");
          mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_isDirectory_eee3de00fe971136] = env->getMethodID(cls, "isDirectory", "()Z");
          mids$[mid_mark_8fd427ab23829bf5] = env->getMethodID(cls, "mark", "(I)V");
          mids$[mid_markSupported_eee3de00fe971136] = env->getMethodID(cls, "markSupported", "()Z");
          mids$[mid_read_d6ab429752e7c267] = env->getMethodID(cls, "read", "()I");
          mids$[mid_read_89e14f411787412a] = env->getMethodID(cls, "read", "([B)I");
          mids$[mid_read_1351cbafe5a435a7] = env->getMethodID(cls, "read", "([BII)I");
          mids$[mid_reset_ff7cb6c242604316] = env->getMethodID(cls, "reset", "()V");
          mids$[mid_skip_1eaf6eb0a3f3163f] = env->getMethodID(cls, "skip", "(J)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ZipJarCrawler$Archive$EntryStream::available() const
      {
        return env->callIntMethod(this$, mids$[mid_available_d6ab429752e7c267]);
      }

      void ZipJarCrawler$Archive$EntryStream::close() const
      {
        env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
      }

      ::java::lang::String ZipJarCrawler$Archive$EntryStream::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jboolean ZipJarCrawler$Archive$EntryStream::isDirectory() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isDirectory_eee3de00fe971136]);
      }

      void ZipJarCrawler$Archive$EntryStream::mark(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_mark_8fd427ab23829bf5], a0);
      }

      jboolean ZipJarCrawler$Archive$EntryStream::markSupported() const
      {
        return env->callBooleanMethod(this$, mids$[mid_markSupported_eee3de00fe971136]);
      }

      jint ZipJarCrawler$Archive$EntryStream::read() const
      {
        return env->callIntMethod(this$, mids$[mid_read_d6ab429752e7c267]);
      }

      jint ZipJarCrawler$Archive$EntryStream::read(const JArray< jbyte > & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_read_89e14f411787412a], a0.this$);
      }

      jint ZipJarCrawler$Archive$EntryStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        return env->callIntMethod(this$, mids$[mid_read_1351cbafe5a435a7], a0.this$, a1, a2);
      }

      void ZipJarCrawler$Archive$EntryStream::reset() const
      {
        env->callVoidMethod(this$, mids$[mid_reset_ff7cb6c242604316]);
      }

      jlong ZipJarCrawler$Archive$EntryStream::skip(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_skip_1eaf6eb0a3f3163f], a0);
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
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_available(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_close(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_getName(t_ZipJarCrawler$Archive$EntryStream *self);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_isDirectory(t_ZipJarCrawler$Archive$EntryStream *self);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_mark(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_markSupported(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_read(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_reset(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_skip(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__directory(t_ZipJarCrawler$Archive$EntryStream *self, void *data);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__name(t_ZipJarCrawler$Archive$EntryStream *self, void *data);
      static PyGetSetDef t_ZipJarCrawler$Archive$EntryStream__fields_[] = {
        DECLARE_GET_FIELD(t_ZipJarCrawler$Archive$EntryStream, directory),
        DECLARE_GET_FIELD(t_ZipJarCrawler$Archive$EntryStream, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ZipJarCrawler$Archive$EntryStream__methods_[] = {
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, available, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, close, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, getName, METH_NOARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, isDirectory, METH_NOARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, mark, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, markSupported, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, read, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, reset, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, skip, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ZipJarCrawler$Archive$EntryStream)[] = {
        { Py_tp_methods, t_ZipJarCrawler$Archive$EntryStream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ZipJarCrawler$Archive$EntryStream__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ZipJarCrawler$Archive$EntryStream)[] = {
        &PY_TYPE_DEF(::java::io::InputStream),
        NULL
      };

      DEFINE_TYPE(ZipJarCrawler$Archive$EntryStream, t_ZipJarCrawler$Archive$EntryStream, ZipJarCrawler$Archive$EntryStream);

      void t_ZipJarCrawler$Archive$EntryStream::install(PyObject *module)
      {
        installType(&PY_TYPE(ZipJarCrawler$Archive$EntryStream), &PY_TYPE_DEF(ZipJarCrawler$Archive$EntryStream), module, "ZipJarCrawler$Archive$EntryStream", 0);
      }

      void t_ZipJarCrawler$Archive$EntryStream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "class_", make_descriptor(ZipJarCrawler$Archive$EntryStream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "wrapfn_", make_descriptor(t_ZipJarCrawler$Archive$EntryStream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ZipJarCrawler$Archive$EntryStream::initializeClass, 1)))
          return NULL;
        return t_ZipJarCrawler$Archive$EntryStream::wrap_Object(ZipJarCrawler$Archive$EntryStream(((t_ZipJarCrawler$Archive$EntryStream *) arg)->object.this$));
      }
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ZipJarCrawler$Archive$EntryStream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_available(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.available());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "available", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_close(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.close());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "close", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_getName(t_ZipJarCrawler$Archive$EntryStream *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_isDirectory(t_ZipJarCrawler$Archive$EntryStream *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isDirectory());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_mark(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jint a0;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(self->object.mark(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "mark", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_markSupported(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.markSupported());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "markSupported", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_read(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
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
            JArray< jbyte > a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(result = self->object.read(a0));
              return PyLong_FromLong((long) result);
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.read(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "read", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_reset(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.reset());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "reset", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_skip(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jlong a0;
        jlong result;

        if (!parseArgs(args, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "skip", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__directory(t_ZipJarCrawler$Archive$EntryStream *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isDirectory());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__name(t_ZipJarCrawler$Archive$EntryStream *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *Aem::class$ = NULL;
              jmethodID *Aem::mids$ = NULL;
              bool Aem::live$ = false;
              ::java::lang::String *Aem::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Aem::ROOT = NULL;

              jclass Aem::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/Aem");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8e67c3c744d320a9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Aem::Aem(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_8e67c3c744d320a9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map Aem::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
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
            namespace aem {
              static PyObject *t_Aem_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Aem_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Aem_of_(t_Aem *self, PyObject *args);
              static int t_Aem_init_(t_Aem *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Aem_getSatellites(t_Aem *self);
              static PyObject *t_Aem_get__satellites(t_Aem *self, void *data);
              static PyObject *t_Aem_get__parameters_(t_Aem *self, void *data);
              static PyGetSetDef t_Aem__fields_[] = {
                DECLARE_GET_FIELD(t_Aem, satellites),
                DECLARE_GET_FIELD(t_Aem, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Aem__methods_[] = {
                DECLARE_METHOD(t_Aem, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Aem, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Aem, of_, METH_VARARGS),
                DECLARE_METHOD(t_Aem, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Aem)[] = {
                { Py_tp_methods, t_Aem__methods_ },
                { Py_tp_init, (void *) t_Aem_init_ },
                { Py_tp_getset, t_Aem__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Aem)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Aem, t_Aem, Aem);
              PyObject *t_Aem::wrap_Object(const Aem& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Aem::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Aem *self = (t_Aem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Aem::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Aem::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Aem *self = (t_Aem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Aem::install(PyObject *module)
              {
                installType(&PY_TYPE(Aem), &PY_TYPE_DEF(Aem), module, "Aem", 0);
              }

              void t_Aem::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "class_", make_descriptor(Aem::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "wrapfn_", make_descriptor(t_Aem::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "boxfn_", make_descriptor(boxObject));
                env->getClass(Aem::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Aem::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "ROOT", make_descriptor(j2p(*Aem::ROOT)));
              }

              static PyObject *t_Aem_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Aem::initializeClass, 1)))
                  return NULL;
                return t_Aem::wrap_Object(Aem(((t_Aem *) arg)->object.this$));
              }
              static PyObject *t_Aem_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Aem::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Aem_of_(t_Aem *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Aem_init_(t_Aem *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Aem object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Aem(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Aem_getSatellites(t_Aem *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSatelliteEphemeris));
              }
              static PyObject *t_Aem_get__parameters_(t_Aem *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Aem_get__satellites(t_Aem *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/hipparchus/special/BesselJ.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *BesselJ::class$ = NULL;
      jmethodID *BesselJ::mids$ = NULL;
      bool BesselJ::live$ = false;

      jclass BesselJ::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/BesselJ");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_rjBesl_dc4e9fb1ab0080b9] = env->getStaticMethodID(cls, "rjBesl", "(DDI)Lorg/hipparchus/special/BesselJ$BesselJResult;");
          mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
          mids$[mid_value_82f92590f4247da1] = env->getStaticMethodID(cls, "value", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BesselJ::BesselJ(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

      ::org::hipparchus::special::BesselJ$BesselJResult BesselJ::rjBesl(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::special::BesselJ$BesselJResult(env->callStaticObjectMethod(cls, mids$[mid_rjBesl_dc4e9fb1ab0080b9], a0, a1, a2));
      }

      jdouble BesselJ::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
      }

      jdouble BesselJ::value(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_value_82f92590f4247da1], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      static PyObject *t_BesselJ_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BesselJ_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BesselJ_init_(t_BesselJ *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BesselJ_rjBesl(PyTypeObject *type, PyObject *args);
      static PyObject *t_BesselJ_value(t_BesselJ *self, PyObject *arg);
      static PyObject *t_BesselJ_value_(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_BesselJ__methods_[] = {
        DECLARE_METHOD(t_BesselJ, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, rjBesl, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, value, METH_O),
        DECLARE_METHOD(t_BesselJ, value_, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BesselJ)[] = {
        { Py_tp_methods, t_BesselJ__methods_ },
        { Py_tp_init, (void *) t_BesselJ_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BesselJ)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BesselJ, t_BesselJ, BesselJ);

      void t_BesselJ::install(PyObject *module)
      {
        installType(&PY_TYPE(BesselJ), &PY_TYPE_DEF(BesselJ), module, "BesselJ", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "BesselJResult", make_descriptor(&PY_TYPE_DEF(BesselJ$BesselJResult)));
      }

      void t_BesselJ::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "class_", make_descriptor(BesselJ::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "wrapfn_", make_descriptor(t_BesselJ::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BesselJ_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BesselJ::initializeClass, 1)))
          return NULL;
        return t_BesselJ::wrap_Object(BesselJ(((t_BesselJ *) arg)->object.this$));
      }
      static PyObject *t_BesselJ_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BesselJ::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BesselJ_init_(t_BesselJ *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        BesselJ object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = BesselJ(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BesselJ_rjBesl(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jint a2;
        ::org::hipparchus::special::BesselJ$BesselJResult result((jobject) NULL);

        if (!parseArgs(args, "DDI", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::special::BesselJ::rjBesl(a0, a1, a2));
          return ::org::hipparchus::special::t_BesselJ$BesselJResult::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "rjBesl", args);
        return NULL;
      }

      static PyObject *t_BesselJ_value(t_BesselJ *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }

      static PyObject *t_BesselJ_value_(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::special::BesselJ::value(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "value_", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *HarmonicOscillator$Parametric::class$ = NULL;
        jmethodID *HarmonicOscillator$Parametric::mids$ = NULL;
        bool HarmonicOscillator$Parametric::live$ = false;

        jclass HarmonicOscillator$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/HarmonicOscillator$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_bfc955188bf36f2c] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_4f42c7a8793320e4] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicOscillator$Parametric::HarmonicOscillator$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        JArray< jdouble > HarmonicOscillator$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_bfc955188bf36f2c], a0, a1.this$));
        }

        jdouble HarmonicOscillator$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_4f42c7a8793320e4], a0, a1.this$);
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
        static PyObject *t_HarmonicOscillator$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicOscillator$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicOscillator$Parametric_init_(t_HarmonicOscillator$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicOscillator$Parametric_gradient(t_HarmonicOscillator$Parametric *self, PyObject *args);
        static PyObject *t_HarmonicOscillator$Parametric_value(t_HarmonicOscillator$Parametric *self, PyObject *args);

        static PyMethodDef t_HarmonicOscillator$Parametric__methods_[] = {
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicOscillator$Parametric)[] = {
          { Py_tp_methods, t_HarmonicOscillator$Parametric__methods_ },
          { Py_tp_init, (void *) t_HarmonicOscillator$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicOscillator$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicOscillator$Parametric, t_HarmonicOscillator$Parametric, HarmonicOscillator$Parametric);

        void t_HarmonicOscillator$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicOscillator$Parametric), &PY_TYPE_DEF(HarmonicOscillator$Parametric), module, "HarmonicOscillator$Parametric", 0);
        }

        void t_HarmonicOscillator$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "class_", make_descriptor(HarmonicOscillator$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "wrapfn_", make_descriptor(t_HarmonicOscillator$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicOscillator$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicOscillator$Parametric::initializeClass, 1)))
            return NULL;
          return t_HarmonicOscillator$Parametric::wrap_Object(HarmonicOscillator$Parametric(((t_HarmonicOscillator$Parametric *) arg)->object.this$));
        }
        static PyObject *t_HarmonicOscillator$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicOscillator$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicOscillator$Parametric_init_(t_HarmonicOscillator$Parametric *self, PyObject *args, PyObject *kwds)
        {
          HarmonicOscillator$Parametric object((jobject) NULL);

          INT_CALL(object = HarmonicOscillator$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_HarmonicOscillator$Parametric_gradient(t_HarmonicOscillator$Parametric *self, PyObject *args)
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

        static PyObject *t_HarmonicOscillator$Parametric_value(t_HarmonicOscillator$Parametric *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/tdm/PythonRangeUnitsConverter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_metersToRu_b2dab880055d21ac] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_ruToMeters_b2dab880055d21ac] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonRangeUnitsConverter::PythonRangeUnitsConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonRangeUnitsConverter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonRangeUnitsConverter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonRangeUnitsConverter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_42c72b98e3c2e08a]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jdouble JNICALL t_PythonRangeUnitsConverter_ruToMeters2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_42c72b98e3c2e08a]);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistory::class$ = NULL;
              jmethodID *OrbitCovarianceHistory::mids$ = NULL;
              bool OrbitCovarianceHistory::live$ = false;

              jclass OrbitCovarianceHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_11f077a07eb03f98] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getCovariances_d751c1a57012b438] = env->getMethodID(cls, "getCovariances", "()Ljava/util/List;");
                  mids$[mid_getMetadata_31032cacfaa641b0] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovarianceHistory::OrbitCovarianceHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11f077a07eb03f98, a0.this$, a1.this$)) {}

              ::java::util::List OrbitCovarianceHistory::getCovariances() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovariances_d751c1a57012b438]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata OrbitCovarianceHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_31032cacfaa641b0]));
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
              static PyObject *t_OrbitCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovarianceHistory_init_(t_OrbitCovarianceHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovarianceHistory_getCovariances(t_OrbitCovarianceHistory *self);
              static PyObject *t_OrbitCovarianceHistory_getMetadata(t_OrbitCovarianceHistory *self);
              static PyObject *t_OrbitCovarianceHistory_get__covariances(t_OrbitCovarianceHistory *self, void *data);
              static PyObject *t_OrbitCovarianceHistory_get__metadata(t_OrbitCovarianceHistory *self, void *data);
              static PyGetSetDef t_OrbitCovarianceHistory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovarianceHistory, covariances),
                DECLARE_GET_FIELD(t_OrbitCovarianceHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistory__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, getCovariances, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistory)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistory__methods_ },
                { Py_tp_init, (void *) t_OrbitCovarianceHistory_init_ },
                { Py_tp_getset, t_OrbitCovarianceHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistory, t_OrbitCovarianceHistory, OrbitCovarianceHistory);

              void t_OrbitCovarianceHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistory), &PY_TYPE_DEF(OrbitCovarianceHistory), module, "OrbitCovarianceHistory", 0);
              }

              void t_OrbitCovarianceHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "class_", make_descriptor(OrbitCovarianceHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "wrapfn_", make_descriptor(t_OrbitCovarianceHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistory::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistory::wrap_Object(OrbitCovarianceHistory(((t_OrbitCovarianceHistory *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovarianceHistory_init_(t_OrbitCovarianceHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                OrbitCovarianceHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OrbitCovarianceHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovarianceHistory_getCovariances(t_OrbitCovarianceHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitCovariance));
              }

              static PyObject *t_OrbitCovarianceHistory_getMetadata(t_OrbitCovarianceHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCovarianceHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistory_get__covariances(t_OrbitCovarianceHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OrbitCovarianceHistory_get__metadata(t_OrbitCovarianceHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCovarianceHistoryMetadata::wrap_Object(value);
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
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIllegalArgumentException::class$ = NULL;
      jmethodID *OrekitIllegalArgumentException::mids$ = NULL;
      bool OrekitIllegalArgumentException::live$ = false;

      jclass OrekitIllegalArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIllegalArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIllegalArgumentException::OrekitIllegalArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIllegalArgumentException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitIllegalArgumentException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitIllegalArgumentException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIllegalArgumentException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
      }

      ::org::hipparchus::exception::Localizable OrekitIllegalArgumentException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIllegalArgumentException_init_(t_OrekitIllegalArgumentException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIllegalArgumentException_getLocalizedMessage(t_OrekitIllegalArgumentException *self, PyObject *args);
      static PyObject *t_OrekitIllegalArgumentException_getMessage(t_OrekitIllegalArgumentException *self, PyObject *args);
      static PyObject *t_OrekitIllegalArgumentException_getParts(t_OrekitIllegalArgumentException *self);
      static PyObject *t_OrekitIllegalArgumentException_getSpecifier(t_OrekitIllegalArgumentException *self);
      static PyObject *t_OrekitIllegalArgumentException_get__localizedMessage(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__message(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__parts(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__specifier(t_OrekitIllegalArgumentException *self, void *data);
      static PyGetSetDef t_OrekitIllegalArgumentException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, message),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, parts),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIllegalArgumentException__methods_[] = {
        DECLARE_METHOD(t_OrekitIllegalArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIllegalArgumentException)[] = {
        { Py_tp_methods, t_OrekitIllegalArgumentException__methods_ },
        { Py_tp_init, (void *) t_OrekitIllegalArgumentException_init_ },
        { Py_tp_getset, t_OrekitIllegalArgumentException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIllegalArgumentException)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalArgumentException),
        NULL
      };

      DEFINE_TYPE(OrekitIllegalArgumentException, t_OrekitIllegalArgumentException, OrekitIllegalArgumentException);

      void t_OrekitIllegalArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIllegalArgumentException), &PY_TYPE_DEF(OrekitIllegalArgumentException), module, "OrekitIllegalArgumentException", 0);
      }

      void t_OrekitIllegalArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "class_", make_descriptor(OrekitIllegalArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "wrapfn_", make_descriptor(t_OrekitIllegalArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIllegalArgumentException::initializeClass, 1)))
          return NULL;
        return t_OrekitIllegalArgumentException::wrap_Object(OrekitIllegalArgumentException(((t_OrekitIllegalArgumentException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIllegalArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIllegalArgumentException_init_(t_OrekitIllegalArgumentException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIllegalArgumentException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIllegalArgumentException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIllegalArgumentException_getLocalizedMessage(t_OrekitIllegalArgumentException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIllegalArgumentException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalArgumentException_getMessage(t_OrekitIllegalArgumentException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitIllegalArgumentException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalArgumentException_getParts(t_OrekitIllegalArgumentException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalArgumentException_getSpecifier(t_OrekitIllegalArgumentException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__localizedMessage(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__message(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__parts(t_OrekitIllegalArgumentException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__specifier(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/PythonBatchLSObserver.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonBatchLSObserver::class$ = NULL;
        jmethodID *PythonBatchLSObserver::mids$ = NULL;
        bool PythonBatchLSObserver::live$ = false;

        jclass PythonBatchLSObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonBatchLSObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_evaluationPerformed_ac58ca1a85099680] = env->getMethodID(cls, "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonBatchLSObserver::PythonBatchLSObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonBatchLSObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonBatchLSObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonBatchLSObserver::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace leastsquares {
        static PyObject *t_PythonBatchLSObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonBatchLSObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonBatchLSObserver_init_(t_PythonBatchLSObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonBatchLSObserver_finalize(t_PythonBatchLSObserver *self);
        static PyObject *t_PythonBatchLSObserver_pythonExtension(t_PythonBatchLSObserver *self, PyObject *args);
        static void JNICALL t_PythonBatchLSObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2, jobject a3, jobject a4, jobject a5, jobject a6, jobject a7);
        static void JNICALL t_PythonBatchLSObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonBatchLSObserver_get__self(t_PythonBatchLSObserver *self, void *data);
        static PyGetSetDef t_PythonBatchLSObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonBatchLSObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonBatchLSObserver__methods_[] = {
          DECLARE_METHOD(t_PythonBatchLSObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonBatchLSObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonBatchLSObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonBatchLSObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonBatchLSObserver)[] = {
          { Py_tp_methods, t_PythonBatchLSObserver__methods_ },
          { Py_tp_init, (void *) t_PythonBatchLSObserver_init_ },
          { Py_tp_getset, t_PythonBatchLSObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonBatchLSObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonBatchLSObserver, t_PythonBatchLSObserver, PythonBatchLSObserver);

        void t_PythonBatchLSObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonBatchLSObserver), &PY_TYPE_DEF(PythonBatchLSObserver), module, "PythonBatchLSObserver", 1);
        }

        void t_PythonBatchLSObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "class_", make_descriptor(PythonBatchLSObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "wrapfn_", make_descriptor(t_PythonBatchLSObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonBatchLSObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V", (void *) t_PythonBatchLSObserver_evaluationPerformed0 },
            { "pythonDecRef", "()V", (void *) t_PythonBatchLSObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonBatchLSObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonBatchLSObserver::initializeClass, 1)))
            return NULL;
          return t_PythonBatchLSObserver::wrap_Object(PythonBatchLSObserver(((t_PythonBatchLSObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonBatchLSObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonBatchLSObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonBatchLSObserver_init_(t_PythonBatchLSObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonBatchLSObserver object((jobject) NULL);

          INT_CALL(object = PythonBatchLSObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonBatchLSObserver_finalize(t_PythonBatchLSObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonBatchLSObserver_pythonExtension(t_PythonBatchLSObserver *self, PyObject *args)
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

        static void JNICALL t_PythonBatchLSObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2, jobject a3, jobject a4, jobject a5, jobject a6, jobject a7)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::orbits::t_Orbit::wrap_jobject);
          PyObject *o3 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a3));
          PyObject *o4 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a4));
          PyObject *o5 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a5));
          PyObject *o6 = ::org::orekit::estimation::measurements::t_EstimationsProvider::wrap_Object(::org::orekit::estimation::measurements::EstimationsProvider(a6));
          PyObject *o7 = ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(a7));
          PyObject *result = PyObject_CallMethod(obj, "evaluationPerformed", "iiOOOOOO", (int) a0, (int) a1, o2, o3, o4, o5, o6, o7);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          Py_DECREF(o6);
          Py_DECREF(o7);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonBatchLSObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonBatchLSObserver_get__self(t_PythonBatchLSObserver *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldAttitudeInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldAttitudeInterpolator::class$ = NULL;
      jmethodID *FieldAttitudeInterpolator::mids$ = NULL;
      bool FieldAttitudeInterpolator::live$ = false;

      jclass FieldAttitudeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldAttitudeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b7710935192f0627] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldTimeInterpolator;)V");
          mids$[mid_getAngularInterpolator_3f8c23fb3b78d477] = env->getMethodID(cls, "getAngularInterpolator", "()Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_getReferenceFrame_cb151471db4570f0] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_ed83676662d8929d] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/attitudes/FieldAttitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAttitudeInterpolator::FieldAttitudeInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldTimeInterpolator & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b7710935192f0627, a0.this$, a1.this$)) {}

      ::org::orekit::time::FieldTimeInterpolator FieldAttitudeInterpolator::getAngularInterpolator() const
      {
        return ::org::orekit::time::FieldTimeInterpolator(env->callObjectMethod(this$, mids$[mid_getAngularInterpolator_3f8c23fb3b78d477]));
      }

      ::org::orekit::frames::Frame FieldAttitudeInterpolator::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_cb151471db4570f0]));
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
      static PyObject *t_FieldAttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitudeInterpolator_of_(t_FieldAttitudeInterpolator *self, PyObject *args);
      static int t_FieldAttitudeInterpolator_init_(t_FieldAttitudeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAttitudeInterpolator_getAngularInterpolator(t_FieldAttitudeInterpolator *self);
      static PyObject *t_FieldAttitudeInterpolator_getReferenceFrame(t_FieldAttitudeInterpolator *self);
      static PyObject *t_FieldAttitudeInterpolator_get__angularInterpolator(t_FieldAttitudeInterpolator *self, void *data);
      static PyObject *t_FieldAttitudeInterpolator_get__referenceFrame(t_FieldAttitudeInterpolator *self, void *data);
      static PyObject *t_FieldAttitudeInterpolator_get__parameters_(t_FieldAttitudeInterpolator *self, void *data);
      static PyGetSetDef t_FieldAttitudeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, angularInterpolator),
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, referenceFrame),
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAttitudeInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldAttitudeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, getAngularInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, getReferenceFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAttitudeInterpolator)[] = {
        { Py_tp_methods, t_FieldAttitudeInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldAttitudeInterpolator_init_ },
        { Py_tp_getset, t_FieldAttitudeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAttitudeInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldAttitudeInterpolator, t_FieldAttitudeInterpolator, FieldAttitudeInterpolator);
      PyObject *t_FieldAttitudeInterpolator::wrap_Object(const FieldAttitudeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitudeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitudeInterpolator *self = (t_FieldAttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAttitudeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitudeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitudeInterpolator *self = (t_FieldAttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAttitudeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAttitudeInterpolator), &PY_TYPE_DEF(FieldAttitudeInterpolator), module, "FieldAttitudeInterpolator", 0);
      }

      void t_FieldAttitudeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "class_", make_descriptor(FieldAttitudeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "wrapfn_", make_descriptor(t_FieldAttitudeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAttitudeInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldAttitudeInterpolator::wrap_Object(FieldAttitudeInterpolator(((t_FieldAttitudeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldAttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAttitudeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAttitudeInterpolator_of_(t_FieldAttitudeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAttitudeInterpolator_init_(t_FieldAttitudeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::time::FieldTimeInterpolator a1((jobject) NULL);
        PyTypeObject **p1;
        FieldAttitudeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldTimeInterpolator::parameters_))
        {
          INT_CALL(object = FieldAttitudeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldAttitudeInterpolator_getAngularInterpolator(t_FieldAttitudeInterpolator *self)
      {
        ::org::orekit::time::FieldTimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_FieldTimeInterpolator::wrap_Object(result);
      }

      static PyObject *t_FieldAttitudeInterpolator_getReferenceFrame(t_FieldAttitudeInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_FieldAttitudeInterpolator_get__parameters_(t_FieldAttitudeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAttitudeInterpolator_get__angularInterpolator(t_FieldAttitudeInterpolator *self, void *data)
      {
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_FieldTimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_FieldAttitudeInterpolator_get__referenceFrame(t_FieldAttitudeInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParametersWriter::class$ = NULL;
            jmethodID *ODParametersWriter::mids$ = NULL;
            bool ODParametersWriter::live$ = false;

            jclass ODParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_ODParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_ODParametersWriter__methods_[] = {
              DECLARE_METHOD(t_ODParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParametersWriter)[] = {
              { Py_tp_methods, t_ODParametersWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(ODParametersWriter, t_ODParametersWriter, ODParametersWriter);

            void t_ODParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParametersWriter), &PY_TYPE_DEF(ODParametersWriter), module, "ODParametersWriter", 0);
            }

            void t_ODParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "class_", make_descriptor(ODParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "wrapfn_", make_descriptor(t_ODParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ODParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParametersWriter::initializeClass, 1)))
                return NULL;
              return t_ODParametersWriter::wrap_Object(ODParametersWriter(((t_ODParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_ODParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *AbstractGaussianContribution::class$ = NULL;
            jmethodID *AbstractGaussianContribution::mids$ = NULL;
            bool AbstractGaussianContribution::live$ = false;

            jclass AbstractGaussianContribution::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMeanElementRate_43ba9f5eaba95dbb] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_3eb9526d5d611f82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
                mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_49390f5c28b648db] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_61d4f27408b30d56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_getMeanElementRate_58a6b06e250dffee] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution$GaussQuadrature;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_4f8f8474d6a9a1ae] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution$GaussQuadrature;DDLorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext;[D)[D");
                mids$[mid_getLLimits_15451c899b8436e1] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLLimits_5bf18b5e9ec57652] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getParametersDriversWithoutMu_d751c1a57012b438] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > AbstractGaussianContribution::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_43ba9f5eaba95dbb], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > AbstractGaussianContribution::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3eb9526d5d611f82], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List AbstractGaussianContribution::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
            }

            void AbstractGaussianContribution::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
            }

            void AbstractGaussianContribution::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
            }

            ::java::util::List AbstractGaussianContribution::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List AbstractGaussianContribution::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6], a0.this$, a1.this$, a2.this$));
            }

            void AbstractGaussianContribution::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
            }

            void AbstractGaussianContribution::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_49390f5c28b648db], a0.this$, a1.this$);
            }

            void AbstractGaussianContribution::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_61d4f27408b30d56], a0.this$, a1.this$);
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
            static PyObject *t_AbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_getMeanElementRate(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_getParametersDrivers(t_AbstractGaussianContribution *self);
            static PyObject *t_AbstractGaussianContribution_init(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_initializeShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_registerAttitudeProvider(t_AbstractGaussianContribution *self, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_updateShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_get__parametersDrivers(t_AbstractGaussianContribution *self, void *data);
            static PyGetSetDef t_AbstractGaussianContribution__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGaussianContribution, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGaussianContribution__methods_[] = {
              DECLARE_METHOD(t_AbstractGaussianContribution, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContribution, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContribution, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, init, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_AbstractGaussianContribution, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGaussianContribution)[] = {
              { Py_tp_methods, t_AbstractGaussianContribution__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractGaussianContribution__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGaussianContribution)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractGaussianContribution, t_AbstractGaussianContribution, AbstractGaussianContribution);

            void t_AbstractGaussianContribution::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGaussianContribution), &PY_TYPE_DEF(AbstractGaussianContribution), module, "AbstractGaussianContribution", 0);
            }

            void t_AbstractGaussianContribution::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "class_", make_descriptor(AbstractGaussianContribution::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "wrapfn_", make_descriptor(t_AbstractGaussianContribution::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGaussianContribution::initializeClass, 1)))
                return NULL;
              return t_AbstractGaussianContribution::wrap_Object(AbstractGaussianContribution(((t_AbstractGaussianContribution *) arg)->object.this$));
            }
            static PyObject *t_AbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGaussianContribution::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractGaussianContribution_getMeanElementRate(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
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
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_getParametersDrivers(t_AbstractGaussianContribution *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_AbstractGaussianContribution_init(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
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
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.init(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "init", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_initializeShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args)
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

            static PyObject *t_AbstractGaussianContribution_registerAttitudeProvider(t_AbstractGaussianContribution *self, PyObject *arg)
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

            static PyObject *t_AbstractGaussianContribution_updateShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args)
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

            static PyObject *t_AbstractGaussianContribution_get__parametersDrivers(t_AbstractGaussianContribution *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/TimeSpanDragForce.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *TimeSpanDragForce::class$ = NULL;
        jmethodID *TimeSpanDragForce::mids$ = NULL;
        bool TimeSpanDragForce::live$ = false;
        ::java::lang::String *TimeSpanDragForce::DATE_AFTER = NULL;
        ::java::lang::String *TimeSpanDragForce::DATE_BEFORE = NULL;

        jclass TimeSpanDragForce::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/TimeSpanDragForce");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f2f0fa9d3d8aa425] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;)V");
            mids$[mid_init$_508739e3461beebd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addDragSensitiveValidAfter_f34a04b649f6c1dc] = env->getMethodID(cls, "addDragSensitiveValidAfter", "(Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addDragSensitiveValidBefore_f34a04b649f6c1dc] = env->getMethodID(cls, "addDragSensitiveValidBefore", "(Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_extractDragSensitiveRange_d943d113c5f78644] = env->getMethodID(cls, "extractDragSensitiveRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_extractParameters_f6f6c8fcf1e496fb] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_extractParameters_f4e70a6b1a1cf5f6] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDragSensitive_7ecdf335bc4f7d48] = env->getMethodID(cls, "getDragSensitive", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/drag/DragSensitive;");
            mids$[mid_getDragSensitiveSpan_7b19e06f3155cde2] = env->getMethodID(cls, "getDragSensitiveSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFirstSpan_ea49fa2ad441b95d] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
            DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TimeSpanDragForce::TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_f2f0fa9d3d8aa425, a0.this$, a1.this$)) {}

        TimeSpanDragForce::TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_508739e3461beebd, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeSpanDragForce::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeSpanDragForce::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        void TimeSpanDragForce::addDragSensitiveValidAfter(const ::org::orekit::forces::drag::DragSensitive & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDragSensitiveValidAfter_f34a04b649f6c1dc], a0.this$, a1.this$);
        }

        void TimeSpanDragForce::addDragSensitiveValidBefore(const ::org::orekit::forces::drag::DragSensitive & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDragSensitiveValidBefore_f34a04b649f6c1dc], a0.this$, a1.this$);
        }

        ::org::orekit::utils::TimeSpanMap TimeSpanDragForce::extractDragSensitiveRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractDragSensitiveRange_d943d113c5f78644], a0.this$, a1.this$));
        }

        JArray< jdouble > TimeSpanDragForce::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_f6f6c8fcf1e496fb], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanDragForce::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_f4e70a6b1a1cf5f6], a0.this$, a1.this$));
        }

        ::org::orekit::forces::drag::DragSensitive TimeSpanDragForce::getDragSensitive(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getDragSensitive_7ecdf335bc4f7d48], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanDragForce::getDragSensitiveSpan(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getDragSensitiveSpan_7b19e06f3155cde2], a0.this$));
        }

        ::java::util::stream::Stream TimeSpanDragForce::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
        }

        ::java::util::stream::Stream TimeSpanDragForce::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanDragForce::getFirstSpan() const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_ea49fa2ad441b95d]));
        }

        ::java::util::List TimeSpanDragForce::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
      namespace drag {
        static PyObject *t_TimeSpanDragForce_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TimeSpanDragForce_init_(t_TimeSpanDragForce *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TimeSpanDragForce_acceleration(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidAfter(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidBefore(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_extractDragSensitiveRange(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_extractParameters(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getDragSensitive(t_TimeSpanDragForce *self, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_getDragSensitiveSpan(t_TimeSpanDragForce *self, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_getEventDetectors(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getFieldEventDetectors(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getFirstSpan(t_TimeSpanDragForce *self);
        static PyObject *t_TimeSpanDragForce_getParametersDrivers(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_get__eventDetectors(t_TimeSpanDragForce *self, void *data);
        static PyObject *t_TimeSpanDragForce_get__firstSpan(t_TimeSpanDragForce *self, void *data);
        static PyObject *t_TimeSpanDragForce_get__parametersDrivers(t_TimeSpanDragForce *self, void *data);
        static PyGetSetDef t_TimeSpanDragForce__fields_[] = {
          DECLARE_GET_FIELD(t_TimeSpanDragForce, eventDetectors),
          DECLARE_GET_FIELD(t_TimeSpanDragForce, firstSpan),
          DECLARE_GET_FIELD(t_TimeSpanDragForce, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeSpanDragForce__methods_[] = {
          DECLARE_METHOD(t_TimeSpanDragForce, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanDragForce, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanDragForce, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, addDragSensitiveValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, addDragSensitiveValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, extractDragSensitiveRange, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, extractParameters, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getDragSensitive, METH_O),
          DECLARE_METHOD(t_TimeSpanDragForce, getDragSensitiveSpan, METH_O),
          DECLARE_METHOD(t_TimeSpanDragForce, getEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getFieldEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getFirstSpan, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeSpanDragForce)[] = {
          { Py_tp_methods, t_TimeSpanDragForce__methods_ },
          { Py_tp_init, (void *) t_TimeSpanDragForce_init_ },
          { Py_tp_getset, t_TimeSpanDragForce__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeSpanDragForce)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(TimeSpanDragForce, t_TimeSpanDragForce, TimeSpanDragForce);

        void t_TimeSpanDragForce::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeSpanDragForce), &PY_TYPE_DEF(TimeSpanDragForce), module, "TimeSpanDragForce", 0);
        }

        void t_TimeSpanDragForce::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "class_", make_descriptor(TimeSpanDragForce::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "wrapfn_", make_descriptor(t_TimeSpanDragForce::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "boxfn_", make_descriptor(boxObject));
          env->getClass(TimeSpanDragForce::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "DATE_AFTER", make_descriptor(j2p(*TimeSpanDragForce::DATE_AFTER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanDragForce::DATE_BEFORE)));
        }

        static PyObject *t_TimeSpanDragForce_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeSpanDragForce::initializeClass, 1)))
            return NULL;
          return t_TimeSpanDragForce::wrap_Object(TimeSpanDragForce(((t_TimeSpanDragForce *) arg)->object.this$));
        }
        static PyObject *t_TimeSpanDragForce_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeSpanDragForce::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TimeSpanDragForce_init_(t_TimeSpanDragForce *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
              ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
              TimeSpanDragForce object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1))
              {
                INT_CALL(object = TimeSpanDragForce(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
              ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              TimeSpanDragForce object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanDragForce(a0, a1, a2));
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

        static PyObject *t_TimeSpanDragForce_acceleration(t_TimeSpanDragForce *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidAfter(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::forces::drag::DragSensitive a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addDragSensitiveValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDragSensitiveValidAfter", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidBefore(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::forces::drag::DragSensitive a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addDragSensitiveValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDragSensitiveValidBefore", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_extractDragSensitiveRange(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.extractDragSensitiveRange(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
          }

          PyErr_SetArgsError((PyObject *) self, "extractDragSensitiveRange", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_extractParameters(t_TimeSpanDragForce *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return result.wrap();
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getDragSensitive(t_TimeSpanDragForce *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDragSensitive(a0));
            return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDragSensitive", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getDragSensitiveSpan(t_TimeSpanDragForce *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDragSensitiveSpan(a0));
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
          }

          PyErr_SetArgsError((PyObject *) self, "getDragSensitiveSpan", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getEventDetectors(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getEventDetectors", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_getFieldEventDetectors(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getFieldEventDetectors", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_getFirstSpan(t_TimeSpanDragForce *self)
        {
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
        }

        static PyObject *t_TimeSpanDragForce_getParametersDrivers(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_get__eventDetectors(t_TimeSpanDragForce *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_TimeSpanDragForce_get__firstSpan(t_TimeSpanDragForce *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
        }

        static PyObject *t_TimeSpanDragForce_get__parametersDrivers(t_TimeSpanDragForce *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTForceModel::class$ = NULL;
            jmethodID *DSSTForceModel::mids$ = NULL;
            bool DSSTForceModel::live$ = false;

            jclass DSSTForceModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_extractParameters_f6f6c8fcf1e496fb] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_extractParameters_f4e70a6b1a1cf5f6] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
                mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
                mids$[mid_getMeanElementRate_3eb9526d5d611f82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_43ba9f5eaba95dbb] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
                mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_49390f5c28b648db] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_61d4f27408b30d56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > DSSTForceModel::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_f6f6c8fcf1e496fb], a0.this$, a1.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTForceModel::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_f4e70a6b1a1cf5f6], a0.this$, a1.this$));
            }

            ::java::util::stream::Stream DSSTForceModel::getEventDetectors() const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
            }

            ::java::util::stream::Stream DSSTForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTForceModel::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3eb9526d5d611f82], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTForceModel::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_43ba9f5eaba95dbb], a0.this$, a1.this$, a2.this$));
            }

            void DSSTForceModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
            }

            void DSSTForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
            }

            ::java::util::List DSSTForceModel::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTForceModel::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6], a0.this$, a1.this$, a2.this$));
            }

            void DSSTForceModel::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
            }

            void DSSTForceModel::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_49390f5c28b648db], a0.this$, a1.this$);
            }

            void DSSTForceModel::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_61d4f27408b30d56], a0.this$, a1.this$);
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
            static PyObject *t_DSSTForceModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTForceModel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTForceModel_extractParameters(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_getEventDetectors(t_DSSTForceModel *self);
            static PyObject *t_DSSTForceModel_getFieldEventDetectors(t_DSSTForceModel *self, PyObject *arg);
            static PyObject *t_DSSTForceModel_getMeanElementRate(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_init(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_initializeShortPeriodTerms(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_registerAttitudeProvider(t_DSSTForceModel *self, PyObject *arg);
            static PyObject *t_DSSTForceModel_updateShortPeriodTerms(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_get__eventDetectors(t_DSSTForceModel *self, void *data);
            static PyGetSetDef t_DSSTForceModel__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTForceModel, eventDetectors),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTForceModel__methods_[] = {
              DECLARE_METHOD(t_DSSTForceModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTForceModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTForceModel, extractParameters, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, getEventDetectors, METH_NOARGS),
              DECLARE_METHOD(t_DSSTForceModel, getFieldEventDetectors, METH_O),
              DECLARE_METHOD(t_DSSTForceModel, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, init, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTForceModel, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTForceModel)[] = {
              { Py_tp_methods, t_DSSTForceModel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTForceModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTForceModel)[] = {
              &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
              NULL
            };

            DEFINE_TYPE(DSSTForceModel, t_DSSTForceModel, DSSTForceModel);

            void t_DSSTForceModel::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTForceModel), &PY_TYPE_DEF(DSSTForceModel), module, "DSSTForceModel", 0);
            }

            void t_DSSTForceModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "class_", make_descriptor(DSSTForceModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "wrapfn_", make_descriptor(t_DSSTForceModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTForceModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTForceModel::initializeClass, 1)))
                return NULL;
              return t_DSSTForceModel::wrap_Object(DSSTForceModel(((t_DSSTForceModel *) arg)->object.this$));
            }
            static PyObject *t_DSSTForceModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTForceModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTForceModel_extractParameters(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.extractParameters(a0, a1));
                    return result.wrap();
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                  {
                    OBJ_CALL(result = self->object.extractParameters(a0, a1));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_getEventDetectors(t_DSSTForceModel *self)
            {
              ::java::util::stream::Stream result((jobject) NULL);
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            static PyObject *t_DSSTForceModel_getFieldEventDetectors(t_DSSTForceModel *self, PyObject *arg)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_getMeanElementRate(t_DSSTForceModel *self, PyObject *args)
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

            static PyObject *t_DSSTForceModel_init(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.init(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
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
                }
              }

              PyErr_SetArgsError((PyObject *) self, "init", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_initializeShortPeriodTerms(t_DSSTForceModel *self, PyObject *args)
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

            static PyObject *t_DSSTForceModel_registerAttitudeProvider(t_DSSTForceModel *self, PyObject *arg)
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

            static PyObject *t_DSSTForceModel_updateShortPeriodTerms(t_DSSTForceModel *self, PyObject *args)
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

            static PyObject *t_DSSTForceModel_get__eventDetectors(t_DSSTForceModel *self, void *data)
            {
              ::java::util::stream::Stream value((jobject) NULL);
              OBJ_CALL(value = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BivariateGridInterpolator::class$ = NULL;
        jmethodID *BivariateGridInterpolator::mids$ = NULL;
        bool BivariateGridInterpolator::live$ = false;

        jclass BivariateGridInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BivariateGridInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_5220d31f23237892] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/BivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::BivariateFunction BivariateGridInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::BivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_5220d31f23237892], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_BivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BivariateGridInterpolator_interpolate(t_BivariateGridInterpolator *self, PyObject *args);

        static PyMethodDef t_BivariateGridInterpolator__methods_[] = {
          DECLARE_METHOD(t_BivariateGridInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BivariateGridInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BivariateGridInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BivariateGridInterpolator)[] = {
          { Py_tp_methods, t_BivariateGridInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BivariateGridInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BivariateGridInterpolator, t_BivariateGridInterpolator, BivariateGridInterpolator);

        void t_BivariateGridInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BivariateGridInterpolator), &PY_TYPE_DEF(BivariateGridInterpolator), module, "BivariateGridInterpolator", 0);
        }

        void t_BivariateGridInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "class_", make_descriptor(BivariateGridInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "wrapfn_", make_descriptor(t_BivariateGridInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BivariateGridInterpolator::initializeClass, 1)))
            return NULL;
          return t_BivariateGridInterpolator::wrap_Object(BivariateGridInterpolator(((t_BivariateGridInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BivariateGridInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BivariateGridInterpolator_interpolate(t_BivariateGridInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::BivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::t_BivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Tuple::class$ = NULL;
      jmethodID *Tuple::mids$ = NULL;
      bool Tuple::live$ = false;

      jclass Tuple::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Tuple");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_abs_f8275f13088d6938] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_acos_f8275f13088d6938] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_acosh_f8275f13088d6938] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_add_f766ee0a22b1c75a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_add_937156c8cf549acb] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_asin_f8275f13088d6938] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_asinh_f8275f13088d6938] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_atan_f8275f13088d6938] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_atan2_f766ee0a22b1c75a] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_atanh_f8275f13088d6938] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_cbrt_f8275f13088d6938] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_ceil_f8275f13088d6938] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_copySign_f766ee0a22b1c75a] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_copySign_937156c8cf549acb] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_cos_f8275f13088d6938] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_cosh_f8275f13088d6938] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_divide_f766ee0a22b1c75a] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_divide_937156c8cf549acb] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_f8275f13088d6938] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_expm1_f8275f13088d6938] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_floor_f8275f13088d6938] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_getComponent_ce4c02d583456bc9] = env->getMethodID(cls, "getComponent", "(I)D");
          mids$[mid_getComponents_be783177b060994b] = env->getMethodID(cls, "getComponents", "()[D");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_f8275f13088d6938] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_f766ee0a22b1c75a] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_77f3dafb24473b75] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_dd5569bff5aa290d] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/Tuple;[Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_fb42f60df9fcf6db] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_fafe7097b5e514e3] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_1b9bb08e2f38f24c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_bed226eeb368e85b] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_b11bb8d0a150cbeb] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_1c047ae5b7314367] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_log_f8275f13088d6938] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_log10_f8275f13088d6938] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_log1p_f8275f13088d6938] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_f766ee0a22b1c75a] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_937156c8cf549acb] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_1b26dd71fff197ee] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_negate_f8275f13088d6938] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_newInstance_937156c8cf549acb] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_f766ee0a22b1c75a] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_937156c8cf549acb] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_1b26dd71fff197ee] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_reciprocal_f8275f13088d6938] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_remainder_f766ee0a22b1c75a] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_remainder_937156c8cf549acb] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_rint_f8275f13088d6938] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_rootN_1b26dd71fff197ee] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_scalb_1b26dd71fff197ee] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_sign_f8275f13088d6938] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sin_f8275f13088d6938] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_f8275f13088d6938] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_f8275f13088d6938] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_subtract_f766ee0a22b1c75a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_subtract_937156c8cf549acb] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_tan_f8275f13088d6938] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_tanh_f8275f13088d6938] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_toDegrees_f8275f13088d6938] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_toRadians_f8275f13088d6938] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_ulp_f8275f13088d6938] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/Tuple;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Tuple::Tuple(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

      Tuple Tuple::abs() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_abs_f8275f13088d6938]));
      }

      Tuple Tuple::acos() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_acos_f8275f13088d6938]));
      }

      Tuple Tuple::acosh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_acosh_f8275f13088d6938]));
      }

      Tuple Tuple::add(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_add_f766ee0a22b1c75a], a0.this$));
      }

      Tuple Tuple::add(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_add_937156c8cf549acb], a0));
      }

      Tuple Tuple::asin() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_asin_f8275f13088d6938]));
      }

      Tuple Tuple::asinh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_asinh_f8275f13088d6938]));
      }

      Tuple Tuple::atan() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atan_f8275f13088d6938]));
      }

      Tuple Tuple::atan2(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atan2_f766ee0a22b1c75a], a0.this$));
      }

      Tuple Tuple::atanh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atanh_f8275f13088d6938]));
      }

      Tuple Tuple::cbrt() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cbrt_f8275f13088d6938]));
      }

      Tuple Tuple::ceil() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_ceil_f8275f13088d6938]));
      }

      Tuple Tuple::copySign(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_copySign_f766ee0a22b1c75a], a0.this$));
      }

      Tuple Tuple::copySign(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_copySign_937156c8cf549acb], a0));
      }

      Tuple Tuple::cos() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cos_f8275f13088d6938]));
      }

      Tuple Tuple::cosh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cosh_f8275f13088d6938]));
      }

      Tuple Tuple::divide(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_divide_f766ee0a22b1c75a], a0.this$));
      }

      Tuple Tuple::divide(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_divide_937156c8cf549acb], a0));
      }

      jboolean Tuple::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      Tuple Tuple::exp() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_exp_f8275f13088d6938]));
      }

      Tuple Tuple::expm1() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_expm1_f8275f13088d6938]));
      }

      Tuple Tuple::floor() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_floor_f8275f13088d6938]));
      }

      jdouble Tuple::getComponent(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getComponent_ce4c02d583456bc9], a0);
      }

      JArray< jdouble > Tuple::getComponents() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getComponents_be783177b060994b]));
      }

      jint Tuple::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::Field Tuple::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      Tuple Tuple::getPi() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_getPi_f8275f13088d6938]));
      }

      jdouble Tuple::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
      }

      jint Tuple::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      Tuple Tuple::hypot(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_hypot_f766ee0a22b1c75a], a0.this$));
      }

      Tuple Tuple::linearCombination(const JArray< jdouble > & a0, const JArray< Tuple > & a1) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_77f3dafb24473b75], a0.this$, a1.this$));
      }

      Tuple Tuple::linearCombination(const JArray< Tuple > & a0, const JArray< Tuple > & a1) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_dd5569bff5aa290d], a0.this$, a1.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_fb42f60df9fcf6db], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_fafe7097b5e514e3], a0, a1.this$, a2, a3.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3, const Tuple & a4, const Tuple & a5) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_1b9bb08e2f38f24c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3, jdouble a4, const Tuple & a5) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_bed226eeb368e85b], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3, const Tuple & a4, const Tuple & a5, const Tuple & a6, const Tuple & a7) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_b11bb8d0a150cbeb], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3, jdouble a4, const Tuple & a5, jdouble a6, const Tuple & a7) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_1c047ae5b7314367], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Tuple Tuple::log() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log_f8275f13088d6938]));
      }

      Tuple Tuple::log10() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log10_f8275f13088d6938]));
      }

      Tuple Tuple::log1p() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log1p_f8275f13088d6938]));
      }

      Tuple Tuple::multiply(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_f766ee0a22b1c75a], a0.this$));
      }

      Tuple Tuple::multiply(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_937156c8cf549acb], a0));
      }

      Tuple Tuple::multiply(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_1b26dd71fff197ee], a0));
      }

      Tuple Tuple::negate() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_negate_f8275f13088d6938]));
      }

      Tuple Tuple::newInstance(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_newInstance_937156c8cf549acb], a0));
      }

      Tuple Tuple::pow(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_f766ee0a22b1c75a], a0.this$));
      }

      Tuple Tuple::pow(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_937156c8cf549acb], a0));
      }

      Tuple Tuple::pow(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_1b26dd71fff197ee], a0));
      }

      Tuple Tuple::reciprocal() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_reciprocal_f8275f13088d6938]));
      }

      Tuple Tuple::remainder(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_remainder_f766ee0a22b1c75a], a0.this$));
      }

      Tuple Tuple::remainder(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_remainder_937156c8cf549acb], a0));
      }

      Tuple Tuple::rint() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_rint_f8275f13088d6938]));
      }

      Tuple Tuple::rootN(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_rootN_1b26dd71fff197ee], a0));
      }

      Tuple Tuple::scalb(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_scalb_1b26dd71fff197ee], a0));
      }

      Tuple Tuple::sign() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sign_f8275f13088d6938]));
      }

      Tuple Tuple::sin() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sin_f8275f13088d6938]));
      }

      ::org::hipparchus::util::FieldSinCos Tuple::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
      }

      Tuple Tuple::sinh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sinh_f8275f13088d6938]));
      }

      ::org::hipparchus::util::FieldSinhCosh Tuple::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
      }

      Tuple Tuple::sqrt() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sqrt_f8275f13088d6938]));
      }

      Tuple Tuple::subtract(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_subtract_f766ee0a22b1c75a], a0.this$));
      }

      Tuple Tuple::subtract(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_subtract_937156c8cf549acb], a0));
      }

      Tuple Tuple::tan() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_tan_f8275f13088d6938]));
      }

      Tuple Tuple::tanh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_tanh_f8275f13088d6938]));
      }

      Tuple Tuple::toDegrees() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_toDegrees_f8275f13088d6938]));
      }

      Tuple Tuple::toRadians() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_toRadians_f8275f13088d6938]));
      }

      Tuple Tuple::ulp() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_ulp_f8275f13088d6938]));
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
      static PyObject *t_Tuple_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Tuple_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Tuple_init_(t_Tuple *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Tuple_abs(t_Tuple *self);
      static PyObject *t_Tuple_acos(t_Tuple *self);
      static PyObject *t_Tuple_acosh(t_Tuple *self);
      static PyObject *t_Tuple_add(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_asin(t_Tuple *self);
      static PyObject *t_Tuple_asinh(t_Tuple *self);
      static PyObject *t_Tuple_atan(t_Tuple *self);
      static PyObject *t_Tuple_atan2(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_atanh(t_Tuple *self);
      static PyObject *t_Tuple_cbrt(t_Tuple *self);
      static PyObject *t_Tuple_ceil(t_Tuple *self);
      static PyObject *t_Tuple_copySign(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_cos(t_Tuple *self);
      static PyObject *t_Tuple_cosh(t_Tuple *self);
      static PyObject *t_Tuple_divide(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_equals(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_exp(t_Tuple *self);
      static PyObject *t_Tuple_expm1(t_Tuple *self);
      static PyObject *t_Tuple_floor(t_Tuple *self);
      static PyObject *t_Tuple_getComponent(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_getComponents(t_Tuple *self);
      static PyObject *t_Tuple_getDimension(t_Tuple *self);
      static PyObject *t_Tuple_getField(t_Tuple *self);
      static PyObject *t_Tuple_getPi(t_Tuple *self);
      static PyObject *t_Tuple_getReal(t_Tuple *self);
      static PyObject *t_Tuple_hashCode(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_hypot(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_linearCombination(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_log(t_Tuple *self);
      static PyObject *t_Tuple_log10(t_Tuple *self);
      static PyObject *t_Tuple_log1p(t_Tuple *self);
      static PyObject *t_Tuple_multiply(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_negate(t_Tuple *self);
      static PyObject *t_Tuple_newInstance(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_pow(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_reciprocal(t_Tuple *self);
      static PyObject *t_Tuple_remainder(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_rint(t_Tuple *self);
      static PyObject *t_Tuple_rootN(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_scalb(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_sign(t_Tuple *self);
      static PyObject *t_Tuple_sin(t_Tuple *self);
      static PyObject *t_Tuple_sinCos(t_Tuple *self);
      static PyObject *t_Tuple_sinh(t_Tuple *self);
      static PyObject *t_Tuple_sinhCosh(t_Tuple *self);
      static PyObject *t_Tuple_sqrt(t_Tuple *self);
      static PyObject *t_Tuple_subtract(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_tan(t_Tuple *self);
      static PyObject *t_Tuple_tanh(t_Tuple *self);
      static PyObject *t_Tuple_toDegrees(t_Tuple *self);
      static PyObject *t_Tuple_toRadians(t_Tuple *self);
      static PyObject *t_Tuple_ulp(t_Tuple *self);
      static PyObject *t_Tuple_get__components(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__dimension(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__field(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__pi(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__real(t_Tuple *self, void *data);
      static PyGetSetDef t_Tuple__fields_[] = {
        DECLARE_GET_FIELD(t_Tuple, components),
        DECLARE_GET_FIELD(t_Tuple, dimension),
        DECLARE_GET_FIELD(t_Tuple, field),
        DECLARE_GET_FIELD(t_Tuple, pi),
        DECLARE_GET_FIELD(t_Tuple, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Tuple__methods_[] = {
        DECLARE_METHOD(t_Tuple, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Tuple, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Tuple, abs, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, acos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, add, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, asin, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, atan, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, atan2, METH_O),
        DECLARE_METHOD(t_Tuple, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, cos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, divide, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, equals, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, exp, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, floor, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getComponent, METH_O),
        DECLARE_METHOD(t_Tuple, getComponents, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getField, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, hypot, METH_O),
        DECLARE_METHOD(t_Tuple, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, log, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, log10, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, negate, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, newInstance, METH_O),
        DECLARE_METHOD(t_Tuple, pow, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, rint, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, rootN, METH_O),
        DECLARE_METHOD(t_Tuple, scalb, METH_O),
        DECLARE_METHOD(t_Tuple, sign, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sin, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, tan, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Tuple)[] = {
        { Py_tp_methods, t_Tuple__methods_ },
        { Py_tp_init, (void *) t_Tuple_init_ },
        { Py_tp_getset, t_Tuple__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Tuple)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Tuple, t_Tuple, Tuple);

      void t_Tuple::install(PyObject *module)
      {
        installType(&PY_TYPE(Tuple), &PY_TYPE_DEF(Tuple), module, "Tuple", 0);
      }

      void t_Tuple::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "class_", make_descriptor(Tuple::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "wrapfn_", make_descriptor(t_Tuple::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Tuple_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Tuple::initializeClass, 1)))
          return NULL;
        return t_Tuple::wrap_Object(Tuple(((t_Tuple *) arg)->object.this$));
      }
      static PyObject *t_Tuple_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Tuple::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Tuple_init_(t_Tuple *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        Tuple object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = Tuple(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Tuple_abs(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_acos(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_acosh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_add(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Tuple_asin(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_asinh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_atan(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_atan2(t_Tuple *self, PyObject *arg)
      {
        Tuple a0((jobject) NULL);
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "k", Tuple::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Tuple_atanh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_cbrt(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_ceil(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_copySign(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Tuple_cos(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_cosh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_divide(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Tuple_equals(t_Tuple *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Tuple), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Tuple_exp(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_expm1(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_floor(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_getComponent(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getComponent(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getComponent", arg);
        return NULL;
      }

      static PyObject *t_Tuple_getComponents(t_Tuple *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getComponents());
        return result.wrap();
      }

      static PyObject *t_Tuple_getDimension(t_Tuple *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Tuple_getField(t_Tuple *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_getPi(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_getReal(t_Tuple *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Tuple_hashCode(t_Tuple *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Tuple), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Tuple_hypot(t_Tuple *self, PyObject *arg)
      {
        Tuple a0((jobject) NULL);
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "k", Tuple::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Tuple_linearCombination(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Tuple > a1((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Tuple::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            JArray< Tuple > a0((jobject) NULL);
            JArray< Tuple > a1((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Tuple::initializeClass, Tuple::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple a4((jobject) NULL);
            Tuple a5((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            jdouble a4;
            Tuple a5((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple a4((jobject) NULL);
            Tuple a5((jobject) NULL);
            Tuple a6((jobject) NULL);
            Tuple a7((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            jdouble a4;
            Tuple a5((jobject) NULL);
            jdouble a6;
            Tuple a7((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Tuple_log(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_log10(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_log1p(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_multiply(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jint a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Tuple_negate(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_newInstance(t_Tuple *self, PyObject *arg)
      {
        jdouble a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Tuple_pow(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jint a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Tuple_reciprocal(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_remainder(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Tuple_rint(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_rootN(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Tuple_scalb(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Tuple_sign(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sin(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sinCos(t_Tuple *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_sinh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sinhCosh(t_Tuple *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_sqrt(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_subtract(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Tuple_tan(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_tanh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_toDegrees(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_toRadians(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_ulp(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_get__components(t_Tuple *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getComponents());
        return value.wrap();
      }

      static PyObject *t_Tuple_get__dimension(t_Tuple *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Tuple_get__field(t_Tuple *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_Tuple_get__pi(t_Tuple *self, void *data)
      {
        Tuple value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Tuple::wrap_Object(value);
      }

      static PyObject *t_Tuple_get__real(t_Tuple *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ObservableSatellite::class$ = NULL;
        jmethodID *ObservableSatellite::mids$ = NULL;
        bool ObservableSatellite::live$ = false;
        ::java::lang::String *ObservableSatellite::CLOCK_DRIFT_PREFIX = NULL;
        ::java::lang::String *ObservableSatellite::CLOCK_OFFSET_PREFIX = NULL;

        jclass ObservableSatellite::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ObservableSatellite");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getClockDriftDriver_7daccb22665e511b] = env->getMethodID(cls, "getClockDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getClockOffsetDriver_7daccb22665e511b] = env->getMethodID(cls, "getClockOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPropagatorIndex_d6ab429752e7c267] = env->getMethodID(cls, "getPropagatorIndex", "()I");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CLOCK_DRIFT_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_DRIFT_PREFIX", "Ljava/lang/String;"));
            CLOCK_OFFSET_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_OFFSET_PREFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ObservableSatellite::ObservableSatellite(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

        jboolean ObservableSatellite::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        ::org::orekit::utils::ParameterDriver ObservableSatellite::getClockDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockDriftDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver ObservableSatellite::getClockOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockOffsetDriver_7daccb22665e511b]));
        }

        jint ObservableSatellite::getPropagatorIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getPropagatorIndex_d6ab429752e7c267]);
        }

        jint ObservableSatellite::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
        static PyObject *t_ObservableSatellite_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservableSatellite_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ObservableSatellite_init_(t_ObservableSatellite *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ObservableSatellite_equals(t_ObservableSatellite *self, PyObject *args);
        static PyObject *t_ObservableSatellite_getClockDriftDriver(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_getClockOffsetDriver(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_getPropagatorIndex(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_hashCode(t_ObservableSatellite *self, PyObject *args);
        static PyObject *t_ObservableSatellite_get__clockDriftDriver(t_ObservableSatellite *self, void *data);
        static PyObject *t_ObservableSatellite_get__clockOffsetDriver(t_ObservableSatellite *self, void *data);
        static PyObject *t_ObservableSatellite_get__propagatorIndex(t_ObservableSatellite *self, void *data);
        static PyGetSetDef t_ObservableSatellite__fields_[] = {
          DECLARE_GET_FIELD(t_ObservableSatellite, clockDriftDriver),
          DECLARE_GET_FIELD(t_ObservableSatellite, clockOffsetDriver),
          DECLARE_GET_FIELD(t_ObservableSatellite, propagatorIndex),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ObservableSatellite__methods_[] = {
          DECLARE_METHOD(t_ObservableSatellite, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservableSatellite, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservableSatellite, equals, METH_VARARGS),
          DECLARE_METHOD(t_ObservableSatellite, getClockDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, getClockOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, getPropagatorIndex, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ObservableSatellite)[] = {
          { Py_tp_methods, t_ObservableSatellite__methods_ },
          { Py_tp_init, (void *) t_ObservableSatellite_init_ },
          { Py_tp_getset, t_ObservableSatellite__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ObservableSatellite)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ObservableSatellite, t_ObservableSatellite, ObservableSatellite);

        void t_ObservableSatellite::install(PyObject *module)
        {
          installType(&PY_TYPE(ObservableSatellite), &PY_TYPE_DEF(ObservableSatellite), module, "ObservableSatellite", 0);
        }

        void t_ObservableSatellite::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "class_", make_descriptor(ObservableSatellite::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "wrapfn_", make_descriptor(t_ObservableSatellite::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "boxfn_", make_descriptor(boxObject));
          env->getClass(ObservableSatellite::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "CLOCK_DRIFT_PREFIX", make_descriptor(j2p(*ObservableSatellite::CLOCK_DRIFT_PREFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "CLOCK_OFFSET_PREFIX", make_descriptor(j2p(*ObservableSatellite::CLOCK_OFFSET_PREFIX)));
        }

        static PyObject *t_ObservableSatellite_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ObservableSatellite::initializeClass, 1)))
            return NULL;
          return t_ObservableSatellite::wrap_Object(ObservableSatellite(((t_ObservableSatellite *) arg)->object.this$));
        }
        static PyObject *t_ObservableSatellite_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ObservableSatellite::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ObservableSatellite_init_(t_ObservableSatellite *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          ObservableSatellite object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ObservableSatellite(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ObservableSatellite_equals(t_ObservableSatellite *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ObservableSatellite), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_ObservableSatellite_getClockDriftDriver(t_ObservableSatellite *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ObservableSatellite_getClockOffsetDriver(t_ObservableSatellite *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ObservableSatellite_getPropagatorIndex(t_ObservableSatellite *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPropagatorIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ObservableSatellite_hashCode(t_ObservableSatellite *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ObservableSatellite), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_ObservableSatellite_get__clockDriftDriver(t_ObservableSatellite *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ObservableSatellite_get__clockOffsetDriver(t_ObservableSatellite *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ObservableSatellite_get__propagatorIndex(t_ObservableSatellite *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPropagatorIndex());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonEOPHistoryLoader.h"
#include "java/lang/Throwable.h"
#include "java/util/SortedSet.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonEOPHistoryLoader::class$ = NULL;
      jmethodID *PythonEOPHistoryLoader::mids$ = NULL;
      bool PythonEOPHistoryLoader::live$ = false;

      jclass PythonEOPHistoryLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonEOPHistoryLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_fillHistory_09d2fc89df23cd1a] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEOPHistoryLoader::PythonEOPHistoryLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonEOPHistoryLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonEOPHistoryLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonEOPHistoryLoader::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonEOPHistoryLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEOPHistoryLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEOPHistoryLoader_init_(t_PythonEOPHistoryLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEOPHistoryLoader_finalize(t_PythonEOPHistoryLoader *self);
      static PyObject *t_PythonEOPHistoryLoader_pythonExtension(t_PythonEOPHistoryLoader *self, PyObject *args);
      static void JNICALL t_PythonEOPHistoryLoader_fillHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonEOPHistoryLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEOPHistoryLoader_get__self(t_PythonEOPHistoryLoader *self, void *data);
      static PyGetSetDef t_PythonEOPHistoryLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEOPHistoryLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEOPHistoryLoader__methods_[] = {
        DECLARE_METHOD(t_PythonEOPHistoryLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEOPHistoryLoader)[] = {
        { Py_tp_methods, t_PythonEOPHistoryLoader__methods_ },
        { Py_tp_init, (void *) t_PythonEOPHistoryLoader_init_ },
        { Py_tp_getset, t_PythonEOPHistoryLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEOPHistoryLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEOPHistoryLoader, t_PythonEOPHistoryLoader, PythonEOPHistoryLoader);

      void t_PythonEOPHistoryLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEOPHistoryLoader), &PY_TYPE_DEF(PythonEOPHistoryLoader), module, "PythonEOPHistoryLoader", 1);
      }

      void t_PythonEOPHistoryLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "class_", make_descriptor(PythonEOPHistoryLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "wrapfn_", make_descriptor(t_PythonEOPHistoryLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEOPHistoryLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V", (void *) t_PythonEOPHistoryLoader_fillHistory0 },
          { "pythonDecRef", "()V", (void *) t_PythonEOPHistoryLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonEOPHistoryLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEOPHistoryLoader::initializeClass, 1)))
          return NULL;
        return t_PythonEOPHistoryLoader::wrap_Object(PythonEOPHistoryLoader(((t_PythonEOPHistoryLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonEOPHistoryLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEOPHistoryLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEOPHistoryLoader_init_(t_PythonEOPHistoryLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonEOPHistoryLoader object((jobject) NULL);

        INT_CALL(object = PythonEOPHistoryLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEOPHistoryLoader_finalize(t_PythonEOPHistoryLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEOPHistoryLoader_pythonExtension(t_PythonEOPHistoryLoader *self, PyObject *args)
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

      static void JNICALL t_PythonEOPHistoryLoader_fillHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(::org::orekit::utils::IERSConventions$NutationCorrectionConverter(a0));
        PyObject *o1 = ::java::util::t_SortedSet::wrap_Object(::java::util::SortedSet(a1));
        PyObject *result = PyObject_CallMethod(obj, "fillHistory", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonEOPHistoryLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEOPHistoryLoader_get__self(t_PythonEOPHistoryLoader *self, void *data)
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
#include "org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldAngularCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldAngularCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldAngularCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_8d5aeab05ce8f81e] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_b5c437acda06e416] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_getFilter_410860c8cd87dc25] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_interpolate_2afe64c66daa676f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::AngularDerivativesFilter & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8d5aeab05ce8f81e, a0, a1.this$)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::AngularDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b5c437acda06e416, a0, a1, a2.this$)) {}

      ::org::orekit::utils::AngularDerivativesFilter TimeStampedFieldAngularCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_410860c8cd87dc25]));
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
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldAngularCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldAngularCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, TimeStampedFieldAngularCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedFieldAngularCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldAngularCoordinatesHermiteInterpolator), module, "TimeStampedFieldAngularCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(TimeStampedFieldAngularCoordinatesHermiteInterpolator(((t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::AngularDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0, a1, a2));
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

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *RateElementsType::class$ = NULL;
              jmethodID *RateElementsType::mids$ = NULL;
              bool RateElementsType::live$ = false;
              RateElementsType *RateElementsType::ANGVEL = NULL;
              RateElementsType *RateElementsType::EULER_RATE = NULL;
              RateElementsType *RateElementsType::GYRO_BIAS = NULL;
              RateElementsType *RateElementsType::NONE = NULL;
              RateElementsType *RateElementsType::Q_DOT = NULL;

              jclass RateElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/RateElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_d751c1a57012b438] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toAngular_a3c24cbe4608532f] = env->getMethodID(cls, "toAngular", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/Rotation;I[D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                  mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_98c73423c4d76bfa] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_values_420afbde14a55201] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL = new RateElementsType(env->getStaticObjectField(cls, "ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  EULER_RATE = new RateElementsType(env->getStaticObjectField(cls, "EULER_RATE", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  GYRO_BIAS = new RateElementsType(env->getStaticObjectField(cls, "GYRO_BIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  NONE = new RateElementsType(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  Q_DOT = new RateElementsType(env->getStaticObjectField(cls, "Q_DOT", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List RateElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_d751c1a57012b438]));
              }

              ::org::orekit::utils::TimeStampedAngularCoordinates RateElementsType::toAngular(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, jint a3, const JArray< jdouble > & a4) const
              {
                return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngular_a3c24cbe4608532f], a0.this$, a1.this$, a2.this$, a3, a4.this$));
              }

              ::java::lang::String RateElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
              }

              RateElementsType RateElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return RateElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_98c73423c4d76bfa], a0.this$));
              }

              JArray< RateElementsType > RateElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< RateElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_420afbde14a55201]));
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
              static PyObject *t_RateElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RateElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RateElementsType_of_(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_getUnits(t_RateElementsType *self);
              static PyObject *t_RateElementsType_toAngular(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_toString(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_RateElementsType_values(PyTypeObject *type);
              static PyObject *t_RateElementsType_get__units(t_RateElementsType *self, void *data);
              static PyObject *t_RateElementsType_get__parameters_(t_RateElementsType *self, void *data);
              static PyGetSetDef t_RateElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_RateElementsType, units),
                DECLARE_GET_FIELD(t_RateElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RateElementsType__methods_[] = {
                DECLARE_METHOD(t_RateElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_RateElementsType, toAngular, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RateElementsType)[] = {
                { Py_tp_methods, t_RateElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_RateElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RateElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(RateElementsType, t_RateElementsType, RateElementsType);
              PyObject *t_RateElementsType::wrap_Object(const RateElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RateElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RateElementsType *self = (t_RateElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_RateElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RateElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RateElementsType *self = (t_RateElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_RateElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(RateElementsType), &PY_TYPE_DEF(RateElementsType), module, "RateElementsType", 0);
              }

              void t_RateElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "class_", make_descriptor(RateElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "wrapfn_", make_descriptor(t_RateElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(RateElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "ANGVEL", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "EULER_RATE", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::EULER_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "GYRO_BIAS", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::GYRO_BIAS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "NONE", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::NONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "Q_DOT", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::Q_DOT)));
              }

              static PyObject *t_RateElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RateElementsType::initializeClass, 1)))
                  return NULL;
                return t_RateElementsType::wrap_Object(RateElementsType(((t_RateElementsType *) arg)->object.this$));
              }
              static PyObject *t_RateElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RateElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RateElementsType_of_(t_RateElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_RateElementsType_getUnits(t_RateElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_RateElementsType_toAngular(t_RateElementsType *self, PyObject *args)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
                jint a3;
                JArray< jdouble > a4((jobject) NULL);
                ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

                if (!parseArgs(args, "kKkI[D", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = self->object.toAngular(a0, a1, a2, a3, a4));
                  return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toAngular", args);
                return NULL;
              }

              static PyObject *t_RateElementsType_toString(t_RateElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(RateElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_RateElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                RateElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::valueOf(a0));
                  return t_RateElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_RateElementsType_values(PyTypeObject *type)
              {
                JArray< RateElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_RateElementsType::wrap_jobject);
              }
              static PyObject *t_RateElementsType_get__parameters_(t_RateElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RateElementsType_get__units(t_RateElementsType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
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
#include "org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractLimitedVariableStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractLimitedVariableStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractLimitedVariableStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_of_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractLimitedVariableStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractLimitedVariableStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractLimitedVariableStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractLimitedVariableStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractLimitedVariableStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractLimitedVariableStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder, t_AbstractLimitedVariableStepFieldIntegratorBuilder, AbstractLimitedVariableStepFieldIntegratorBuilder);
        PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(const AbstractLimitedVariableStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractLimitedVariableStepFieldIntegratorBuilder *self = (t_AbstractLimitedVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractLimitedVariableStepFieldIntegratorBuilder *self = (t_AbstractLimitedVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractLimitedVariableStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractLimitedVariableStepFieldIntegratorBuilder), module, "AbstractLimitedVariableStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractLimitedVariableStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(AbstractLimitedVariableStepFieldIntegratorBuilder(((t_AbstractLimitedVariableStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_of_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudesSequence.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudesSequence::class$ = NULL;
      jmethodID *AttitudesSequence::mids$ = NULL;
      bool AttitudesSequence::live$ = false;

      jclass AttitudesSequence::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudesSequence");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addSwitchingCondition_db5ac9dd692378ee] = env->getMethodID(cls, "addSwitchingCondition", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/events/EventDetector;ZZDLorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/attitudes/AttitudesSequence$SwitchHandler;)V");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_267252ddff45220c] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_494718838b66cf03] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_registerSwitchEvents_f334dbd717e289d2] = env->getMethodID(cls, "registerSwitchEvents", "(Lorg/orekit/propagation/Propagator;)V");
          mids$[mid_registerSwitchEvents_97ccbc8d3d017572] = env->getMethodID(cls, "registerSwitchEvents", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/FieldPropagator;)V");
          mids$[mid_resetActiveProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "resetActiveProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AttitudesSequence::AttitudesSequence() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void AttitudesSequence::addSwitchingCondition(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::propagation::events::EventDetector & a2, jboolean a3, jboolean a4, jdouble a5, const ::org::orekit::utils::AngularDerivativesFilter & a6, const ::org::orekit::attitudes::AttitudesSequence$SwitchHandler & a7) const
      {
        env->callVoidMethod(this$, mids$[mid_addSwitchingCondition_db5ac9dd692378ee], a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$, a7.this$);
      }

      ::org::orekit::attitudes::FieldAttitude AttitudesSequence::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudesSequence::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudesSequence::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_267252ddff45220c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AttitudesSequence::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_494718838b66cf03], a0.this$, a1.this$, a2.this$));
      }

      void AttitudesSequence::registerSwitchEvents(const ::org::orekit::propagation::Propagator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_registerSwitchEvents_f334dbd717e289d2], a0.this$);
      }

      void AttitudesSequence::registerSwitchEvents(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::FieldPropagator & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_registerSwitchEvents_97ccbc8d3d017572], a0.this$, a1.this$);
      }

      void AttitudesSequence::resetActiveProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetActiveProvider_fddd0a7d9f33bafa], a0.this$);
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
      static PyObject *t_AttitudesSequence_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AttitudesSequence_init_(t_AttitudesSequence *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AttitudesSequence_addSwitchingCondition(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_getAttitude(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_getAttitudeRotation(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_registerSwitchEvents(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_resetActiveProvider(t_AttitudesSequence *self, PyObject *arg);

      static PyMethodDef t_AttitudesSequence__methods_[] = {
        DECLARE_METHOD(t_AttitudesSequence, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence, addSwitchingCondition, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, registerSwitchEvents, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, resetActiveProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudesSequence)[] = {
        { Py_tp_methods, t_AttitudesSequence__methods_ },
        { Py_tp_init, (void *) t_AttitudesSequence_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudesSequence)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudesSequence, t_AttitudesSequence, AttitudesSequence);

      void t_AttitudesSequence::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudesSequence), &PY_TYPE_DEF(AttitudesSequence), module, "AttitudesSequence", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "SwitchHandler", make_descriptor(&PY_TYPE_DEF(AttitudesSequence$SwitchHandler)));
      }

      void t_AttitudesSequence::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "class_", make_descriptor(AttitudesSequence::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "wrapfn_", make_descriptor(t_AttitudesSequence::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudesSequence_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudesSequence::initializeClass, 1)))
          return NULL;
        return t_AttitudesSequence::wrap_Object(AttitudesSequence(((t_AttitudesSequence *) arg)->object.this$));
      }
      static PyObject *t_AttitudesSequence_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudesSequence::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AttitudesSequence_init_(t_AttitudesSequence *self, PyObject *args, PyObject *kwds)
      {
        AttitudesSequence object((jobject) NULL);

        INT_CALL(object = AttitudesSequence());
        self->object = object;

        return 0;
      }

      static PyObject *t_AttitudesSequence_addSwitchingCondition(t_AttitudesSequence *self, PyObject *args)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
        ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);
        jboolean a3;
        jboolean a4;
        jdouble a5;
        ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::orekit::attitudes::AttitudesSequence$SwitchHandler a7((jobject) NULL);

        if (!parseArgs(args, "kkkZZDKk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::attitudes::AttitudesSequence$SwitchHandler::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a7))
        {
          OBJ_CALL(self->object.addSwitchingCondition(a0, a1, a2, a3, a4, a5, a6, a7));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSwitchingCondition", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_getAttitude(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_getAttitudeRotation(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_registerSwitchEvents(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::Propagator a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.registerSwitchEvents(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldPropagator a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::FieldPropagator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldPropagator::parameters_))
            {
              OBJ_CALL(self->object.registerSwitchEvents(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "registerSwitchEvents", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_resetActiveProvider(t_AttitudesSequence *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetActiveProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetActiveProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmParser::class$ = NULL;
          jmethodID *NdmParser::mids$ = NULL;
          bool NdmParser::live$ = false;

          jclass NdmParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addComment_df4c65b2aede5c41] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)Z");
              mids$[mid_build_050f767ec488cf7d] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/Ndm;");
              mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
              mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean NdmParser::addComment(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addComment_df4c65b2aede5c41], a0.this$);
          }

          ::org::orekit::files::ccsds::ndm::Ndm NdmParser::build() const
          {
            return ::org::orekit::files::ccsds::ndm::Ndm(env->callObjectMethod(this$, mids$[mid_build_050f767ec488cf7d]));
          }

          ::java::util::Map NdmParser::getSpecialXmlElementsBuilders() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d]));
          }

          void NdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
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
          static PyObject *t_NdmParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmParser_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmParser_of_(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_addComment(t_NdmParser *self, PyObject *arg);
          static PyObject *t_NdmParser_build(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_getSpecialXmlElementsBuilders(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_reset(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_get__specialXmlElementsBuilders(t_NdmParser *self, void *data);
          static PyObject *t_NdmParser_get__parameters_(t_NdmParser *self, void *data);
          static PyGetSetDef t_NdmParser__fields_[] = {
            DECLARE_GET_FIELD(t_NdmParser, specialXmlElementsBuilders),
            DECLARE_GET_FIELD(t_NdmParser, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NdmParser__methods_[] = {
            DECLARE_METHOD(t_NdmParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmParser, of_, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, addComment, METH_O),
            DECLARE_METHOD(t_NdmParser, build, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, reset, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmParser)[] = {
            { Py_tp_methods, t_NdmParser__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NdmParser__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmParser)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
            NULL
          };

          DEFINE_TYPE(NdmParser, t_NdmParser, NdmParser);
          PyObject *t_NdmParser::wrap_Object(const NdmParser& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NdmParser::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmParser *self = (t_NdmParser *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NdmParser::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmParser *self = (t_NdmParser *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NdmParser::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmParser), &PY_TYPE_DEF(NdmParser), module, "NdmParser", 0);
          }

          void t_NdmParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "class_", make_descriptor(NdmParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "wrapfn_", make_descriptor(t_NdmParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmParser::initializeClass, 1)))
              return NULL;
            return t_NdmParser::wrap_Object(NdmParser(((t_NdmParser *) arg)->object.this$));
          }
          static PyObject *t_NdmParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NdmParser_of_(t_NdmParser *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NdmParser_addComment(t_NdmParser *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.addComment(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_NdmParser_build(t_NdmParser *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::ndm::Ndm result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.build());
              return ::org::orekit::files::ccsds::ndm::t_Ndm::wrap_Object(result);
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "build", args, 2);
          }

          static PyObject *t_NdmParser_getSpecialXmlElementsBuilders(t_NdmParser *self, PyObject *args)
          {
            ::java::util::Map result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
          }

          static PyObject *t_NdmParser_reset(t_NdmParser *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
            {
              OBJ_CALL(self->object.reset(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "reset", args, 2);
          }
          static PyObject *t_NdmParser_get__parameters_(t_NdmParser *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_NdmParser_get__specialXmlElementsBuilders(t_NdmParser *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/PythonOdmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *PythonOdmParser::class$ = NULL;
            jmethodID *PythonOdmParser::mids$ = NULL;
            bool PythonOdmParser::live$ = false;

            jclass PythonOdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/PythonOdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_0508018a256edbd9] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getFileFormat_49975b0867f6c97c] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getHeader_662984e7008bcc88] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                mids$[mid_getMuSet_9981f74b2d109da6] = env->getMethodID(cls, "getMuSet", "()D");
                mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");
                mids$[mid_setMuCreated_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMuCreated", "(D)V");
                mids$[mid_setMuParsed_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMuParsed", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonOdmParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            ::org::orekit::files::ccsds::utils::FileFormat PythonOdmParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_49975b0867f6c97c]));
            }

            jdouble PythonOdmParser::getMuSet() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuSet_9981f74b2d109da6]);
            }

            jlong PythonOdmParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonOdmParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
            }

            void PythonOdmParser::setMuCreated(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMuCreated_1ad26e8c8c0cd65b], a0);
            }

            void PythonOdmParser::setMuParsed(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMuParsed_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_PythonOdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonOdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonOdmParser_of_(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_finalize(t_PythonOdmParser *self);
            static PyObject *t_PythonOdmParser_getFileFormat(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_getMuSet(t_PythonOdmParser *self);
            static PyObject *t_PythonOdmParser_pythonExtension(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_setMuCreated(t_PythonOdmParser *self, PyObject *arg);
            static PyObject *t_PythonOdmParser_setMuParsed(t_PythonOdmParser *self, PyObject *arg);
            static jobject JNICALL t_PythonOdmParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonOdmParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonOdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonOdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonOdmParser_get__self(t_PythonOdmParser *self, void *data);
            static PyObject *t_PythonOdmParser_get__fileFormat(t_PythonOdmParser *self, void *data);
            static int t_PythonOdmParser_set__muCreated(t_PythonOdmParser *self, PyObject *arg, void *data);
            static int t_PythonOdmParser_set__muParsed(t_PythonOdmParser *self, PyObject *arg, void *data);
            static PyObject *t_PythonOdmParser_get__muSet(t_PythonOdmParser *self, void *data);
            static PyObject *t_PythonOdmParser_get__parameters_(t_PythonOdmParser *self, void *data);
            static PyGetSetDef t_PythonOdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonOdmParser, fileFormat),
              DECLARE_SET_FIELD(t_PythonOdmParser, muCreated),
              DECLARE_SET_FIELD(t_PythonOdmParser, muParsed),
              DECLARE_GET_FIELD(t_PythonOdmParser, muSet),
              DECLARE_GET_FIELD(t_PythonOdmParser, self),
              DECLARE_GET_FIELD(t_PythonOdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonOdmParser__methods_[] = {
              DECLARE_METHOD(t_PythonOdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonOdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonOdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonOdmParser, getFileFormat, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, getMuSet, METH_NOARGS),
              DECLARE_METHOD(t_PythonOdmParser, pythonExtension, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, setMuCreated, METH_O),
              DECLARE_METHOD(t_PythonOdmParser, setMuParsed, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonOdmParser)[] = {
              { Py_tp_methods, t_PythonOdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonOdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonOdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
              NULL
            };

            DEFINE_TYPE(PythonOdmParser, t_PythonOdmParser, PythonOdmParser);
            PyObject *t_PythonOdmParser::wrap_Object(const PythonOdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonOdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonOdmParser *self = (t_PythonOdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonOdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonOdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonOdmParser *self = (t_PythonOdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonOdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonOdmParser), &PY_TYPE_DEF(PythonOdmParser), module, "PythonOdmParser", 1);
            }

            void t_PythonOdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "class_", make_descriptor(PythonOdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "wrapfn_", make_descriptor(t_PythonOdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonOdmParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonOdmParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonOdmParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonOdmParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonOdmParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;", (void *) t_PythonOdmParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonOdmParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonOdmParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonOdmParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonOdmParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonOdmParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonOdmParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonOdmParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonOdmParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonOdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonOdmParser::initializeClass, 1)))
                return NULL;
              return t_PythonOdmParser::wrap_Object(PythonOdmParser(((t_PythonOdmParser *) arg)->object.this$));
            }
            static PyObject *t_PythonOdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonOdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonOdmParser_of_(t_PythonOdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonOdmParser_finalize(t_PythonOdmParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonOdmParser_getFileFormat(t_PythonOdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFileFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(PythonOdmParser), (PyObject *) self, "getFileFormat", args, 2);
            }

            static PyObject *t_PythonOdmParser_getMuSet(t_PythonOdmParser *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuSet());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_PythonOdmParser_pythonExtension(t_PythonOdmParser *self, PyObject *args)
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

            static PyObject *t_PythonOdmParser_setMuCreated(t_PythonOdmParser *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMuCreated(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMuCreated", arg);
              return NULL;
            }

            static PyObject *t_PythonOdmParser_setMuParsed(t_PythonOdmParser *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMuParsed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMuParsed", arg);
              return NULL;
            }

            static jobject JNICALL t_PythonOdmParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
              {
                throwTypeError("build", result);
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

            static jboolean JNICALL t_PythonOdmParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonOdmParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
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

            static jboolean JNICALL t_PythonOdmParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonOdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonOdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonOdmParser_get__self(t_PythonOdmParser *self, void *data)
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
            static PyObject *t_PythonOdmParser_get__parameters_(t_PythonOdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_PythonOdmParser_get__fileFormat(t_PythonOdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static int t_PythonOdmParser_set__muCreated(t_PythonOdmParser *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMuCreated(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "muCreated", arg);
              return -1;
            }

            static int t_PythonOdmParser_set__muParsed(t_PythonOdmParser *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMuParsed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "muParsed", arg);
              return -1;
            }

            static PyObject *t_PythonOdmParser_get__muSet(t_PythonOdmParser *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuSet());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/KeplerianAnomalyUtility.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *KeplerianAnomalyUtility::class$ = NULL;
      jmethodID *KeplerianAnomalyUtility::mids$ = NULL;
      bool KeplerianAnomalyUtility::live$ = false;

      jclass KeplerianAnomalyUtility::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/KeplerianAnomalyUtility");

          mids$ = new jmethodID[max_mid];
          mids$[mid_ellipticEccentricToMean_82f92590f4247da1] = env->getStaticMethodID(cls, "ellipticEccentricToMean", "(DD)D");
          mids$[mid_ellipticEccentricToTrue_82f92590f4247da1] = env->getStaticMethodID(cls, "ellipticEccentricToTrue", "(DD)D");
          mids$[mid_ellipticMeanToEccentric_82f92590f4247da1] = env->getStaticMethodID(cls, "ellipticMeanToEccentric", "(DD)D");
          mids$[mid_ellipticMeanToTrue_82f92590f4247da1] = env->getStaticMethodID(cls, "ellipticMeanToTrue", "(DD)D");
          mids$[mid_ellipticTrueToEccentric_82f92590f4247da1] = env->getStaticMethodID(cls, "ellipticTrueToEccentric", "(DD)D");
          mids$[mid_ellipticTrueToMean_82f92590f4247da1] = env->getStaticMethodID(cls, "ellipticTrueToMean", "(DD)D");
          mids$[mid_hyperbolicEccentricToMean_82f92590f4247da1] = env->getStaticMethodID(cls, "hyperbolicEccentricToMean", "(DD)D");
          mids$[mid_hyperbolicEccentricToTrue_82f92590f4247da1] = env->getStaticMethodID(cls, "hyperbolicEccentricToTrue", "(DD)D");
          mids$[mid_hyperbolicMeanToEccentric_82f92590f4247da1] = env->getStaticMethodID(cls, "hyperbolicMeanToEccentric", "(DD)D");
          mids$[mid_hyperbolicMeanToTrue_82f92590f4247da1] = env->getStaticMethodID(cls, "hyperbolicMeanToTrue", "(DD)D");
          mids$[mid_hyperbolicTrueToEccentric_82f92590f4247da1] = env->getStaticMethodID(cls, "hyperbolicTrueToEccentric", "(DD)D");
          mids$[mid_hyperbolicTrueToMean_82f92590f4247da1] = env->getStaticMethodID(cls, "hyperbolicTrueToMean", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble KeplerianAnomalyUtility::ellipticEccentricToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticEccentricToMean_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticEccentricToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticEccentricToTrue_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticMeanToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticMeanToEccentric_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticMeanToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticMeanToTrue_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticTrueToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticTrueToEccentric_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticTrueToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticTrueToMean_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicEccentricToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicEccentricToMean_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicEccentricToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicEccentricToTrue_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicMeanToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicMeanToEccentric_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicMeanToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicMeanToTrue_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicTrueToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicTrueToEccentric_82f92590f4247da1], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicTrueToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicTrueToMean_82f92590f4247da1], a0, a1);
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
      static PyObject *t_KeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_KeplerianAnomalyUtility__methods_[] = {
        DECLARE_METHOD(t_KeplerianAnomalyUtility, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticTrueToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicTrueToMean, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KeplerianAnomalyUtility)[] = {
        { Py_tp_methods, t_KeplerianAnomalyUtility__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KeplerianAnomalyUtility)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(KeplerianAnomalyUtility, t_KeplerianAnomalyUtility, KeplerianAnomalyUtility);

      void t_KeplerianAnomalyUtility::install(PyObject *module)
      {
        installType(&PY_TYPE(KeplerianAnomalyUtility), &PY_TYPE_DEF(KeplerianAnomalyUtility), module, "KeplerianAnomalyUtility", 0);
      }

      void t_KeplerianAnomalyUtility::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "class_", make_descriptor(KeplerianAnomalyUtility::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "wrapfn_", make_descriptor(t_KeplerianAnomalyUtility::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KeplerianAnomalyUtility::initializeClass, 1)))
          return NULL;
        return t_KeplerianAnomalyUtility::wrap_Object(KeplerianAnomalyUtility(((t_KeplerianAnomalyUtility *) arg)->object.this$));
      }
      static PyObject *t_KeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KeplerianAnomalyUtility::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticEccentricToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticEccentricToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticMeanToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticMeanToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticTrueToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticTrueToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicEccentricToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicEccentricToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicMeanToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicMeanToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicTrueToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicTrueToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToMean", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer$PopulationSize::class$ = NULL;
            jmethodID *CMAESOptimizer$PopulationSize::mids$ = NULL;
            bool CMAESOptimizer$PopulationSize::live$ = false;

            jclass CMAESOptimizer$PopulationSize::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getPopulationSize_d6ab429752e7c267] = env->getMethodID(cls, "getPopulationSize", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer$PopulationSize::CMAESOptimizer$PopulationSize(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            jint CMAESOptimizer$PopulationSize::getPopulationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getPopulationSize_d6ab429752e7c267]);
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_CMAESOptimizer$PopulationSize_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$PopulationSize_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$PopulationSize_of_(t_CMAESOptimizer$PopulationSize *self, PyObject *args);
            static int t_CMAESOptimizer$PopulationSize_init_(t_CMAESOptimizer$PopulationSize *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer$PopulationSize_getPopulationSize(t_CMAESOptimizer$PopulationSize *self);
            static PyObject *t_CMAESOptimizer$PopulationSize_get__populationSize(t_CMAESOptimizer$PopulationSize *self, void *data);
            static PyObject *t_CMAESOptimizer$PopulationSize_get__parameters_(t_CMAESOptimizer$PopulationSize *self, void *data);
            static PyGetSetDef t_CMAESOptimizer$PopulationSize__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer$PopulationSize, populationSize),
              DECLARE_GET_FIELD(t_CMAESOptimizer$PopulationSize, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer$PopulationSize__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, getPopulationSize, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer$PopulationSize)[] = {
              { Py_tp_methods, t_CMAESOptimizer$PopulationSize__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer$PopulationSize_init_ },
              { Py_tp_getset, t_CMAESOptimizer$PopulationSize__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer$PopulationSize)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer$PopulationSize, t_CMAESOptimizer$PopulationSize, CMAESOptimizer$PopulationSize);
            PyObject *t_CMAESOptimizer$PopulationSize::wrap_Object(const CMAESOptimizer$PopulationSize& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$PopulationSize::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$PopulationSize *self = (t_CMAESOptimizer$PopulationSize *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer$PopulationSize::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$PopulationSize::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$PopulationSize *self = (t_CMAESOptimizer$PopulationSize *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer$PopulationSize::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer$PopulationSize), &PY_TYPE_DEF(CMAESOptimizer$PopulationSize), module, "CMAESOptimizer$PopulationSize", 0);
            }

            void t_CMAESOptimizer$PopulationSize::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "class_", make_descriptor(CMAESOptimizer$PopulationSize::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "wrapfn_", make_descriptor(t_CMAESOptimizer$PopulationSize::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer$PopulationSize::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer$PopulationSize::wrap_Object(CMAESOptimizer$PopulationSize(((t_CMAESOptimizer$PopulationSize *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer$PopulationSize_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer$PopulationSize::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_of_(t_CMAESOptimizer$PopulationSize *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer$PopulationSize_init_(t_CMAESOptimizer$PopulationSize *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              CMAESOptimizer$PopulationSize object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = CMAESOptimizer$PopulationSize(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_getPopulationSize(t_CMAESOptimizer$PopulationSize *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPopulationSize());
              return PyLong_FromLong((long) result);
            }
            static PyObject *t_CMAESOptimizer$PopulationSize_get__parameters_(t_CMAESOptimizer$PopulationSize *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_get__populationSize(t_CMAESOptimizer$PopulationSize *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPopulationSize());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/refraction/AtmosphericComputationParameters.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *AtmosphericComputationParameters::class$ = NULL;
        jmethodID *AtmosphericComputationParameters::mids$ = NULL;
        bool AtmosphericComputationParameters::live$ = false;

        jclass AtmosphericComputationParameters::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/AtmosphericComputationParameters");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_configureCorrectionGrid_bb9ef741884b06c3] = env->getMethodID(cls, "configureCorrectionGrid", "(Lorg/orekit/rugged/linesensor/LineSensor;II)V");
            mids$[mid_getDefaultInverseLocMargin_9981f74b2d109da6] = env->getMethodID(cls, "getDefaultInverseLocMargin", "()D");
            mids$[mid_getInverseLocMargin_9981f74b2d109da6] = env->getMethodID(cls, "getInverseLocMargin", "()D");
            mids$[mid_getMaxLineSensor_9981f74b2d109da6] = env->getMethodID(cls, "getMaxLineSensor", "()D");
            mids$[mid_getMinLineSensor_9981f74b2d109da6] = env->getMethodID(cls, "getMinLineSensor", "()D");
            mids$[mid_getNbLineGrid_d6ab429752e7c267] = env->getMethodID(cls, "getNbLineGrid", "()I");
            mids$[mid_getNbPixelGrid_d6ab429752e7c267] = env->getMethodID(cls, "getNbPixelGrid", "()I");
            mids$[mid_getSensorName_d2c8eb4129821f0e] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");
            mids$[mid_getUgrid_be783177b060994b] = env->getMethodID(cls, "getUgrid", "()[D");
            mids$[mid_getVgrid_be783177b060994b] = env->getMethodID(cls, "getVgrid", "()[D");
            mids$[mid_setGridSteps_b5d23e6c0858e8ed] = env->getMethodID(cls, "setGridSteps", "(II)V");
            mids$[mid_setInverseLocMargin_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setInverseLocMargin", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AtmosphericComputationParameters::AtmosphericComputationParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void AtmosphericComputationParameters::configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_configureCorrectionGrid_bb9ef741884b06c3], a0.this$, a1, a2);
        }

        jdouble AtmosphericComputationParameters::getDefaultInverseLocMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDefaultInverseLocMargin_9981f74b2d109da6]);
        }

        jdouble AtmosphericComputationParameters::getInverseLocMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInverseLocMargin_9981f74b2d109da6]);
        }

        jdouble AtmosphericComputationParameters::getMaxLineSensor() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxLineSensor_9981f74b2d109da6]);
        }

        jdouble AtmosphericComputationParameters::getMinLineSensor() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinLineSensor_9981f74b2d109da6]);
        }

        jint AtmosphericComputationParameters::getNbLineGrid() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbLineGrid_d6ab429752e7c267]);
        }

        jint AtmosphericComputationParameters::getNbPixelGrid() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixelGrid_d6ab429752e7c267]);
        }

        ::java::lang::String AtmosphericComputationParameters::getSensorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_d2c8eb4129821f0e]));
        }

        JArray< jdouble > AtmosphericComputationParameters::getUgrid() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUgrid_be783177b060994b]));
        }

        JArray< jdouble > AtmosphericComputationParameters::getVgrid() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVgrid_be783177b060994b]));
        }

        void AtmosphericComputationParameters::setGridSteps(jint a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setGridSteps_b5d23e6c0858e8ed], a0, a1);
        }

        void AtmosphericComputationParameters::setInverseLocMargin(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInverseLocMargin_1ad26e8c8c0cd65b], a0);
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
    namespace rugged {
      namespace refraction {
        static PyObject *t_AtmosphericComputationParameters_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericComputationParameters_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AtmosphericComputationParameters_init_(t_AtmosphericComputationParameters *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AtmosphericComputationParameters_configureCorrectionGrid(t_AtmosphericComputationParameters *self, PyObject *args);
        static PyObject *t_AtmosphericComputationParameters_getDefaultInverseLocMargin(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getInverseLocMargin(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getMaxLineSensor(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getMinLineSensor(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getNbLineGrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getNbPixelGrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getSensorName(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getUgrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getVgrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_setGridSteps(t_AtmosphericComputationParameters *self, PyObject *args);
        static PyObject *t_AtmosphericComputationParameters_setInverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg);
        static PyObject *t_AtmosphericComputationParameters_get__defaultInverseLocMargin(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__inverseLocMargin(t_AtmosphericComputationParameters *self, void *data);
        static int t_AtmosphericComputationParameters_set__inverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__maxLineSensor(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__minLineSensor(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__nbLineGrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__nbPixelGrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__sensorName(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__ugrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__vgrid(t_AtmosphericComputationParameters *self, void *data);
        static PyGetSetDef t_AtmosphericComputationParameters__fields_[] = {
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, defaultInverseLocMargin),
          DECLARE_GETSET_FIELD(t_AtmosphericComputationParameters, inverseLocMargin),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, maxLineSensor),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, minLineSensor),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, nbLineGrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, nbPixelGrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, sensorName),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, ugrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, vgrid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AtmosphericComputationParameters__methods_[] = {
          DECLARE_METHOD(t_AtmosphericComputationParameters, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, configureCorrectionGrid, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getDefaultInverseLocMargin, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getInverseLocMargin, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getMaxLineSensor, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getMinLineSensor, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getNbLineGrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getNbPixelGrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getSensorName, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getUgrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getVgrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, setGridSteps, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, setInverseLocMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AtmosphericComputationParameters)[] = {
          { Py_tp_methods, t_AtmosphericComputationParameters__methods_ },
          { Py_tp_init, (void *) t_AtmosphericComputationParameters_init_ },
          { Py_tp_getset, t_AtmosphericComputationParameters__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AtmosphericComputationParameters)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AtmosphericComputationParameters, t_AtmosphericComputationParameters, AtmosphericComputationParameters);

        void t_AtmosphericComputationParameters::install(PyObject *module)
        {
          installType(&PY_TYPE(AtmosphericComputationParameters), &PY_TYPE_DEF(AtmosphericComputationParameters), module, "AtmosphericComputationParameters", 0);
        }

        void t_AtmosphericComputationParameters::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "class_", make_descriptor(AtmosphericComputationParameters::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "wrapfn_", make_descriptor(t_AtmosphericComputationParameters::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AtmosphericComputationParameters_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AtmosphericComputationParameters::initializeClass, 1)))
            return NULL;
          return t_AtmosphericComputationParameters::wrap_Object(AtmosphericComputationParameters(((t_AtmosphericComputationParameters *) arg)->object.this$));
        }
        static PyObject *t_AtmosphericComputationParameters_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AtmosphericComputationParameters::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AtmosphericComputationParameters_init_(t_AtmosphericComputationParameters *self, PyObject *args, PyObject *kwds)
        {
          AtmosphericComputationParameters object((jobject) NULL);

          INT_CALL(object = AtmosphericComputationParameters());
          self->object = object;

          return 0;
        }

        static PyObject *t_AtmosphericComputationParameters_configureCorrectionGrid(t_AtmosphericComputationParameters *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "kII", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.configureCorrectionGrid(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "configureCorrectionGrid", args);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_getDefaultInverseLocMargin(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDefaultInverseLocMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getInverseLocMargin(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInverseLocMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getMaxLineSensor(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxLineSensor());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getMinLineSensor(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinLineSensor());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getNbLineGrid(t_AtmosphericComputationParameters *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbLineGrid());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getNbPixelGrid(t_AtmosphericComputationParameters *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixelGrid());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getSensorName(t_AtmosphericComputationParameters *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSensorName());
          return j2p(result);
        }

        static PyObject *t_AtmosphericComputationParameters_getUgrid(t_AtmosphericComputationParameters *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getUgrid());
          return result.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_getVgrid(t_AtmosphericComputationParameters *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVgrid());
          return result.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_setGridSteps(t_AtmosphericComputationParameters *self, PyObject *args)
        {
          jint a0;
          jint a1;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(self->object.setGridSteps(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGridSteps", args);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_setInverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInverseLocMargin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInverseLocMargin", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_get__defaultInverseLocMargin(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDefaultInverseLocMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__inverseLocMargin(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInverseLocMargin());
          return PyFloat_FromDouble((double) value);
        }
        static int t_AtmosphericComputationParameters_set__inverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInverseLocMargin(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "inverseLocMargin", arg);
          return -1;
        }

        static PyObject *t_AtmosphericComputationParameters_get__maxLineSensor(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxLineSensor());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__minLineSensor(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinLineSensor());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__nbLineGrid(t_AtmosphericComputationParameters *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbLineGrid());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__nbPixelGrid(t_AtmosphericComputationParameters *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixelGrid());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__sensorName(t_AtmosphericComputationParameters *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSensorName());
          return j2p(value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__ugrid(t_AtmosphericComputationParameters *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getUgrid());
          return value.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_get__vgrid(t_AtmosphericComputationParameters *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVgrid());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractTimeInterpolator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "java/util/Collection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_checkInterpolatorCompatibilityWithSampleSize_e0c9304973cf2143] = env->getStaticMethodID(cls, "checkInterpolatorCompatibilityWithSampleSize", "(Lorg/orekit/time/TimeInterpolator;I)V");
          mids$[mid_getCentralDate_cc9bc18ecf3c3f53] = env->getStaticMethodID(cls, "getCentralDate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ImmutableTimeStampedCache;D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getExtrapolationThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_d6ab429752e7c267] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_d751c1a57012b438] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_96cdbf28d116a6bf] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_12f5cef05abb91a8] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_05cdc96cbb5fa5a5] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_addOptionalSubInterpolatorIfDefined_b595d182fd7509c4] = env->getMethodID(cls, "addOptionalSubInterpolatorIfDefined", "(Lorg/orekit/time/TimeInterpolator;Ljava/util/List;)V");
          mids$[mid_getTimeParameter_4da9543dba3042e5] = env->getMethodID(cls, "getTimeParameter", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = env->getStaticDoubleField(cls, "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC");
          DEFAULT_INTERPOLATION_POINTS = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_POINTS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractTimeInterpolator::AbstractTimeInterpolator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

      void AbstractTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::TimeInterpolator & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkInterpolatorCompatibilityWithSampleSize_e0c9304973cf2143], a0.this$, a1);
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeInterpolator::getCentralDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::ImmutableTimeStampedCache & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getCentralDate_cc9bc18ecf3c3f53], a0.this$, a1.this$, a2));
      }

      jdouble AbstractTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_9981f74b2d109da6]);
      }

      jint AbstractTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_d6ab429752e7c267]);
      }

      ::java::util::List AbstractTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_d751c1a57012b438]));
      }

      ::org::orekit::time::TimeStamped AbstractTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_96cdbf28d116a6bf], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeStamped AbstractTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_12f5cef05abb91a8], a0.this$, a1.this$));
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
      static PyObject *t_AbstractTimeInterpolator_getCentralDate(PyTypeObject *type, PyObject *args);
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
        DECLARE_METHOD(t_AbstractTimeInterpolator, getCentralDate, METH_VARARGS | METH_CLASS),
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

      static PyObject *t_AbstractTimeInterpolator_getCentralDate(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::ImmutableTimeStampedCache a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "kKD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ImmutableTimeStampedCache::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_ImmutableTimeStampedCache::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbstractTimeInterpolator::getCentralDate(a0, a1, a2));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCentralDate", args);
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
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalCovarianceMetadataKey::class$ = NULL;
            jmethodID *AdditionalCovarianceMetadataKey::mids$ = NULL;
            bool AdditionalCovarianceMetadataKey::live$ = false;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::COMMENT = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MAX = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MIN = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_POSITION = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_VELOCITY = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DENSITY_FORECAST_UNCERTAINTY = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::SCREENING_DATA_SOURCE = NULL;

            jclass AdditionalCovarianceMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_e4600b5e084f38b1] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)Z");
                mids$[mid_valueOf_df300428e2364229] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;");
                mids$[mid_values_678e799724d986ff] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR_MAX = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR_MIN = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DCP_SENSITIVITY_VECTOR_POSITION = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DCP_SENSITIVITY_VECTOR_POSITION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DCP_SENSITIVITY_VECTOR_VELOCITY = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DCP_SENSITIVITY_VECTOR_VELOCITY", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DENSITY_FORECAST_UNCERTAINTY = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DENSITY_FORECAST_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                SCREENING_DATA_SOURCE = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "SCREENING_DATA_SOURCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdditionalCovarianceMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_e4600b5e084f38b1], a0.this$, a1.this$, a2.this$);
            }

            AdditionalCovarianceMetadataKey AdditionalCovarianceMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdditionalCovarianceMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_df300428e2364229], a0.this$));
            }

            JArray< AdditionalCovarianceMetadataKey > AdditionalCovarianceMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdditionalCovarianceMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_678e799724d986ff]));
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
            static PyObject *t_AdditionalCovarianceMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadataKey_of_(t_AdditionalCovarianceMetadataKey *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_process(t_AdditionalCovarianceMetadataKey *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdditionalCovarianceMetadataKey_get__parameters_(t_AdditionalCovarianceMetadataKey *self, void *data);
            static PyGetSetDef t_AdditionalCovarianceMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdditionalCovarianceMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalCovarianceMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalCovarianceMetadataKey)[] = {
              { Py_tp_methods, t_AdditionalCovarianceMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdditionalCovarianceMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalCovarianceMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdditionalCovarianceMetadataKey, t_AdditionalCovarianceMetadataKey, AdditionalCovarianceMetadataKey);
            PyObject *t_AdditionalCovarianceMetadataKey::wrap_Object(const AdditionalCovarianceMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalCovarianceMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalCovarianceMetadataKey *self = (t_AdditionalCovarianceMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdditionalCovarianceMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalCovarianceMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalCovarianceMetadataKey *self = (t_AdditionalCovarianceMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdditionalCovarianceMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalCovarianceMetadataKey), &PY_TYPE_DEF(AdditionalCovarianceMetadataKey), module, "AdditionalCovarianceMetadataKey", 0);
            }

            void t_AdditionalCovarianceMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "class_", make_descriptor(AdditionalCovarianceMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "wrapfn_", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdditionalCovarianceMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "COMMENT", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR_MAX", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR_MIN", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DCP_SENSITIVITY_VECTOR_POSITION", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_POSITION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DCP_SENSITIVITY_VECTOR_VELOCITY", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_VELOCITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DENSITY_FORECAST_UNCERTAINTY", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DENSITY_FORECAST_UNCERTAINTY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "SCREENING_DATA_SOURCE", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::SCREENING_DATA_SOURCE)));
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalCovarianceMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdditionalCovarianceMetadataKey::wrap_Object(AdditionalCovarianceMetadataKey(((t_AdditionalCovarianceMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdditionalCovarianceMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalCovarianceMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_of_(t_AdditionalCovarianceMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_process(t_AdditionalCovarianceMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdditionalCovarianceMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadataKey::valueOf(a0));
                return t_AdditionalCovarianceMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdditionalCovarianceMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdditionalCovarianceMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdditionalCovarianceMetadataKey_get__parameters_(t_AdditionalCovarianceMetadataKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
